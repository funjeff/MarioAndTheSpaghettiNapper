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
