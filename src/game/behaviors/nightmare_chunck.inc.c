void bhv_nightmare_1_loop(void) {
    obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        destroyed_chunks = destroyed_chunks | 8; // 0000 | 1000 = 1000
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}
void bhv_nightmare_2_loop(void) {
    obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        destroyed_chunks = destroyed_chunks | 4; // 0000 | 0100 = 0100
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}
void bhv_nightmare_3_loop(void) {
    obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        destroyed_chunks = destroyed_chunks | 2; // 0000 | 0010 = 0010
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}
void bhv_nightmare_4_loop(void) {
    obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        destroyed_chunks = destroyed_chunks | 1; // 0000 | 0001 = 0001
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}
