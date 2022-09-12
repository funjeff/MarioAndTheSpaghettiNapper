#include "src/game/envfx_snow.h"

const GeoLayout castle_inside_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__000_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__001_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__002_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__003_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__004_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__006_geometry_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 2, 0, 90, 0, 0, castle_inside_dl__007_geometry_001_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__008_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__009_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__010_geometry_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__011_geometry_mesh_layer_1),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE_WITH_DL(LAYER_TRANSPARENT, 90, 0, 0, castle_inside_dl__017_geometry_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 311, -98, -719, 90, 0, 0, castle_inside_dl__017_geometry_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 311, -98, -719, 90, 0, 0, castle_inside_dl__017_geometry_002_mesh_layer_5),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_inside_dl__018_geometry_mesh_layer_1),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1389, 131, 2435, 0, -72, 0, castle_inside_dl_bup_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1064, 144, 2469, 0, -42, 0, castle_inside_dl_bup_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2648, 175, -1030, 0, 3, 0, castle_inside_dl_bup_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 987, 415, -275, 0, 33, 0, castle_inside_dl_bup_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2031, 151, -990, 0, 135, 0, castle_inside_dl_bup_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -337, 151, -978, 0, -135, 0, castle_inside_dl_bup_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3060, 754, -1677, 0, 48, 0, castle_inside_dl_bup_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2744, 418, -1076, 0, 37, 0, castle_inside_dl_bup_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3292, 1684, -5037, 0, 26, 0, castle_inside_dl_bup_015_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1807, 1601, -3596, 0, -90, 0, castle_inside_dl_Sticky_mesh_layer_1),
		GEO_ASM(0, geo_painting_update),
GEO_ASM(PAINTING_ID(2, 1), geo_painting_draw),
GEO_ASM(PAINTING_ID(0, 1), geo_painting_draw),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_inside_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
