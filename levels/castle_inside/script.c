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
#include "actors/common0.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_BLACK_BOBOMB, black_bobomb_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x06, LEVEL_TTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x07, LEVEL_TTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x08, LEVEL_TTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x00, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x22, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_YELLOW_COIN, -738, 473, -293, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -859, 480, -297, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1494, 480, -297, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1616, 488, -302, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_CASTLE_DOOR_1_STAR, -3598, 239, -928, 0, 92, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_1_STAR, 759, 748, -1702, 0, -49, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_1_STAR, 313, 6, -1296, 0, 1, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_TALKABLE_LUIGI, -2148, 92, 455, 0, 4, 4, (0 << 24) | (63 << 16), bhvBobombBuddy),
		OBJECT(MODEL_NONE, 306, -309, -4504, 0, 0, 0, 0x00200000, bhvWarpOneWay),
		OBJECT(MODEL_NONE, 2322, 915, -2327, 0, 0, 0, 0x00220000, bhvWarp),
		OBJECT(MODEL_NONE, 1858, 918, -2831, 0, 0, 0, 0x00210000, bhvWarpOneWay),
		OBJECT(MODEL_NONE, -3684, 347, -471, 0, -97, 0, (51 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -3684, 347, -37, 0, -90, 0, (52 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 501, 115, -1303, 0, -173, 0, (53 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 1395, 867, -2836, 0, 102, 0, (60 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 844, 42, -2007, 0, -173, 0, (54 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -1308, 116, 2127, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -1308, 116, 2127),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -1308, 116, 2127),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
