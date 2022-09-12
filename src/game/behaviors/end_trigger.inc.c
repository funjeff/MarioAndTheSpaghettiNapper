/*
 * end_trigger.inc.c
 *
 *  Created on: Sep 9, 2022
 *      Author: 12242
 */


void bhv_end_trigger_loop (void) {
	uintptr_t *behaviorAddr = segmented_to_virtual(bhvToadGoomba);

	struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

	struct Object * goomb = (struct Object *) listHead->next;

	u8 found = 0;

	while (goomb != (struct Object *) listHead) {
		if (goomb->behavior == behaviorAddr) {
			found = 1;
			break;
		}
	goomb = (struct Object *) goomb->header.next;
	}

	if (!found && gMarioState->action != ACT_STAR_DANCE_NO_EXIT){

		if (o->endTriggerTimer == 0){
			o->endTriggerTimer = 100;
			play_sound(SOUND_ENDING_HAPPY_ENDING, gMarioObject->header.gfx.pos);
		}

	}
	gMarioState->bigBallCamera = 0;

	if (o->endTriggerTimer){
		o->endTriggerTimer = o->endTriggerTimer -1;
		if (!o->endTriggerTimer){
			gMarioState->usedObj = o;
			set_mario_action(gMarioState,ACT_DOING_NOTHING,0);
			level_trigger_warp(gMarioState, WARP_OP_WARP_OBJECT);
		}
	}
}
