#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ddd/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_16), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ddd_area_1),
		WARP_NODE(0x0A, LEVEL_BOWSER_3, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_DDD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_DDD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2229, 4568, 994, 0, 0, 0, (4 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_GOLD_BAR, -3612, 4262, -73, 0, 0, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -3529, 4262, 1290, 0, 36, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -3166, 4262, 2644, 0, 96, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -993, 4262, 2546, 0, 129, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -448, 4262, 812, -19, 148, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -1252, 4262, -314, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -999, 4169, 684, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -511, 4169, 1401, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -404, 4168, 2271, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -1458, 4168, 2385, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -2957, 4168, 1865, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -3611, 4168, 463, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_CUTSCENE_TOAD, -2539, 4390, -958, 0, 0, 0, 0x00000000, bhvHidden1upInPole),
		OBJECT(MODEL_NONE, -2753, 4523, -445, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(ddd_area_1_collision),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_FINAL),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ddd_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_DDD, 0x01, 0x0A, WARP_CHECKPOINT),
		OBJECT(MODEL_CUTSCENE_TOAD, -1619, -1218, 1559, 0, 144, 0, (01 << 16), bhvCutsceneProp),
		OBJECT(MODEL_NONE, -1619, -930, 1559, 0, 144, 0, (05 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_NONE, -1467, -936, 2539, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x02, 0, -1827, -1181, 696),
		TERRAIN(ddd_area_2_collision),
		MACRO_OBJECTS(ddd_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x02, 0, -1827, -1181, 696),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
