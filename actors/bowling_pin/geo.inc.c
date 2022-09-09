#include "src/game/envfx_snow.h"

const GeoLayout bowling_pin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bowling_pin_Cylinder_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bowling_pin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
