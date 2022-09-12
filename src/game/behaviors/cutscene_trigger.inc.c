#include "libc/math.h"
#include "src/game/print.h"

/*
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */

void bhv_cutscene_trigger_init (void){

}

void bhv_cutscene_trigger_loop(void) {
	if (gMarioState->action != ACT_EMERGE_FROM_PIPE){
		switch (GET_BPARAM1(o->oBehParams)){
		case 1:
			gMarioObject->header.gfx.angle[1] = 0;
			set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_LEFT);
			set_mario_action(gMarioState, ACT_POST_BOWSER_CUTSCENE, 0);
			gMarioState->statusForCamera->cameraEvent = CAM_EVENT_FIRST;
			warp_camera(1000,1000,1400);
			break;
		case 2:
			set_mario_action(gMarioState,ACT_EARTHWAKE_CUTSCENE, 0);
			set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_RIGHT);
			break;
		case 3:
			set_mario_action(gMarioState,ACT_POST_EARTHWAKE_CUTSCENE, 0);
			set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_RIGHT);
			break;
		case 5:
			set_mario_action(gMarioState,ACT_TOAD_CUTSCENE, 0);
			set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_RIGHT);
			break;
		case 6:
			set_mario_action(gMarioState,ACT_SECOND_CUTSCENE, 0);
			set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_RIGHT);
			break;

		}
	   	obj_mark_for_deletion(o);

	}
}
