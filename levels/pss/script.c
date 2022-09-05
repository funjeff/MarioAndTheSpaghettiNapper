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
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE, 0x01, 0x21, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_PSS, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_PSS, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -7412, -6432, 7989, 0, 0, 0, 0x00020000, bhvWarpOneWay),
		OBJECT(MODEL_WOODEN_SIGNPOST, -8627, -6395, 7821, 0, -175, 0, (62 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, 6923, 8943, -8279, 0, -85, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -85, 6923, 8978, -8279),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 7569, 8789, -8333, 0, -85, 0, 0x00010000, bhvWarpPipe),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x0, SEQ_LEVEL_SLIDE),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -85, 6923, 8978, -8279),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
