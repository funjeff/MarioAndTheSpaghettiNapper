#include "src/game/print.h"
#include "libc/math.h"
#include "src/game/print.h"

/*
 * prop.c
 *
 *  Created on: Aug 10, 2022
 *      Author: Jeffrey
 */


void bhv_cutscene_prop_loop(void) {
    if (gMarioState->action == ACT_FIRST_CUTSCENE || gMarioState->action ==ACT_POST_BOWSER_CUTSCENE){

		if (gMarioState->actionArg + 1 == o->cutscenePropMoveOnState) {

			if (o->cutscenePropMove == 1){

				gMarioState->faceAngle[1] = obj_angle_to_object(gMarioObject,o);
				vec3s_set(gMarioObject->header.gfx.angle, 0, gMarioState->faceAngle[1], 0);


				 s16 xDone = FALSE;
				 s16 yDone = FALSE;


				 f32 newSlope = -1*(( o->oPosZ - o->cutscenePropObjYDisplace) - gMarioObject->header.gfx.pos[2])/((o->oPosX- o->cutscenePropObjXDisplace)-gMarioObject->header.gfx.pos[0]);

				 f32 xdistNew = sqrtf((o->cutscenePropObjMoveSpeed * o->cutscenePropObjMoveSpeed )/(newSlope*newSlope) + 1);

				 f32 ydistNew = xdistNew * newSlope;

				if (gMarioObject->header.gfx.pos[0] > o->oPosX - o->cutscenePropObjXDisplace){
					gMarioObject->header.gfx.pos[0] = gMarioObject->header.gfx.pos[0] - xdistNew;
					if (gMarioObject->header.gfx.pos[0] < o->oPosX - o->cutscenePropObjXDisplace){
						gMarioObject->header.gfx.pos[0] = o->oPosX - o->cutscenePropObjXDisplace;
						xDone = TRUE;
					}
				} else {
					gMarioObject->header.gfx.pos[0] = gMarioObject->header.gfx.pos[0] + xdistNew;
					if (gMarioObject->header.gfx.pos[0] > o->oPosX - o->cutscenePropObjXDisplace){
						gMarioObject->header.gfx.pos[0] = o->oPosX - o->cutscenePropObjXDisplace;
						xDone = TRUE;
					}
				}

				if (gMarioObject->header.gfx.pos[2] > o->oPosZ - o->cutscenePropObjYDisplace){
					gMarioObject->header.gfx.pos[2]= gMarioObject->header.gfx.pos[2] - ydistNew;
					if (gMarioObject->header.gfx.pos[2] < o->oPosZ - o->cutscenePropObjYDisplace){
						gMarioObject->header.gfx.pos[2] = o->oPosZ - o->cutscenePropObjYDisplace;
						yDone = TRUE;
					}
				} else {
					gMarioObject->header.gfx.pos[2] = gMarioObject->header.gfx.pos[2] + ydistNew;
					if (gMarioObject->header.gfx.pos[2] > o->oPosZ - o->cutscenePropObjYDisplace){
						gMarioObject->header.gfx.pos[2] = o->oPosZ - o->cutscenePropObjYDisplace;
						yDone = TRUE;
					}
				}

				if (xDone && yDone){
					if (o->cutscenePropDoesAdvanceCutscene){
						 gMarioState->actionState = 0;
					 	 gMarioState->actionTimer = 0;
					 	 gMarioState->actionArg++;
					}
					if (o->cutscenePropDoesDeleteItself){
						obj_mark_for_deletion(o);
					}
				}

			}

			if (o->cutscenePropMove == 2){

				obj_turn_toward_object(o,gMarioObject, O_FACE_ANGLE_YAW_INDEX, o->cutscenePropObjMoveSpeed);


				s16 xDone = FALSE;
				s16 yDone = FALSE;


				f32 newSlope = -1 *((gMarioObject->header.gfx.pos[2] - o->cutscenePropObjYDisplace) - o->oPosZ)/((gMarioObject->header.gfx.pos[0] - o->cutscenePropObjXDisplace)-o->oPosX);

				f32 xdistNew = sqrtf((o->cutscenePropObjMoveSpeed * o->cutscenePropObjMoveSpeed )/(newSlope*newSlope) + 1);

				f32 ydistNew = xdistNew * newSlope;

				if (o->oPosX > gMarioObject->header.gfx.pos[0] - o->cutscenePropObjXDisplace){
					o->oPosX = o->header.gfx.pos[0] - xdistNew;
					if (o->oPosX < gMarioObject->header.gfx.pos[0]- o->cutscenePropObjXDisplace){
							o->oPosX = gMarioObject->header.gfx.pos[0] - o->cutscenePropObjXDisplace;
							xDone = TRUE;
					}
				} else {
					o->oPosX = o->oPosX + xdistNew;
					if (o->oPosX > gMarioObject->header.gfx.pos[0] - o->cutscenePropObjXDisplace){
						o->oPosX = gMarioObject->header.gfx.pos[0] - o->cutscenePropObjXDisplace;
						xDone = TRUE;
					}
				}
					if (o->oPosZ > gMarioObject->header.gfx.pos[2] - o->cutscenePropObjYDisplace){
					o->oPosZ= o->oPosZ - ydistNew;
					if (o->oPosZ < gMarioObject->header.gfx.pos[2] - o->cutscenePropObjYDisplace){
						o->oPosZ = gMarioObject->header.gfx.pos[2] - o->cutscenePropObjYDisplace;
						yDone = TRUE;
					}
				} else {
					o->oPosZ = o->oPosZ + ydistNew;
					if (o->oPosZ > gMarioObject->header.gfx.pos[2] - o->cutscenePropObjYDisplace){
						o->oPosZ = gMarioObject->header.gfx.pos[2]- o->cutscenePropObjYDisplace;
						yDone = TRUE;
					}
				}
				if (xDone && yDone){
					if (o->cutscenePropDoesAdvanceCutscene){
						 gMarioState->actionState = 0;
					 	 gMarioState->actionTimer = 0;
					 	 gMarioState->actionArg++;
					}
					if (o->cutscenePropDoesDeleteItself){
						obj_mark_for_deletion(o);
					}
				}
			}

			if (o->cutscenePropMove == 4){
				obj_set_angle(o,o->oFaceAnglePitch - 1000,o->oFaceAngleYaw, o->oFaceAngleRoll);
			}
		}
    }
}
