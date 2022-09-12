#include "src/game/envfx_snow.h"

const GeoLayout bup_cube_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bup_cube_bup_011_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bup_cube_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
