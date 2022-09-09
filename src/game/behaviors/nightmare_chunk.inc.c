#include "libc/math.h"
#include "src/game/print.h"

/*
 * luigiable_bomb.inc.c
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */
struct ObjectHitbox sNightmareChunckHitbox = {
    /* interactType: */ 0,
    /* downOffset: */65,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 100,
    /* height: */ 250,
    /* hurtboxRadius: */ 100,
    /* hurtboxHeight: */ 100,
};

struct ObjectHitbox sNightmareChunckExpandedHitbox = {
    /* interactType: */ 0,
    /* downOffset: */65,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 300,
    /* height: */ 250,
    /* hurtboxRadius: */ 100,
    /* hurtboxHeight: */ 200,
};

void bhv_nightmare_chunk_loop(void) {
	if (!GET_BPARAM1(o->oBehParams)) {
		obj_set_hitbox(o, &sNightmareChunckHitbox);
	} else {
		obj_set_hitbox(o, &sNightmareChunckExpandedHitbox);
	}
    if (obj_check_if_collided_with_object(o, gMarioObject) && o->nightmareChunkTimer == 0) {
    	o->nightmareChunkTimer = 1;
    	set_mario_action(gMarioState, ACT_DISAPPEARED, 0);
    	gMarioState->bigBallCamera = 2;

    	o->nightmareOgX = o->oPosX;
    	o->nightmareOgY = o->oPosY;
    	o->nightmareOgZ = o->oPosZ;
    	if (gMarioState->riddenObj != NULL){
    	  	 gMarioState->riddenObj->oInteractStatus = 4194304; //INT_STATUS_STOP_RIDING
    	   	 gMarioState->riddenObj = NULL;
    	}
    }

    if (o->nightmareChunkTimer != 0){
			if (o->nightmareChunkTimer == 60){
				cur_obj_disable_rendering();
				play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, o->header.gfx.cameraToObject);
				struct Object *explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
				explosion->oGraphYOffset += 100.0f;
			}

			if (o->nightmareChunkTimer == 90){
				gMarioState->usedObj = o;
				level_trigger_warp(gMarioState, WARP_OP_WARP_OBJECT);
				obj_mark_for_deletion(o);
				gMarioState->bigBallCamera = 0;
				if (GET_BPARAM3(o->oBehParams)){
					uintptr_t *behaviorAddr = segmented_to_virtual(bhvEarthwakeBlock);

					uintptr_t *behaviorAddr2 = segmented_to_virtual(bhvEarthwakeHand);

					uintptr_t *behaviorAddr3 = segmented_to_virtual(bhvEarthwakeLeftShoulder);

					uintptr_t *behaviorAddr4 = segmented_to_virtual(bhvEarthwakeRightShoulder);


					struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

					struct Object *block = (struct Object *) listHead->next;

					while (block != (struct Object *) listHead) {
						if (block->behavior == behaviorAddr || block->behavior == behaviorAddr3|| block->behavior == behaviorAddr4) {
							if (block->earthwakeSegment == GET_BPARAM3(o->oBehParams)){
								block->earthwakeFallTime = 500;
							}
						 }
						block = (struct Object *) block->header.next;
					}

					struct ObjectNode * listHead2 = &gObjectLists[get_object_list_from_behavior(behaviorAddr2)];
					struct Object *block2 = (struct Object *) listHead2->next;

					while (block2 != (struct Object *) listHead2) {
					if (block2->behavior == behaviorAddr2) {
						if (block2->earthwakeSegment == GET_BPARAM3(o->oBehParams)){
							block2->earthwakeFallTime = 500;
						}
					}
					block2 = (struct Object *) block2->header.next;
				}
				}

			}

			if (o->nightmareChunkTimer % 10 == 0 && o->nightmareChunkTimer <= 60){
				if (RAND(4)) {
					if (RAND(3)){
						play_sound(SOUND_MARIO_PUNCH_YAH, o->header.gfx.cameraToObject);
					} else {
						play_sound(SOUND_MARIO_PUNCH_WAH, o->header.gfx.cameraToObject);
					}
				} else {
					play_sound(SOUND_MARIO_PUNCH_HOO, o->header.gfx.cameraToObject);
				}
			}

			o->nightmareChunkTimer++;

			if (RAND(3)){
				o->oPosX = o->nightmareOgX - (o->nightmareChunkTimer/5);
			} else {
				o->oPosX = o->nightmareOgX + (o->nightmareChunkTimer/5);
			}

			if (RAND(3)){
				o->oPosY = o->nightmareOgY - (o->nightmareChunkTimer/5);
			 } else {
				o->oPosY = o->nightmareOgY + (o->nightmareChunkTimer/5);
			 }

			if (RAND(3)){
				o->oPosZ = o->nightmareOgZ - (o->nightmareChunkTimer/5);
			} else {
				o->oPosZ = o->nightmareOgZ + (o->nightmareChunkTimer/5);
			}
    	}
	}
