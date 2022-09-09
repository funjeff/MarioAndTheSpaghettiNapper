#include "src/game/print.h"

/*
 * luigiable_bomb.inc.c
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */
struct ObjectHitbox sRestartCheckpointHitbox = {
    /* interactType: */ 0,
    /* downOffset: */65,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */800,
    /* height: */ 250,
    /* hurtboxRadius: */ 100,
    /* hurtboxHeight: */ 100,
};

void bhv_restart_checkpoint_loop(void) {
	obj_set_hitbox(o, &sRestartCheckpointHitbox);

	if (obj_check_if_collided_with_object(o, gMarioObject) ) {


		if (GET_BPARAM4(o->oBehParams) == 1){
			gWarpCheckpoint.courseNum = COURSE_TTC;

			gWarpCheckpoint.levelID = LEVEL_TTC;
		}

		gWarpCheckpoint.areaNum = GET_BPARAM3(o->oBehParams);

    	gWarpCheckpoint.warpNode = GET_BPARAM2(o->oBehParams);
    }

	}
