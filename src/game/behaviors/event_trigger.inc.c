/*
 * event_trigger.inc.c
 *
 *  Created on: Sep 9, 2022
 *      Author: 12242
 */

struct ObjectHitbox sEventTriggerHitbox = {
    /* interactType: */ 0,
    /* downOffset: */200,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 300,
    /* height: */ 500,
    /* hurtboxRadius: */ 0,
    /* hurtboxHeight: */ 0,
};


void bhv_event_trigger_loop (void) {
	if (GET_BPARAM1(o->oBehParams)){
		sEventTriggerHitbox.radius = 10 *GET_BPARAM1(o->oBehParams);
	} else {
		sEventTriggerHitbox.radius = 300;
	}
	 obj_set_hitbox(o, &sEventTriggerHitbox);

	 if (obj_check_if_collided_with_object(o, gMarioObject) && !o->eventTriggered) {
		 bhv_event_trigger_trigger_event();
		 o->eventTriggered = 1;
	 }
	 if (o->eventTriggerDeleteTimer != 0){
		 o->eventTriggerDeleteTimer = o->eventTriggerDeleteTimer - 1;
		 if (o->eventTriggerDeleteTimer == 0){
			 obj_mark_for_deletion(o);
			 switch (GET_BPARAM3(o->oBehParams)){
			 case 1:
				 gHudDisplay.flags = gHudDisplay.flags - HUD_DISPLAY_STRIKE;
				 break;
			 }
		 }
	 }
}

void bhv_event_trigger_trigger_event(void){
	switch (GET_BPARAM3(o->oBehParams)){
	case 1:
		play_sound(SOUND_CUTSCENE_NICE_THROW,  gMarioObject->header.gfx.pos);
		//obj_mark_for_deletion(o);
		o->eventTriggerDeleteTimer = 80;
		gHudDisplay.flags = gHudDisplay.flags + HUD_DISPLAY_STRIKE;
		break;
	case 2:
		play_sound(SOUND_CUTSCENE_MARIOS_FUCKIN_BALLIN,  gMarioObject->header.gfx.pos);
		gMarioState->ballType = 1;
		obj_mark_for_deletion(o);
		break;
	}
}
