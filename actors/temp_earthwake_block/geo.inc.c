#include "src/game/envfx_snow.h"

const GeoLayout temp_earthwake_block_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, temp_earthwake_block_Cube_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, temp_earthwake_block_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
