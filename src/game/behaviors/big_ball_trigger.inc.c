/*
 * big_ball_trigger.inc.c
 *
 *  Created on: Sep 10, 2022
 *      Author: 12242
 */


void bhv_big_ball_trigger_loop (void) {
	if (gMarioState->action == ACT_IDLE){
		uintptr_t *behaviorAddr = segmented_to_virtual(bhvHidden1upInPole);
		struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

		struct Object *toad = (struct Object *) listHead->next;

		while (toad != (struct Object *) listHead) {
				if (toad->behavior == behaviorAddr) {
					 break;
				}
				toad = (struct Object *) toad->header.next;
			}
		   obj_mark_for_deletion(toad);



		   struct Object * ball = spawn_object_relative(0,0,0,0, gMarioObject, MODEL_BLACK_BOBOMB   ,bhvKoopaShell);
		   ball->koopaShellBig = 1;
		   u32 interaction = determine_interaction(gMarioState, ball);
		   gMarioState->riddenObj = ball;
		   gMarioState->interactObj = ball;
		   gMarioState->usedObj = ball;
		   attack_object(ball, interaction);
		   gMarioState->bigBallCamera = 1;
		   set_mario_action(gMarioState, ACT_RIDING_BIG_SHELL_GROUND, 0);
		   spawn_object_relative(0,0,0,0, gMarioObject, MODEL_KING_TOAD, bhvHidden1upInPole);
	}
}
