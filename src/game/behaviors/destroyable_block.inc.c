#include "src/game/print.h"


struct ObjectHitbox sDestroyableBlockHitbox = {
    /* interactType:      */ INTERACT_NONE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 4,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 50,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 50,
    /* hurtboxHeight:     */ 50,
};

/*
 * destroyable_block.inc.c
 *
 *  Created on: Aug 31, 2022
 *      Author: 12242
 */




void bhv_destroyable_block_loop(void){

	if (!GET_BPARAM1(o->oBehParams)){
		if (gMarioState->pos[1] > o->oPosY - 500 && gMarioState->pos[1] < o->oPosY + 500){
			if (gMarioState->pos[0] > o->oPosX - 500 && gMarioState->pos[0] < o->oPosX + 500){
				if (gMarioState->pos[2] > o->oPosZ - 500 && gMarioState->pos[2] < o->oPosZ + 500){
					play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, o->header.gfx.cameraToObject);
					obj_mark_for_deletion(o);
				}
			}
		}
	} else {
		if (gMarioState->pos[1] > o->oPosY - GET_BPARAM1(o->oBehParams) * 8 && gMarioState->pos[1] < o->oPosY + GET_BPARAM1(o->oBehParams) * 8){
					if (gMarioState->pos[0] > o->oPosX - GET_BPARAM1(o->oBehParams) * 8 && gMarioState->pos[0] < o->oPosX + GET_BPARAM1(o->oBehParams) * 8){
						if (gMarioState->pos[2] > o->oPosZ - GET_BPARAM1(o->oBehParams) * 8 && gMarioState->pos[2] < o->oPosZ + GET_BPARAM1(o->oBehParams) * 8){
							play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, o->header.gfx.cameraToObject);
							obj_mark_for_deletion(o);
						}
					}
				}
	}
}
