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
#include "levels/ttc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _machine_yay0SegmentRomStart, _machine_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE, ttc_geo_000240), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM, ttc_geo_000258), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM, ttc_geo_000270), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL, ttc_geo_000288), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL, ttc_geo_0002A8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK, ttc_geo_0002C8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON, ttc_geo_0002E0), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_geo_0002F8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK, ttc_geo_000310), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED, ttc_geo_000328), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_geo_000340), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND, ttc_geo_000358), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER, ttc_geo_000370), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR, ttc_geo_000388), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR, ttc_geo_0003A0), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_TTC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_TTC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_BOWSER_3, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BIG_BOMBABLE_DOOR, 19351, 1097, 0, 0, 0, 0, (4 << 24), bhvBigBombableDoor),
		OBJECT(MODEL_BOWSER_BOMB, -14616, 714, 2517, 0, 0, 0, (4 << 24), bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, -11349, 735, -3677, 0, 0, 0, (2 << 24), bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, -6045, 1177, 3, 0, 0, 0, (3 << 24), bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, -7745, 391, -530, 0, 0, 0, (5 << 24), bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, -2230, 1438, -325, 0, 0, 0, (4 << 24), bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, 5620, 1315, -95, 0, 0, 0, 0x00000000, bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, 13151, 1527, -95, 0, 0, 0, 0x00000000, bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, 17581, 1274, 3304, 0, 0, 0, 0x00000000, bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, 16949, 2200, -4264, 0, 0, 0, 0x00000000, bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, 17303, 1968, 0, 0, 0, 0, 0x00000000, bhvLuigiableBomb),
		OBJECT(MODEL_BOWSER_BOMB, 15449, 1923, 1881, 0, 0, 0, 0x00000000, bhvLuigiableBomb),
		OBJECT(MODEL_NONE, -6767, 1270, 115, 0, 0, 0, (1 << 16) | (1 << 8) | (1), bhvRestartCheckpoint),
		OBJECT(MODEL_NONE, -3574, 1270, 115, 0, 0, 0, (2 << 16) | (1 << 8) | (1), bhvRestartCheckpoint),
		OBJECT(MODEL_NONE, 3842, 1270, 115, 0, 0, 0, (3 << 16) | (1 << 8) | (1), bhvRestartCheckpoint),
		OBJECT(MODEL_NONE, 20198, 1074, 115, 0, 0, 0, (4 << 16) | (1 << 8) | (1), bhvRestartCheckpoint),
		OBJECT(MODEL_NONE, -7197, 1213, 83, 0, 0, 0, (1 << 16), bhvWarpOneWay),
		OBJECT(MODEL_NONE, -4004, 1305, -275, 0, 0, 0, (2 << 16), bhvWarpOneWay),
		OBJECT(MODEL_NONE, 3414, 1270, 123, 0, 0, 0, (3 << 16), bhvWarpOneWay),
		OBJECT(MODEL_NONE, 23507, 2094, 123, 0, 0, 0, (4 << 16), bhvWarpOneWay),
		OBJECT(MODEL_BOMBABLE_DOOR, -12946, 46, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_BOMBABLE_DOOR, -9834, 46, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_ANOTHER_DOOR, -6763, 1859, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_BOMBABLE_DOOR, -3652, 1097, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_BOMBABLE_DOOR, 3763, 1097, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_BOMBABLE_DOOR, 9219, 1097, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_BOMBABLE_DOOR, 14351, 1097, 17, 0, 0, 0, 0x00000000, bhvBombableDoor),
		OBJECT(MODEL_NONE, -11328, 863, -3698, 0, 0, 0, (10 << 24) | (2 << 8), bhvEventTrigger),
		OBJECT(MODEL_WOODEN_SIGNPOST, -13158, 234, 922, 0, -90, 0, (112 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -10113, 234, -932, 0, -87, 0, (113 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -7936, 209, 336, 0, -98, 0, (122 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -6387, 1145, 622, 0, -179, 0, (123 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -3234, 1132, 922, 0, -180, 0, (124 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 4191, 1345, 382, 0, -91, 0, (125 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 9707, 1217, 523, 0, -89, 0, (126 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 18740, 1217, 3000, 0, -175, 0, (127 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 18740, 1217, 3185, 0, -175, 0, (127 << 16), bhvGoomba),
		OBJECT(MODEL_WOODEN_SIGNPOST, 19016, 1217, -1688, 0, -93, 0, (129 << 16), bhvMessagePanel),
		OBJECT(MODEL_GOOMBA, 18740, 1217, 3185, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18940, 1217, 3185, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18622, 1217, 3181, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18580, 1200, 3396, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA_DOOR, 18769, 1237, 3400, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18933, 1231, 3393, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18933, 1202, 3515, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18732, 1202, 3515, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18567, 1202, 3515, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -14256, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -14355, 2265, 0),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 24373, 2173, 0, 0, 0, 0, (0 << 24) | (5 << 16), bhvWarpPipe),
		TERRAIN(ttc_area_1_collision),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_THWOMP_VOLCANO),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -14355, 2265, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
