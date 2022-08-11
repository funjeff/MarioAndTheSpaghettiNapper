/*
 * luigi_rope_inc.c
 *
 *  Created on: Aug 9, 2022
 *      Author: jeffrey
 */


void bhv_luigi_rope_loop (void){

    if (o->weegCount == o->maxWeegCount){
    	obj_set_angle(o,o->parentObj->oFaceAnglePitch + 32768,o->parentObj->oFaceAngleYaw + 52768, o->parentObj->oFaceAngleRoll);

        cur_obj_set_pos_relative(o->parentObj, 30, 250, 80);
    } else {
    	obj_set_angle(o,o->parentObj->oFaceAnglePitch,o->parentObj->oFaceAngleYaw, o->parentObj->oFaceAngleRoll);

        cur_obj_set_pos_relative(o->parentObj, 60, 0, 180);

    }

    if (gMarioState->action != ACT_SWINGING_ROPE && gMarioState->action != ACT_SWINGING_ROPE_FALL && gMarioState->action != ACT_SWINGING_ROPE_JUMP ){
    	obj_mark_for_deletion(o);
    }
}

void bhv_luigi_rope_init (void){
	if (o->weegCount != 0){
		 struct Object * luigi = spawn_object_relative(0,0,0,0, o, MODEL_LUIGI_ROPE,bhvLuigiRope);

	     luigi->weegCount = o->weegCount - 1;
	     luigi->maxWeegCount = o->maxWeegCount;

	} else {
		struct Object * bomb = spawn_object_relative(0,0,0,0, o, MODEL_BOWSER_BOMB,bhvBowserBomb);

		bomb->bombRopeEnd = 1;
	}
}

