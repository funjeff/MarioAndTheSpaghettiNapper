/*
 * bombable_door.inc.c
 *
 *  Created on: Aug 19, 2022
 *      Author: 12242
 */

void bhv_earthwake_block_loop (void){

	if (o->earthwakeAction == 1){
		obj_set_angle(o,o->oFaceAnglePitch - 200,o->oFaceAngleYaw, o->oFaceAngleRoll);
	}
	if (o->earthwakeAction == 2){
		obj_set_angle(o,o->oFaceAnglePitch + 200,o->oFaceAngleYaw, o->oFaceAngleRoll);
	}

	if (o->earthwakeAction == 3){
		obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw, o->oFaceAngleRoll - 200);
	}
	if (o->earthwakeAction == 4){
		obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw, o->oFaceAngleRoll + 200);
	}


	if (o->earthwakeDirection == 1){
		o->oPosX = o->oPosX + 20;
		o->earthwakeMoveTime = o->earthwakeMoveTime - 1;
		if (o->earthwakeMoveTime == 0){
			o->earthwakeMoveTime = 40;
			o->earthwakeDirection = 2;
		}
	}

	if (o->earthwakeDirection == 2){
		o->oPosX = o->oPosX - 20;
		o->earthwakeMoveTime = o->earthwakeMoveTime - 1;
		if (o->earthwakeMoveTime == 0){
			o->earthwakeMoveTime = 40;
			o->earthwakeDirection = 1;
		}
	}

	if (o->earthwakeDirection == 3){
		o->oPosY = o->oPosY + 20;
		o->earthwakeMoveTime = o->earthwakeMoveTime - 1;
		if (o->earthwakeMoveTime == 0){
			o->earthwakeMoveTime = 100;
			o->earthwakeDirection = 4;
		}
	}

	if (o->earthwakeDirection == 4){
		o->oPosY = o->oPosY - 20;
		o->earthwakeMoveTime = o->earthwakeMoveTime - 1;
		if (o->earthwakeMoveTime == 0){
			o->earthwakeMoveTime = 100;
			o->earthwakeDirection = 3;
		}
	}

	if (o->earthwakeFallTime != 0){
		o->earthwakeDirection = 0;
		o->earthwakeAction = 0;
		o->oPosY = o->oPosY - 10;

		s32 test = RAND(50);

		RAND(50);
		RAND(50);
		RAND(50);
		RAND(50);
		RAND(50);


		if (RAND(200) == test){
			play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, o->header.gfx.cameraToObject);
			spawn_object_relative(0, 800,RAND(400) - 200,RAND(400) - 200,o, MODEL_EXPLOSION,bhvExplosion);
		}

		o->earthwakeFallTime = o->earthwakeFallTime -1;
		if (o->earthwakeFallTime == 0){
			obj_mark_for_deletion(o);
		}
	}

}

void bhv_earthwake_block_init (void){
	o->earthwakeAction = GET_BPARAM1(o->oBehParams);

	o->earthwakeSegment = GET_BPARAM3(o->oBehParams);


	if (o->earthwakeAction == 5) {
		o->earthwakeDirection = 1;
		o->earthwakeMoveTime = 20;
	}

	if (o->earthwakeAction == 6) {
		o->earthwakeDirection = 2;
		o->earthwakeMoveTime = 20;
	}

	if (o->earthwakeAction == 7) {
		o->earthwakeDirection = 3;
		o->earthwakeMoveTime = 50;
	}

	if (o->earthwakeAction == 8) {
		o->earthwakeDirection = 4;
		o->earthwakeMoveTime = 50;
	}
}
