#include "src/game/envfx_snow.h"

const GeoLayout gold_bar_single_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gold_bar_single_Gold_Bar_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gold_bar_single_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
