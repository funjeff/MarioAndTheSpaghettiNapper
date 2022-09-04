#include "src/game/envfx_snow.h"

const GeoLayout big_massif_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, big_massif_Big_Massif_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, big_massif_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
