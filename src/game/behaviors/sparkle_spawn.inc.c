
/**
 * Behavior for bhvSparkleSpawn.
 *
 * This spawns the sparkles used by various objects. After being given a
 * random local position and scale, each sparkle's behavior is thereafter
 * controlled by bhvSparkle. This spawner is deleted after 1 frame.
 */

void bhv_sparkle_spawn_loop(void) {
	struct Object *sparkle;
	if (!gMarioState->ballType){
		 sparkle = try_to_spawn_object(0, 1.0f, o, MODEL_SPARKLES_ANIMATION, bhvSparkle);
	} else {
		 sparkle = try_to_spawn_object(0, 1.0f, o, MODEL_BASKETBALL, bhvSparkle);
		 o->sparkleSizeMax = .3;
		 o->sparkleSizeMin = .1;

	}
    if (sparkle != NULL) {
        obj_translate_xyz_random(sparkle, 90.0f);
        if (o->sparkleSizeMin != 0){
        	obj_scale_random(sparkle, o->sparkleSizeMax, o->sparkleSizeMin);
        } else {
        	obj_scale_random(sparkle, .5f, 0.0f);
        }

    }
    if (o->oTimer > 1) {
        obj_mark_for_deletion(o);
    }
}
