/*
 * mario_puppet.inc.c
 *
 *  Created on: Aug 19, 2022
 *      Author: 12242
 */


void bhv_mario_puppet_loop (void){
	obj_copy_pos(o,gMarioObject);
	o->oPosY = o->oPosY + 200;
		o->mario_puppet_spin_speed += 20;

		if (o->mario_puppet_spin_speed > 0xBCD) {
			o->mario_puppet_spin_speed = 0xBCD;
		}

		obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw + o->mario_puppet_spin_speed, o->oFaceAngleRoll);

		 if (gMarioState->action != ACT_SWINGING_ROPE && gMarioState->action != ACT_SWINGING_ROPE_FALL && gMarioState->action != ACT_SWINGING_ROPE_JUMP ){
			 gMarioObject->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
	    	uintptr_t *behaviorAddr = segmented_to_virtual(bhvLuigiableBomb);

			struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

			struct Object * bomb = (struct Object *) listHead->next;

			while (bomb != (struct Object *) listHead) {
				if (bomb->behavior == behaviorAddr && bomb->luigiBombBeingCarried) {
					break;
				}
				bomb = (struct Object *) bomb->header.next;
 			}


			bomb->luigiBombBeingCarried = 0;
			bomb->luigiBombMarkedForRespawn = 1;


			 obj_mark_for_deletion(o);
		 }
}

void bhv_mario_puppet_init (void){
	obj_scale(o, .3);
	obj_set_angle(o,0,0,0);
}
