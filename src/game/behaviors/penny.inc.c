#include "engine/math_util.h"
/*
 * penny.inc.c
 *
 *  Created on: Sep 4, 2022
 *      Author: 12242
 */


void bhv_penny_loop (void){
	o->pennyTimer = o->pennyTimer + 1;

	if (o->pennyTimer % 150 == 0){
		o->pennySize = o->pennySize + 1;
		u32 size = 1;
		u32 pennySizeUnsaved = o->pennySize;

		while (pennySizeUnsaved){
			size = size * 2;
			pennySizeUnsaved = pennySizeUnsaved -1;
		}

		obj_scale(o, size);
		o->oPosY = o->oPosY + (size * 38);
	}

	obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw + 300, o->oFaceAngleRoll);
}
