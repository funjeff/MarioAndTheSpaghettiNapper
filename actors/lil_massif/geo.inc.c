#include "src/game/envfx_snow.h"

const GeoLayout lil_massif_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lil_massif_Lil_Massif_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lil_massif_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
