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

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -125, 1915, 9753, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -116, 908, 9648, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1075, 908, 9768, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1146, -403, 9763, 0, 95, 0, (5 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -20, -403, 9753, 0, 95, 0, (6 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 76, -1409, 9648, 0, 95, 0, (5 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1404, -1409, 9768, 0, 95, 0, (6 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -978, 1915, 9763, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_HEAD, -552, 3414, 9735, 0, 95, 0, (1 << 24) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_NONE, -223, -132, 342, 0, 0, 0, (3 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_NONE, -223, -208, 479, 0, -174, 0, (10 << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x03, -174, -223, -206, 479),
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
		WARP_NODE(0x03, LEVEL_WF, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(ARROW_PLATFORM, 2477, 1358, 498, 0, 0, 0, (100 << 24) | (0 << 8) | (3), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, -307, 1495, -2928, 0, 89, 0, (120 << 24) | (3 << 16) | (3 << 8) | (19), bhvArrowPlatform),
		OBJECT(ARROW_PLATFORM, -3219, 1507, 97, 0, 180, 0, (100 << 24) | (2 << 8) | (9), bhvArrowPlatform),
		OBJECT(MODEL_NONE, 115, 163, -159, 0, 56, 0, (2 << 16), bhvWarpOneWay),
		OBJECT(MODEL_NIGHTMARE_CHUNK, 42, 2756, 9911, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvNightmareChunk),
		OBJECT(MODEL_TALKABLE_LUIGI, -1562, 187, 768, 0, 4, 4, (0 << 24) | (48 << 16), bhvBobombBuddy),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 2519, 475, 6518, 0, 95, 0, (0 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 2348, 839, 7710, 0, 95, 0, (2 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 2004, 1226, 8866, 0, 95, 0, (1 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 970, 1478, 9526, 0, 95, 0, (7 << 24) | (1 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -3499, 815, 7782, 0, 95, 0, (3 << 24) | (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -3157, 1235, 8947, 0, 95, 0, (4 << 24) | (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1924, 1457, 9521, 0, 95, 0, (8 << 24) | (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -978, 1915, 9763, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -125, 1915, 9753, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -116, 908, 9648, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1075, 908, 9768, 0, 95, 0, (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -3489, 549, 6727, 0, 95, 0, (2 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1146, -403, 9763, 0, 95, 0, (5 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -20, -403, 9753, 0, 95, 0, (6 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 76, -1409, 9648, 0, 95, 0, (5 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1404, -1409, 9768, 0, 95, 0, (6 << 24), bhvEarthwakeBlock),
		OBJECT(MODEL_EARTHWAKE_HAND, 2964, 503, 5498, 0, -2, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_HAND, -3448, 525, 5821, 0, -2, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_HEAD, -552, 3414, 9735, 0, 95, 0, (1 << 24) | (3 << 8), bhvEarthwakeBlock),
		OBJECT(MODEL_NIGHTMARE_CHUNK, -1022, 2756, 9911, 0, 0, 0, (1 << 24) | (1 << 16) | (2 << 8), bhvNightmareChunk),
		OBJECT(MODEL_NONE, -223, 467, 83, 0, 178, 0, (10 << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x02, -78, -205, 276, -53),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_NEVER_LET_UP),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 2742, -3697, 6175, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 2571, -3334, 7368, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 2226, -2947, 8523, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 1193, -2694, 9183, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -3277, -3357, 7440, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -2935, -2937, 8605, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1701, -2715, 9178, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -3267, -3624, 6384, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -756, -2258, 9420, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 98, -2258, 9411, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 107, -3264, 9306, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -852, -3264, 9425, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -923, -4575, 9420, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 203, -4575, 9411, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, 299, -5582, 9306, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_BLOCK, -1181, -5582, 9425, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_HAND, 3187, -3669, 5156, 0, -2, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_HAND, -3226, -3647, 5478, 0, -2, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_EARTHWAKE_HEAD, -329, -1161, 9392, 0, 95, 0, 0x00000000, bhvCutsceneProp),
		OBJECT(MODEL_NONE, 0, 621, 0, 0, 0, 0, (2 << 24), bhvCutsceneTrigger),
		OBJECT(MODEL_NONE, 0, 545, 137, 0, -174, 0, (10 << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, -174, 0, 547, 137),
		OBJECT(MODEL_TALKABLE_LUIGI, 137, 632, -192, 0, 0, 0, (2 << 24) | (1 << 16), bhvCutsceneProp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -174, 0, 547, 137),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
