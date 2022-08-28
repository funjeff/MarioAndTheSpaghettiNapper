#include "src/game/print.h"



#define TRICK_SWING_KICK 1
#define TRICK_TONY_HAWK 2
#define TRICK_GOOD 4
#define TRICK_STAR_DANCE 8
#define TRICK_EARTHWAKE_CHEST_EXPLOSION 16
#define TRICK_GREAT 32
#define TRICK_EXCELENT 64
/*
 * arrow_platform.inc.c
 *
 *  Created on: Aug 16, 2022
 *      Author: Jeffrey
 */

void bhv_arrow_platform_loop (void){

	if ((o->arrowPlatformTricks & TRICK_EARTHWAKE_CHEST_EXPLOSION) && !o->earthwakePlatformActive){
		uintptr_t *behaviorAddr = segmented_to_virtual(bhvNightmareChunk);

		struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

		struct Object *chunk = (struct Object *) listHead->next;

		s16 found = 0;

		while (chunk != (struct Object *) listHead) {
			if (chunk->behavior == behaviorAddr) {
				found = 1;
				break;
			 }
			chunk = (struct Object *) chunk->header.next;
		}

		if (!found){
			cur_obj_enable_rendering();
			cur_obj_become_tangible();
			o->earthwakePlatformActive = 1;
		}

	}

	if (cur_obj_was_attacked_or_ground_pounded() && ( !(o->arrowPlatformTricks & TRICK_EARTHWAKE_CHEST_EXPLOSION) || o->earthwakePlatformActive)){
		gMarioState->faceAngle [1] = o->oMoveAngleYaw;
		gMarioState->forwardVel = o->arrowPlatformSpeed * 2;

		if (gMarioState->riddenObj == NULL){

			struct Object * ball = spawn_object_relative(0,0,0,0, gMarioObject, MODEL_BLACK_BOBOMB    ,bhvKoopaShell);
			u32 interaction = determine_interaction(gMarioState, ball);
			gMarioState->riddenObj = ball;
			gMarioState->interactObj = ball;
			gMarioState->usedObj = ball;
			attack_object(ball, interaction);

			set_mario_animation(gMarioState, MARIO_ANIM_JUMP_RIDING_SHELL);

			set_mario_action(gMarioState, ACT_RIDING_SHELL_LAUNCH, 0);
		}
		o->arrowPlatformTimer = 1;
	}

	if (o->arrowPlatformTimer != 0){
		o->arrowPlatformTimer = o->arrowPlatformTimer + 1;

		if (gMarioState->action == ACT_RIDING_SHELL_LAUNCH || gMarioState->action == ACT_DISAPPEARED){

			if ((o->arrowPlatformTricks & TRICK_GOOD) && o->arrowPlatformTimer == 2){
				gHudDisplay.flags = gHudDisplay.flags + HUD_DISPLAY_GOOD;
				play_sound(SOUND_GOOD, gMarioObject->header.gfx.cameraToObject);
			}

			if ((o->arrowPlatformTricks & TRICK_GREAT) && o->arrowPlatformTimer == 2){
				gHudDisplay.flags = gHudDisplay.flags + HUD_DISPLAY_GREAT;
				play_sound(SOUND_GREAT, gMarioObject->header.gfx.cameraToObject);
			}

			if ((o->arrowPlatformTricks & TRICK_EXCELENT) && o->arrowPlatformTimer == 2){
				gHudDisplay.flags = gHudDisplay.flags + HUD_DISPLAY_EXCELLENT;
				play_sound(SOUND_EXCELENT, gMarioObject->header.gfx.cameraToObject);
			}

			if ((o->arrowPlatformTricks & TRICK_SWING_KICK) && o->arrowPlatformTimer == 10) {
				set_mario_animation(gMarioState, MARIO_ANIM_BREAKDANCE);
				play_sound(SOUND_MARIO_YAHOO, gMarioObject->header.gfx.cameraToObject);
			}

			if ((o->arrowPlatformTricks & TRICK_STAR_DANCE) && o->arrowPlatformTimer == 5) {
				set_mario_animation(gMarioState, MARIO_ANIM_STAR_DANCE);
				play_sound(SOUND_MARIO_HERE_WE_GO, gMarioObject->header.gfx.cameraToObject);
			}

			if ((o->arrowPlatformTricks & TRICK_EARTHWAKE_CHEST_EXPLOSION) && o->arrowPlatformTimer == 35){
				gMarioState->statusForCamera->cameraEvent = CAM_EVENT_FIRST;
			}

			if ((o->arrowPlatformTricks & TRICK_EARTHWAKE_CHEST_EXPLOSION) && o->arrowPlatformTimer == 40) {
				if (gMarioState->riddenObj != NULL){
				 	 gMarioState->riddenObj->oInteractStatus = 4194304; //INT_STATUS_STOP_RIDING
				   	 gMarioState->riddenObj = NULL;
				}

				set_mario_action(gMarioState, ACT_DISAPPEARED, 0);

				play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, gMarioObject->header.gfx.cameraToObject);
				spawn_object(gMarioObject, MODEL_EXPLOSION, bhvExplosion);
			}

			if ((o->arrowPlatformTricks & TRICK_EARTHWAKE_CHEST_EXPLOSION) && o->arrowPlatformTimer == 50) {
				gMarioState->usedObj = o;
				level_trigger_warp(gMarioState, WARP_OP_WARP_OBJECT);
			}

			if ((o->arrowPlatformTricks & TRICK_TONY_HAWK) && (o->arrowPlatformTricks & TRICK_STAR_DANCE) && !(o->arrowPlatformTricks & TRICK_SWING_KICK)){
				if (o->arrowPlatformTimer < 30){
					print_text(20,40,"STAR GET");
					print_text_fmt_int(120,40,"%d",o->tonyHawkPoints);
					if (o->arrowPlatformTimer == 2){
						play_sound(SOUND_TONY_HAWK, gMarioObject->header.gfx.cameraToObject);
					}
				} else {
					print_text(20,40,"STAR GET AIR TIME");
					print_text_fmt_int(240,40,"%d",o->tonyHawkPoints);
					o->tonyHawkPoints = o->tonyHawkPoints + 400;
					if (o->arrowPlatformTimer == 30){
						play_sound(SOUND_TONY_HAWK, gMarioObject->header.gfx.cameraToObject);
					}
				}
			}

			if (o->arrowPlatformTimer > 10 && (o->arrowPlatformTricks & TRICK_TONY_HAWK) && !(o->arrowPlatformTricks & TRICK_STAR_DANCE) && (o->arrowPlatformTricks & TRICK_SWING_KICK)){
				if (o->arrowPlatformTimer < 35){
					print_text(20,40,"SWING KICK");
					print_text_fmt_int(150,40,"%d",o->tonyHawkPoints);
					if (o->arrowPlatformTimer == 11){
						play_sound(SOUND_TONY_HAWK, gMarioObject->header.gfx.cameraToObject);
					}
				} else {
					print_text(10,40,"SWING KICK AIR TIME");
					print_text_fmt_int(250,40,"%d",o->tonyHawkPoints);
					o->tonyHawkPoints = o->tonyHawkPoints + 400;
				if (o->arrowPlatformTimer == 35){
					play_sound(SOUND_TONY_HAWK, gMarioObject->header.gfx.cameraToObject);
				}
				}
			}

			if (o->arrowPlatformTimer > 20 && (o->arrowPlatformTricks & TRICK_TONY_HAWK) && !(o->arrowPlatformTricks & TRICK_STAR_DANCE) && !(o->arrowPlatformTricks & TRICK_SWING_KICK)){
				print_text(10,40,"AIR TIME");
				print_text_fmt_int(150,40,"%d",o->tonyHawkPoints);
				o->tonyHawkPoints = o->tonyHawkPoints + 400;
				if (o->arrowPlatformTimer == 21){
					play_sound(SOUND_TONY_HAWK, gMarioObject->header.gfx.cameraToObject);
				}
			}
		} else {
			if (gHudDisplay.flags & HUD_DISPLAY_GOOD){
				gHudDisplay.flags = gHudDisplay.flags - HUD_DISPLAY_GOOD;
			}

			if (gHudDisplay.flags & HUD_DISPLAY_GREAT){
				gHudDisplay.flags = gHudDisplay.flags - HUD_DISPLAY_GREAT;
			}

			if (gHudDisplay.flags & HUD_DISPLAY_EXCELLENT){
				gHudDisplay.flags = gHudDisplay.flags - HUD_DISPLAY_EXCELLENT;
			}
			o->arrowPlatformTimer = 0;
			o->tonyHawkPoints = 0;
			if (o->arrowPlatformTricks & TRICK_STAR_DANCE){
				o->tonyHawkPoints = 20000;
			}

			if (o->arrowPlatformTricks & TRICK_SWING_KICK){
				o->tonyHawkPoints = 10000;
			}
		}
	}

}

void bhv_arrow_platform_init (void){
	o->arrowPlatformSpeed = GET_BPARAM1(o->oBehParams);
	obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw + (16340*GET_BPARAM3(o->oBehParams)), o->oFaceAngleRoll);

	o->arrowPlatformTricks = GET_BPARAM4(o->oBehParams);

	if (o->arrowPlatformTricks & TRICK_STAR_DANCE){
		o->tonyHawkPoints = 20000;
	}

	if (o->arrowPlatformTricks & TRICK_SWING_KICK){
		o->tonyHawkPoints = 10000;
	}

	if (o->arrowPlatformTricks & TRICK_EARTHWAKE_CHEST_EXPLOSION){
		cur_obj_disable_rendering();
		cur_obj_become_intangible();
	}

}

