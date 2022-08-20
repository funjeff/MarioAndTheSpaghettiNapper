// bowser_bomb.inc.c

#include "src/game/print.h"

void bhv_bowser_bomb_loop(void) {
//    if (obj_check_if_collided_with_object(o, gMarioObject) == TRUE) {
//        o->oInteractStatus &= ~INT_STATUS_INTERACTED;
//        spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
//        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
//    }

    if (o->oInteractStatus & INT_STATUS_HIT_MINE) {
        spawn_object(o, MODEL_BOWSER_FLAMES, bhvBowserBombExplosion);
        create_sound_spawner(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION);
        set_camera_shake_from_point(SHAKE_POS_LARGE, o->oPosX, o->oPosY, o->oPosZ);
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        if (gMarioState->action == ACT_SWINGING_ROPE){
        	set_mario_action(gMarioState, ACT_RIDING_SHELL_GROUND,0);
        } else {
        	set_mario_action(gMarioState, ACT_RIDING_SHELL_FALL,0);
        }
    }

    set_object_visibility(o, 7000);

    if (o->bombRopeEnd){
     	cur_obj_set_pos_relative(o->parentObj, 100, 0, 220);

     	if (gMarioState->action != ACT_SWINGING_ROPE && gMarioState->action != ACT_SWINGING_ROPE_FALL && gMarioState->action != ACT_SWINGING_ROPE_JUMP ){
     	    	obj_mark_for_deletion(o);
     	    }

     }
}

void bhv_bowser_bomb_explosion_loop(void) {
    cur_obj_scale((f32) o->oTimer / 14.0f * 3.0f + 1.0f);


    if ((o->oTimer % 4 == 0) && (o->oTimer < 20)) {
        struct Object *mineSmoke = spawn_object(o, MODEL_BOWSER_SMOKE, bhvBowserBombSmoke);
        mineSmoke->oPosX += random_float() * 600.0f - 400.0f;
        mineSmoke->oPosZ += random_float() * 600.0f - 400.0f;
        mineSmoke->oVelY += random_float() * 10.0f;
    }

    if (o->oTimer % 2 == 0) {
        o->oAnimState++;
    }

    if (o->oTimer == 28) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void bhv_bowser_bomb_smoke_loop(void) {
    cur_obj_scale((f32) o->oTimer / 14.0f * 3.0 + 1.0);

    if (o->oTimer % 2 == 0) {
        o->oAnimState++;
    }

    o->oOpacity -= 10;

    if (o->oOpacity < 10) {
        o->oOpacity = 0;
    }

    o->oPosY += o->oVelY;

    if (o->oTimer == 28) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
