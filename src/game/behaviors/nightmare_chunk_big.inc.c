#include "libc/math.h"
#include "src/game/print.h"

/*
 * luigiable_bomb.inc.c
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */
struct ObjectHitbox sBigNightmareChunckHitbox = {
    /* interactType: */ 0,
    /* downOffset: */255,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 450,
    /* height: */ 650,
    /* hurtboxRadius: */ 650,
    /* hurtboxHeight: */ 200,
};


void bhv_big_nightmare_chunk_init (void){
	 obj_scale(o, 2);
}
void bhv_big_nightmare_chunk_loop(void) {
    obj_set_hitbox(o, &sBigNightmareChunckHitbox);
    if (obj_check_if_collided_with_object(o, gMarioObject) && o->nightmareChunkTimer == 0) {

    	uintptr_t *behaviorAddr = segmented_to_virtual(bhvNightmareChunk);

    	struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

		struct Object * chunk = (struct Object *) listHead->next;

		u8 found = 0;

   		while (chunk != (struct Object *) listHead) {
   			if (chunk->behavior == behaviorAddr) {
   				found = 1;
   				break;
   			}
   		chunk = (struct Object *) chunk->header.next;
   		}

   		if (!found){
   			o->nightmareChunkTimer = 1;
    		set_mario_action(gMarioState, ACT_DOING_NOTHING, 0);
    		if (gMarioState->riddenObj != NULL){
    		  	 gMarioState->riddenObj->oInteractStatus = 4194304; //INT_STATUS_STOP_RIDING
    		  	 gMarioState->riddenObj = NULL;
    		}
    		set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_CENTER);
    		o->nightmareOgX = o->oPosX;
    		o->nightmareOgY = o->oPosY;
    		o->nightmareOgZ = o->oPosZ;
   		}
    }

    if (o->nightmareChunkTimer != 0 && o->nightmareChunkTimer < 90){
			if (o->nightmareChunkTimer == 60){
				cur_obj_disable_rendering();
				play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, o->header.gfx.cameraToObject);
				struct Object *explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
				explosion->oGraphYOffset += 100.0f;
			}

			if (o->nightmareChunkTimer % 10 == 0 && o->nightmareChunkTimer <= 60){
				if (RAND(4)) {
					if (RAND(3)){
						play_sound(SOUND_GENERAL_WALL_EXPLOSION, o->header.gfx.cameraToObject);
					} else {
						play_sound(SOUND_OBJ_POUNDING_LOUD, o->header.gfx.cameraToObject);
					}
				} else {
					play_sound(SOUND_OBJ_WHOMP, o->header.gfx.cameraToObject);
				}
			}

			o->nightmareChunkTimer++;

			if (RAND(3)){
				o->oPosX = o->nightmareOgX - (o->nightmareChunkTimer/2);
			} else {
				o->oPosX = o->nightmareOgX + (o->nightmareChunkTimer/2);
			}

			if (RAND(3)){
				o->oPosY = o->nightmareOgY - (o->nightmareChunkTimer/2);
			 } else {
				o->oPosY = o->nightmareOgY + (o->nightmareChunkTimer/2);
			 }

			if (RAND(3)){
				o->oPosZ = o->nightmareOgZ - (o->nightmareChunkTimer/2);
			} else {
				o->oPosZ = o->nightmareOgZ + (o->nightmareChunkTimer/2);
			}

			if (o->nightmareChunkTimer == 90){
				struct Object * pipe = spawn_object_relative(0,0,-580,0, o, MODEL_CASTLE_GROUNDS_WARP_PIPE,bhvWarpPipe);

				SET_BPARAM2(pipe->oBehParams, GET_BPARAM2(o->oBehParams));
				play_sound(SOUND_GENERAL2_STAR_APPEARS, o->header.gfx.cameraToObject);
			}

    	}

    	if (o->nightmareChunkTimer >= 90){
    		o->nightmareChunkTimer++;

    		uintptr_t *behaviorAddr = segmented_to_virtual(bhvWarpPipe);

	    	struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

			struct Object * pipe = (struct Object *) listHead->next;

    		 while (pipe != (struct Object *) listHead) {
    		 	if (pipe->behavior == behaviorAddr) {
    		 		break;
    		 	}
    		 pipe = (struct Object *) pipe->header.next;
    		 }

    		 pipe->oPosY = pipe->oPosY + 3;



    		 if (o->nightmareChunkTimer == 150){
    			 obj_mark_for_deletion(o);
    			 set_mario_action(gMarioState, ACT_IDLE, 0);
    		 }
    	}

	}
