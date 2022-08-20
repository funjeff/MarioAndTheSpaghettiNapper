#include "libc/math.h"

/*
 * luigiable_bomb.inc.c
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */
struct ObjectHitbox sLuigiBombHitbox = {
    /* interactType: */ 0,
    /* downOffset: */200,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 1800,
    /* height: */ 500,
    /* hurtboxRadius: */ 0,
    /* hurtboxHeight: */ 0,
};

void bhv_luigiable_bomb_loop(void) {
    obj_set_hitbox(o, &sLuigiBombHitbox);

    if (o->luigiBombMarkedForRespawn){
    	cur_obj_enable_rendering();
    	o->luigiBombMarkedForRespawn = 0;
    }

    if (o->luigiBombBeingCarried){
    	o->luigiBombCanBePickedUp = 0;
    } else {
    	if (!(gMarioState->controller->buttonDown & B_BUTTON)){
    		o->luigiBombCanBePickedUp = 1;
    	}
    }

    if (obj_check_if_collided_with_object(o, gMarioObject)) {

    	if ((gMarioState->controller->buttonDown & B_BUTTON) && o->luigiBombCanBePickedUp) {

    	  if (gMarioState->action == ACT_RIDING_SHELL_GROUND){

    		  struct Object * mario_puppet = spawn_object_relative(0,0,200,0, gMarioObject, MODEL_MARIO_PUPPET, bhvMarioPuppet);

			  struct Object * luigi = spawn_object_relative(0,0,0,0, mario_puppet, MODEL_LUIGI_ROPE,bhvLuigiRope);

			  float realComponent = lateral_dist_between_objects(o,gMarioObject);

			  o->luigiBombBeingCarried = 1;

			  luigi->weegCount = (realComponent/250) - 1;
			  luigi->maxWeegCount = luigi->weegCount;

			  mario_puppet->mario_puppet_spin_speed = 0x400;

			  obj_angle_to_object(mario_puppet,o);


			  set_mario_action(gMarioState, ACT_SWINGING_ROPE, 0);
			  cur_obj_disable_rendering();
			}

    	  if (gMarioState->action == ACT_RIDING_SHELL_JUMP || gMarioState->action == ACT_RIDING_SHELL_FALL){

    		  struct Object * mario_puppet = spawn_object_relative(0,0,200,0, gMarioObject, MODEL_MARIO_PUPPET, bhvMarioPuppet);

    		  struct Object * luigi = spawn_object_relative(0,0,0,0, mario_puppet, MODEL_LUIGI_ROPE,bhvLuigiRope);

    		  float realComponent = lateral_dist_between_objects(o,gMarioObject);

    		  o->luigiBombBeingCarried = 1;

    		  luigi->weegCount = (realComponent/250) - 1;
    		  luigi->maxWeegCount = luigi->weegCount;

    		  mario_puppet->mario_puppet_spin_speed = 0x900;

			  obj_angle_to_object(mario_puppet,o);

  		      set_mario_action(gMarioState, ACT_SWINGING_ROPE_FALL, 0);
   		      cur_obj_disable_rendering();
    	  	  }
    	}

    }
}
