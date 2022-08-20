/*
 * bombable_door.inc.c
 *
 *  Created on: Aug 19, 2022
 *      Author: 12242
 */

void bhv_bombable_door_loop (void){
	f32 dist;
	struct Object *mine = cur_obj_find_nearest_object_with_behavior(bhvBowserBomb, &dist);
	if (mine != NULL && dist < 800.0f) {
		mine->oInteractStatus |= INT_STATUS_HIT_MINE;
		obj_mark_for_deletion(o);
		uintptr_t *behaviorAddr = segmented_to_virtual(bhvLuigiableBomb);

		struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

		struct Object * bomb = (struct Object *) listHead->next;

		while (bomb != (struct Object *) listHead) {
			if (bomb->behavior == behaviorAddr && bomb->luigiBombBeingCarried) {
				break;
			}
			bomb = (struct Object *) bomb->header.next;
		}
		obj_mark_for_deletion(bomb);
	}
}

void bhv_bombable_door_init (void){
	obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw + (16340*GET_BPARAM3(o->oBehParams)), o->oFaceAngleRoll);
}
