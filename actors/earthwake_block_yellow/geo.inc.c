#include "src/game/envfx_snow.h"

const GeoLayout earthwake_block_yellow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, earthwake_block_yellow_YellowCube_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, earthwake_block_yellow_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
