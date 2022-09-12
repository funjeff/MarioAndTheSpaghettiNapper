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
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_16), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(4, ddd_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_ENDING, 0x01, 0x0A, WARP_CHECKPOINT),
		OBJECT(MODEL_NONE, 10427, 492, 2191, 0, -174, 0, (1 << 16), bhvEndTrigger),
		OBJECT(MODEL_CUTSCENE_TOAD, 10907, 155, 2384, 0, -174, 0, (69 << 16), bhvToadGoomba),
		OBJECT(MODEL_NONE, 10729, -72, 1075, 0, 0, 0, (10 << 16), bhvWarpOneWay),
		TERRAIN(ddd_area_4_collision),
		MACRO_OBJECTS(ddd_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_FINAL),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(1, ddd_area_1),
		WARP_NODE(0x0A, LEVEL_BOWSER_3, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_DDD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_DDD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_DDD, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2229, 4568, 12793, 0, 0, 0, 0x00000000, bhvBigBallTrigger),
		OBJECT(MODEL_GOLD_BAR, -3612, 4262, 11727, 0, -41, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -3529, 4262, 13089, 0, -159, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -3166, 4262, 14443, 0, 62, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -993, 4262, 14346, 0, 129, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -448, 4262, 12611, 0, 148, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR, -1252, 4262, 11485, 0, 131, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -999, 4169, 12483, 0, 131, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -511, 4169, 13201, 0, 131, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -404, 4168, 14071, 0, 131, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -1458, 4168, 14184, 0, 131, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -2957, 4168, 13664, -20, 131, -2, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_GOLD_BAR_SINGLE, -3611, 4168, 12262, 0, 131, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_CASTLE_BREAKABLE_WALL, -2067, 2564, -29601, 0, 0, 0, (200 << 24), bhvDestroyableBlock),
		OBJECT(MODEL_NONE, -2065, 1277, -29610, 0, 0, 0, (70 << 24) | (01 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2039, 4523, 11926, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
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
		OBJECT(MODEL_KING_TOAD, -1899, -830, 1972, 0, 144, 0, (01 << 16), bhvCutsceneProp),
		OBJECT(MODEL_NONE, -1619, -930, 1559, 0, 144, 0, (05 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_NONE, -1681, -919, 487, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x02, 0, -1727, -1108, 440),
		TERRAIN(ddd_area_2_collision),
		MACRO_OBJECTS(ddd_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ddd_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_DDD, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1753, -120, 12968, 0, 0, 0, 0x00000000, bhvBigBallTrigger),
		OBJECT(MODEL_BUP_CUBE, 9360, -3630, -2740, 0, 0, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_BUP_CUBE, 10814, -2809, -2990, 0, 0, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_BUP_CUBE, 12474, -2277, -2838, 0, 0, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_BUP_CUBE, 14151, -1811, -3190, 0, 0, 0, 0x00000000, bhvDestroyableBlock),
		OBJECT(MODEL_NONE, 217, -4794, -2405, 0, 0, 0, (120 << 24) | (01 << 16), bhvWarp),
		OBJECT(MODEL_TOAD_STATUE, 209, -3112, -2408, 84, 0, 0, (255 << 24), bhvDestroyableBlock),
		OBJECT(MODEL_NONE, 426, 4276, 22627, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(ddd_area_3_collision),
		MACRO_OBJECTS(ddd_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_FINAL),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x02, 0, -1727, -1108, 440),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
