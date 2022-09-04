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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_DDD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x02, WARP_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x01, WARP_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x01, WARP_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_WF, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_BOB, 0x01, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_BOB, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_BOB, 0x01, 0x08, WARP_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_BOB, 0x01, 0x07, WARP_CHECKPOINT),
		WARP_NODE(0x09, LEVEL_BOB, 0x01, 0x10, WARP_CHECKPOINT),
		WARP_NODE(0x10, LEVEL_BOB, 0x01, 0x09, WARP_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x01, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x11, WARP_CHECKPOINT),
		OBJECT(MODEL_NONE, 1684, 361, -341, 0, 0, 0, (0 << 24) | (06 << 16), bhvWarpOneWay),
		OBJECT(ARROW_PLATFORM, -13067, -596, 7171, 0, 0, 0, (145 << 24) | (1 << 8) | (65), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, 4892, 4264, -2051, 0, 0, 0, (115 << 24) | (3 << 8) | (4), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, -13106, 1359, -2172, 0, 0, 0, (115 << 24) | (0 << 8) | (36), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, 3455, 5475, -9634, 0, 0, 0, (100 << 24) | (0 << 8) | (8), bhvArrowPlatform),
		OBJECT(MODEL_BIG_MASSIF, 324, 512, -1295, 0, 4, 4, (0 << 24) | (49 << 16), bhvMassif),
		OBJECT(MODEL_NIGHTMARE_CHUNK, 45, 706, -97, 0, 0, 0, (04 << 16), bhvBigNightmareChunk),
		OBJECT(MODEL_NONE, -319, 1694, -5664, 0, 0, 0, 0x00100000, bhvWarp),
		OBJECT(MODEL_NONE, 8942, 4328, -9171, 0, 0, 0, 0x00090000, bhvWarp),
		OBJECT(MODEL_NONE, 3572, 6649, -10578, 0, 0, 0, 0x00070000, bhvWarp),
		OBJECT(MODEL_NONE, 3513, 3979, 3959, 0, 90, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NIGHTMARE_CHUNK, 2424, 5478, 9671, 0, 0, 0, (03 << 16), bhvNightmareChunk),
		OBJECT(MODEL_NIGHTMARE_CHUNK, 11282, 6408, 7832, 0, 0, 0, 0x00120000, bhvNightmareChunk),
		OBJECT(MODEL_NIGHTMARE_CHUNK, 9703, -2604, 7347, 0, 0, 0, (1 << 24) | (9 << 16), bhvNightmareChunk),
		OBJECT(MODEL_LIL_MASSIF, 787, 512, -1295, 0, 4, 4, (0 << 24) | (50 << 16), bhvMassif),
		OBJECT(MODEL_NONE, -8029, 251, 8147, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, -8029, 411, 8147),
		OBJECT(MODEL_NONE, -3495, 2758, -3348, 0, 45, 0, 0x00110000, bhvWarp),
		OBJECT(MODEL_NONE, 12718, 4566, 5164, 0, -180, 0, 0x00120000, bhvWarp),
		OBJECT(MODEL_NONE, -1300, 406, 0, 0, 0, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, -2900, 3724, 12600, 0, 90, 0, 0x00020000, bhvWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_WAKEPORT),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -8029, 411, 8147),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
