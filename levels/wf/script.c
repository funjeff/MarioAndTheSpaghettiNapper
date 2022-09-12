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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_BLOCK_YELLOW, earthwake_block_yellow_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_BLOCK_BLUE, earthwake_block_blue_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_BLOCK_GREEN, earthwake_block_green_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_BLOCK_PINK, earthwake_block_pink_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_HEAD, earthwake_new_head_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_LEFT_HAND, earthwake_left_hand_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_RIGHT_HAND, earthwake_right_hand_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_LEFT_FOOT, earthwake_left_foot_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_RIGHT_FOOT, earthwake_right_foot_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_LEFT_SHOLDER, earthwake_left_shoulder_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EARTHWAKE_RIGHT_SHOULDER, earthwake_right_shoulder_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -123, 1889, 9622, 0, 95, 0, (1 << 16) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -114, 896, 9518, 0, 95, 0, (1 << 16) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, -1060, 896, 9636, 0, 95, 0, (1 << 16) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, -1130, -397, 9631, 0, 95, 0, (5 << 24) | (1 << 16), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -20, -397, 9622, 0, 95, 0, (6 << 24) | (1 << 16), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, 75, -1390, 9518, 0, 95, 0, (5 << 24) | (1 << 16), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, -1385, -1390, 9636, 0, 95, 0, (6 << 24) | (1 << 16), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -965, 1889, 9631, 0, 95, 0, (1 << 16) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_LEFT_FOOT, 75, -2505, 9518, 0, -174, 0, (1 << 16), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_RIGHT_FOOT, -1385, -2505, 9636, 0, -174, 0, (1 << 16), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_HEAD, -544, 3055, 9603, 0, -180, 0, (1 << 16) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_NONE, -220, -131, 338, 0, 0, 0, (3 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_NONE, -220, -205, 473, 0, -174, 0, (10 << 16), bhvSpinAirborneWarp),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_NEVER_LET_UP),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_WF, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(ARROW_PLATFORM, 2443, 1339, 492, 0, 0, 0, (98 << 24) | (0 << 8) | (3), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, -303, 1475, -2888, 0, 89, 0, (120 << 24) | (3 << 16) | (3 << 8) | (19), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, -3176, 1581, 96, 0, 180, 0, (88 << 24) | (2 << 8) | (9), bhvArrowPlatform),
		OBJECT(MODEL_NONE, 114, 161, -157, 0, 56, 0, (2 << 16), bhvWarpOneWay),
		OBJECT(MODEL_NIGHTMARE_CHUNK, 42, 2719, 9777, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvNightmareChunk),
		OBJECT(MODEL_TALKABLE_LUIGI, -1541, 185, 757, 0, 4, 4, (0 << 24) | (48 << 16), bhvBobombBuddy),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, 2485, 345, 6430, 0, 95, 0, (0 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, 2316, 827, 7606, 0, 95, 0, (2 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, 1977, 1209, 8746, 0, 95, 0, (1 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_LEFT_SHOLDER, 957, 1458, 9397, 0, -175, 0, (7 << 24) | (1 << 8), bhvEarthwakeLeftShoulder),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, -3452, 804, 7677, 0, 95, 0, (3 << 24) | (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -3115, 1218, 8826, 0, 95, 0, (4 << 24) | (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_RIGHT_SHOULDER, -1898, 1438, 9392, 0, -175, 0, (8 << 24) | (2 << 8), bhvEarthwakeRightShoulder),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -965, 1889, 9631, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -123, 1889, 9622, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -114, 896, 9518, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -1060, 896, 9636, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -3442, 348, 6636, 0, 95, 0, (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -1130, -397, 9631, 0, 95, 0, (5 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, -20, -397, 9622, 0, 95, 0, (6 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, 75, -1390, 9518, 0, 95, 0, (5 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, -1385, -1390, 9636, 0, 95, 0, (6 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_LEFT_FOOT, 78, -2541, 9559, 0, -174, 0, 0x00000000, bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_RIGHT_FOOT, -1402, -2541, 9678, 0, -174, 0, 0x00000000, bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_RIGHT_HAND, -3403, 605, 5424, 0, -172, -63, (4 << 24) | (2 << 8), bhvEarthwakeHand),
		OBJECT(MODEL_EARTHWAKE_LEFT_HAND, 3076, 605, 5296, -64, -22, 72, (4 << 24) | (1 << 8), bhvEarthwakeHand),
		OBJECT(MODEL_EARTHWAKE_HEAD, -544, 3055, 9603, 0, -180, 0, (0 << 24) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_NIGHTMARE_CHUNK, -1008, 2719, 9777, 0, 0, 0, (1 << 24) | (1 << 16) | (2 << 8), bhvNightmareChunk),
		OBJECT(MODEL_NONE, -220, 461, 82, 0, 178, 0, (10 << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x02, 102, -202, 273, 63),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_NEVER_LET_UP),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, wf_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NIGHTMARE_CHUNK, -21, 3669, -231, 0, 0, 0, (1 << 16), bhvNightmareChunk),
		OBJECT(MODEL_NONE, 1709, -2735, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 1709, -2735, 0),
		TERRAIN(wf_area_4_collision),
		MACRO_OBJECTS(wf_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_NEVER_LET_UP),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x02, 0x0A, WARP_CHECKPOINT),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, 2705, -6196, 6092, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, 2536, -5837, 7268, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, 2196, -5455, 8408, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_LEFT_SHOLDER, 1177, -5206, 9059, 0, -175, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, -3232, -5860, 7340, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -2895, -5446, 8488, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_RIGHT_SHOULDER, -1678, -5227, 9055, 0, -175, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -3222, -6123, 6298, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -745, -4776, 9293, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, 97, -4776, 9284, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, 106, -5769, 9180, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_BLUE, -841, -5769, 9298, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_PINK, -911, -7062, 9293, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, 200, -7062, 9284, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_YELLOW, 295, -8055, 9180, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK_GREEN, -1165, -8055, 9298, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_LEFT_FOOT, 295, -8762, 9180, 0, -85, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_RIGHT_FOOT, -1165, -8762, 9298, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_LEFT_HAND, 3144, -6143, 5086, 33, 106, -46, (2 << 24), bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_LEFT_HAND, -3202, -6143, 5374, 33, 106, -46, (2 << 24), bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_HEAD, -325, -3693, 9265, 0, -167, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_NONE, 0, 612, 0, 0, 0, 0, (2 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_NONE, 0, 538, 135, 0, -174, 0, (10 << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, -174, 0, 539, 135),
		OBJECT(MODEL_TALKABLE_LUIGI, 135, 623, -190, 0, 0, 0, (2 << 24) | (1 << 16), bhvCutsceneProp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -174, 0, 539, 135),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
