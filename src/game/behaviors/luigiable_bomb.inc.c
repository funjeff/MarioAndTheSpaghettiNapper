#include "libc/math.h"

/*
 * luigiable_bomb.inc.c
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */
struct ObjectHitbox sLuigiBombHitbox = {
    /* interactType: */ 0,
    /* downOffset: */0,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 1800,
    /* height: */ 500,
    /* hurtboxRadius: */ 1800,
    /* hurtboxHeight: */ 200,
};

void bhv_luigiable_bomb_loop(void) {
    obj_set_hitbox(o, &sLuigiBombHitbox);
    if (obj_check_if_collided_with_object(o, gMarioObject)) {

    	if ((gMarioState->controller->buttonDown & R_TRIG)) {

    	  if (gMarioState->action == ACT_RIDING_SHELL_GROUND){
			  struct Object * luigi = spawn_object_relative(0,0,0,0, gMarioObject, MODEL_LUIGI_ROPE,bhvLuigiRope);

			  float realComponent = lateral_dist_between_objects(o,gMarioObject);

			  luigi->weegCount = (realComponent/250) - 1;
			  luigi->maxWeegCount = luigi->weegCount;

			  gMarioState->angleVel[1] = 0x400;

			  set_mario_action(gMarioState, ACT_SWINGING_ROPE, 0);
			  obj_mark_for_deletion(o);
			}

    	  if (gMarioState->action == ACT_RIDING_SHELL_JUMP || gMarioState->action == ACT_RIDING_SHELL_FALL){

    		       struct Object * luigi = spawn_object_relative(0,0,0,0, gMarioObject, MODEL_LUIGI_ROPE,bhvLuigiRope);

    		       float realComponent = lateral_dist_between_objects(o,gMarioObject);

    		       luigi->weegCount = (realComponent/250) - 1;
    		       luigi->maxWeegCount = luigi->weegCount;

    		       gMarioState->angleVel[1] = 0x900;

    		      set_mario_action(gMarioState, ACT_SWINGING_ROPE_FALL, 0);
    		      obj_mark_for_deletion(o);
    	  	  }
    	}

    }
}
