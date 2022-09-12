Lights1 another_door_f3d_material_005_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 another_door_handle_lights = gdSPDefLights1(
	0x7F, 0x71, 0x0,
	0xFE, 0xE2, 0x0, 0x28, 0x28, 0x28);

Gfx another_door_wood_ci4_aligner[] = {gsSPEndDisplayList()};
u8 another_door_wood_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 
	0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 
	0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x22, 
	0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x31, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x33, 0x33, 0x31, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x12, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x33, 0x33, 0x33, 0x33, 0x31, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x12, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 
	0x00, 0x03, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x31, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 
	0x03, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x12, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x11, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x12, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x23, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x32, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x23, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x32, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x32, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x32, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x32, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x32, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x30, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x13, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 
	0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x21, 0x11, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x30, 0x00, 
	0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x13, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 
	0x00, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x21, 0x11, 0x11, 0x11, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x30, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 
	0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x21, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 
	0x22, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 
	0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 
	0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 
	0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x21, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x33, 0x33, 0x33, 
	0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x13, 0x33, 0x33, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x33, 0x33, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x13, 0x30, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 
	
};

Gfx another_door_wood_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 another_door_wood_ci4_pal_rgba16[] = {
	0x59, 0x89, 0x82, 0x09, 0x71, 0xc9, 0xaa, 0x89, 
	
};

Vtx another_door_Cube_012_mesh_layer_1_vtx_0[64] = {
	{{{14, -71, -707},0, {228, 2145},{0x87, 0x27, 0x0, 0xFF}}},
	{{{14, -71, 707},0, {3903, 2145},{0x87, 0x27, 0x0, 0xFF}}},
	{{{57, 61, 495},0, {3352, 1738},{0x87, 0x27, 0x0, 0xFF}}},
	{{{57, 61, -495},0, {779, 1738},{0x87, 0x27, 0x0, 0xFF}}},
	{{{214, -952, -707},0, {4423, 4862},{0x0, 0x0, 0x81, 0xFF}}},
	{{{14, -952, -707},0, {4943, 4862},{0x0, 0x0, 0x81, 0xFF}}},
	{{{14, -71, -707},0, {4943, 2145},{0x0, 0x0, 0x81, 0xFF}}},
	{{{214, 809, -707},0, {4423, -572},{0x0, 0x0, 0x81, 0xFF}}},
	{{{14, 809, -707},0, {4943, -572},{0x0, 0x0, 0x81, 0xFF}}},
	{{{214, -952, -707},0, {228, 4862},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{214, 809, -707},0, {228, -572},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{214, 809, 707},0, {-3447, -572},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{214, -952, 707},0, {-3447, 4862},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{14, -952, 707},0, {3903, 4862},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{214, -952, 707},0, {4423, 4862},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{214, 809, 707},0, {4423, -572},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{214, 809, 707},0, {4423, -572},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{14, -71, 707},0, {3903, 2145},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{14, -952, 707},0, {3903, 4862},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{14, 809, 707},0, {3903, -572},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{14, -952, -707},0, {4943, 1187},{0x0, 0x81, 0x0, 0xFF}}},
	{{{214, -952, -707},0, {5463, 1187},{0x0, 0x81, 0x0, 0xFF}}},
	{{{214, -952, 707},0, {5463, -2488},{0x0, 0x81, 0x0, 0xFF}}},
	{{{14, -952, 707},0, {4943, -2488},{0x0, 0x81, 0x0, 0xFF}}},
	{{{214, 809, -707},0, {4943, 4862},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{14, 809, -707},0, {5463, 4862},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{14, 809, 707},0, {5463, 1187},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{214, 809, 707},0, {4943, 1187},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{14, -71, 707},0, {3903, 2145},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{14, 809, 707},0, {3903, -572},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{57, 677, 495},0, {3352, -164},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{57, 61, 495},0, {3352, 1738},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{14, 809, 707},0, {3903, -572},{0x87, 0xD9, 0x0, 0xFF}}},
	{{{14, 809, -707},0, {228, -572},{0x87, 0xD9, 0x0, 0xFF}}},
	{{{57, 677, -495},0, {779, -164},{0x87, 0xD9, 0x0, 0xFF}}},
	{{{57, 677, 495},0, {3352, -164},{0x87, 0xD9, 0x0, 0xFF}}},
	{{{14, 809, -707},0, {228, -572},{0x83, 0x0, 0x19, 0xFF}}},
	{{{14, -71, -707},0, {228, 2145},{0x83, 0x0, 0x19, 0xFF}}},
	{{{57, 61, -495},0, {779, 1738},{0x83, 0x0, 0x19, 0xFF}}},
	{{{57, 677, -495},0, {779, -164},{0x83, 0x0, 0x19, 0xFF}}},
	{{{57, 61, 495},0, {3352, 1738},{0x81, 0x0, 0x0, 0xFF}}},
	{{{57, 677, 495},0, {3352, -164},{0x81, 0x0, 0x0, 0xFF}}},
	{{{57, 677, -495},0, {779, -164},{0x81, 0x0, 0x0, 0xFF}}},
	{{{57, 61, -495},0, {779, 1738},{0x81, 0x0, 0x0, 0xFF}}},
	{{{14, -952, -707},0, {228, 4862},{0x86, 0x25, 0x0, 0xFF}}},
	{{{14, -952, 707},0, {3903, 4862},{0x86, 0x25, 0x0, 0xFF}}},
	{{{54, -819, 495},0, {3352, 4455},{0x86, 0x25, 0x0, 0xFF}}},
	{{{54, -819, -495},0, {779, 4455},{0x86, 0x25, 0x0, 0xFF}}},
	{{{14, -71, -707},0, {228, 2145},{0x83, 0x0, 0x17, 0xFF}}},
	{{{14, -952, -707},0, {228, 4862},{0x83, 0x0, 0x17, 0xFF}}},
	{{{54, -819, -495},0, {779, 4455},{0x83, 0x0, 0x17, 0xFF}}},
	{{{54, -203, -495},0, {779, 2553},{0x83, 0x0, 0x17, 0xFF}}},
	{{{14, -71, 707},0, {3903, 2145},{0x86, 0xDB, 0x0, 0xFF}}},
	{{{14, -71, -707},0, {228, 2145},{0x86, 0xDB, 0x0, 0xFF}}},
	{{{54, -203, -495},0, {779, 2553},{0x86, 0xDB, 0x0, 0xFF}}},
	{{{54, -203, 495},0, {3352, 2553},{0x86, 0xDB, 0x0, 0xFF}}},
	{{{14, -952, 707},0, {3903, 4862},{0x83, 0x0, 0xE9, 0xFF}}},
	{{{14, -71, 707},0, {3903, 2145},{0x83, 0x0, 0xE9, 0xFF}}},
	{{{54, -203, 495},0, {3352, 2553},{0x83, 0x0, 0xE9, 0xFF}}},
	{{{54, -819, 495},0, {3352, 4455},{0x83, 0x0, 0xE9, 0xFF}}},
	{{{54, -819, -495},0, {779, 4455},{0x81, 0x0, 0x0, 0xFF}}},
	{{{54, -819, 495},0, {3352, 4455},{0x81, 0x0, 0x0, 0xFF}}},
	{{{54, -203, 495},0, {3352, 2553},{0x81, 0x0, 0x0, 0xFF}}},
	{{{54, -203, -495},0, {779, 2553},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx another_door_Cube_012_mesh_layer_1_tri_0[] = {
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx another_door_Cube_012_mesh_layer_1_vtx_1[104] = {
	{{{-36, -109, -617},0, {-16, 1008},{0x44, 0x9B, 0xDD, 0xFF}}},
	{{{-36, -123, -575},0, {-16, 1008},{0x44, 0x9B, 0xDD, 0xFF}}},
	{{{-86, -157, -575},0, {-16, 1008},{0x44, 0x9B, 0xDD, 0xFF}}},
	{{{-86, -132, -645},0, {-16, 1008},{0x44, 0x9B, 0xDD, 0xFF}}},
	{{{-36, -109, -532},0, {-16, 1008},{0x4A, 0xD3, 0x5D, 0xFF}}},
	{{{-36, -73, -515},0, {-16, 1008},{0x4A, 0xD3, 0x5D, 0xFF}}},
	{{{-86, -73, -475},0, {-16, 1008},{0x4A, 0xD3, 0x5D, 0xFF}}},
	{{{-86, -132, -504},0, {-16, 1008},{0x4A, 0xD3, 0x5D, 0xFF}}},
	{{{-36, -37, -532},0, {-16, 1008},{0x44, 0x65, 0x23, 0xFF}}},
	{{{-36, -22, -575},0, {-16, 1008},{0x44, 0x65, 0x23, 0xFF}}},
	{{{-86, 11, -575},0, {-16, 1008},{0x44, 0x65, 0x23, 0xFF}}},
	{{{-86, -13, -504},0, {-16, 1008},{0x44, 0x65, 0x23, 0xFF}}},
	{{{-36, -37, -617},0, {-16, 1008},{0x4A, 0x2D, 0xA3, 0xFF}}},
	{{{-36, -73, -635},0, {-16, 1008},{0x4A, 0x2D, 0xA3, 0xFF}}},
	{{{-86, -73, -675},0, {-16, 1008},{0x4A, 0x2D, 0xA3, 0xFF}}},
	{{{-86, -13, -645},0, {-16, 1008},{0x4A, 0x2D, 0xA3, 0xFF}}},
	{{{-36, -73, -635},0, {-16, 1008},{0x4A, 0xD3, 0xA3, 0xFF}}},
	{{{-36, -109, -617},0, {-16, 1008},{0x4A, 0xD3, 0xA3, 0xFF}}},
	{{{-86, -132, -645},0, {-16, 1008},{0x4A, 0xD3, 0xA3, 0xFF}}},
	{{{-86, -73, -675},0, {-16, 1008},{0x4A, 0xD3, 0xA3, 0xFF}}},
	{{{-36, -123, -575},0, {-16, 1008},{0x44, 0x9B, 0x23, 0xFF}}},
	{{{-36, -109, -532},0, {-16, 1008},{0x44, 0x9B, 0x23, 0xFF}}},
	{{{-86, -132, -504},0, {-16, 1008},{0x44, 0x9B, 0x23, 0xFF}}},
	{{{-86, -157, -575},0, {-16, 1008},{0x44, 0x9B, 0x23, 0xFF}}},
	{{{-36, -73, -515},0, {-16, 1008},{0x4A, 0x2D, 0x5D, 0xFF}}},
	{{{-36, -37, -532},0, {-16, 1008},{0x4A, 0x2D, 0x5D, 0xFF}}},
	{{{-86, -13, -504},0, {-16, 1008},{0x4A, 0x2D, 0x5D, 0xFF}}},
	{{{-86, -73, -475},0, {-16, 1008},{0x4A, 0x2D, 0x5D, 0xFF}}},
	{{{-36, -22, -575},0, {-16, 1008},{0x44, 0x65, 0xDD, 0xFF}}},
	{{{-36, -37, -617},0, {-16, 1008},{0x44, 0x65, 0xDD, 0xFF}}},
	{{{-86, -13, -645},0, {-16, 1008},{0x44, 0x65, 0xDD, 0xFF}}},
	{{{-86, 11, -575},0, {-16, 1008},{0x44, 0x65, 0xDD, 0xFF}}},
	{{{-86, -13, -645},0, {-16, 1008},{0xC4, 0x31, 0x9B, 0xFF}}},
	{{{-86, -73, -675},0, {-16, 1008},{0xC4, 0x31, 0x9B, 0xFF}}},
	{{{-136, -73, -645},0, {-16, 1008},{0xC4, 0x31, 0x9B, 0xFF}}},
	{{{-136, -31, -624},0, {-16, 1008},{0xC4, 0x31, 0x9B, 0xFF}}},
	{{{-86, -73, -675},0, {-16, 1008},{0xC4, 0xCF, 0x9B, 0xFF}}},
	{{{-86, -132, -645},0, {-16, 1008},{0xC4, 0xCF, 0x9B, 0xFF}}},
	{{{-136, -114, -624},0, {-16, 1008},{0xC4, 0xCF, 0x9B, 0xFF}}},
	{{{-136, -73, -645},0, {-16, 1008},{0xC4, 0xCF, 0x9B, 0xFF}}},
	{{{-86, -157, -575},0, {-16, 1008},{0xC9, 0x94, 0x26, 0xFF}}},
	{{{-86, -132, -504},0, {-16, 1008},{0xC9, 0x94, 0x26, 0xFF}}},
	{{{-136, -114, -525},0, {-16, 1008},{0xC9, 0x94, 0x26, 0xFF}}},
	{{{-136, -132, -575},0, {-16, 1008},{0xC9, 0x94, 0x26, 0xFF}}},
	{{{-86, -73, -475},0, {-16, 1008},{0xC4, 0x31, 0x65, 0xFF}}},
	{{{-86, -13, -504},0, {-16, 1008},{0xC4, 0x31, 0x65, 0xFF}}},
	{{{-136, -31, -525},0, {-16, 1008},{0xC4, 0x31, 0x65, 0xFF}}},
	{{{-136, -73, -505},0, {-16, 1008},{0xC4, 0x31, 0x65, 0xFF}}},
	{{{-86, 11, -575},0, {-16, 1008},{0xC9, 0x6C, 0xDA, 0xFF}}},
	{{{-86, -13, -645},0, {-16, 1008},{0xC9, 0x6C, 0xDA, 0xFF}}},
	{{{-136, -31, -624},0, {-16, 1008},{0xC9, 0x6C, 0xDA, 0xFF}}},
	{{{-136, -14, -575},0, {-16, 1008},{0xC9, 0x6C, 0xDA, 0xFF}}},
	{{{-86, -132, -645},0, {-16, 1008},{0xC9, 0x94, 0xDA, 0xFF}}},
	{{{-86, -157, -575},0, {-16, 1008},{0xC9, 0x94, 0xDA, 0xFF}}},
	{{{-136, -132, -575},0, {-16, 1008},{0xC9, 0x94, 0xDA, 0xFF}}},
	{{{-136, -114, -624},0, {-16, 1008},{0xC9, 0x94, 0xDA, 0xFF}}},
	{{{-86, -132, -504},0, {-16, 1008},{0xC4, 0xCF, 0x65, 0xFF}}},
	{{{-86, -73, -475},0, {-16, 1008},{0xC4, 0xCF, 0x65, 0xFF}}},
	{{{-136, -73, -505},0, {-16, 1008},{0xC4, 0xCF, 0x65, 0xFF}}},
	{{{-136, -114, -525},0, {-16, 1008},{0xC4, 0xCF, 0x65, 0xFF}}},
	{{{-86, -13, -504},0, {-16, 1008},{0xC9, 0x6C, 0x26, 0xFF}}},
	{{{-86, 11, -575},0, {-16, 1008},{0xC9, 0x6C, 0x26, 0xFF}}},
	{{{-136, -14, -575},0, {-16, 1008},{0xC9, 0x6C, 0x26, 0xFF}}},
	{{{-136, -31, -525},0, {-16, 1008},{0xC9, 0x6C, 0x26, 0xFF}}},
	{{{-136, -14, -575},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -31, -624},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -73, -645},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -132, -575},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -114, -624},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -73, -505},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -114, -525},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-136, -31, -525},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-36, -123, -575},0, {-16, 1008},{0x0, 0x88, 0xD6, 0xFF}}},
	{{{-36, -109, -617},0, {-16, 1008},{0x0, 0x88, 0xD6, 0xFF}}},
	{{{-6, -109, -617},0, {-16, 1008},{0x0, 0x88, 0xD6, 0xFF}}},
	{{{-6, -123, -575},0, {-16, 1008},{0x0, 0x88, 0xD6, 0xFF}}},
	{{{-36, -73, -515},0, {-16, 1008},{0x0, 0xC8, 0x72, 0xFF}}},
	{{{-36, -109, -532},0, {-16, 1008},{0x0, 0xC8, 0x72, 0xFF}}},
	{{{-6, -109, -532},0, {-16, 1008},{0x0, 0xC8, 0x72, 0xFF}}},
	{{{-6, -73, -515},0, {-16, 1008},{0x0, 0xC8, 0x72, 0xFF}}},
	{{{-36, -22, -575},0, {-16, 1008},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{-36, -37, -532},0, {-16, 1008},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{-6, -37, -532},0, {-16, 1008},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{-6, -22, -575},0, {-16, 1008},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{-36, -73, -635},0, {-16, 1008},{0x0, 0x38, 0x8E, 0xFF}}},
	{{{-36, -37, -617},0, {-16, 1008},{0x0, 0x38, 0x8E, 0xFF}}},
	{{{-6, -37, -617},0, {-16, 1008},{0x0, 0x38, 0x8E, 0xFF}}},
	{{{-6, -73, -635},0, {-16, 1008},{0x0, 0x38, 0x8E, 0xFF}}},
	{{{-36, -109, -617},0, {-16, 1008},{0x0, 0xC8, 0x8E, 0xFF}}},
	{{{-36, -73, -635},0, {-16, 1008},{0x0, 0xC8, 0x8E, 0xFF}}},
	{{{-6, -73, -635},0, {-16, 1008},{0x0, 0xC8, 0x8E, 0xFF}}},
	{{{-6, -109, -617},0, {-16, 1008},{0x0, 0xC8, 0x8E, 0xFF}}},
	{{{-36, -109, -532},0, {-16, 1008},{0x0, 0x88, 0x2A, 0xFF}}},
	{{{-36, -123, -575},0, {-16, 1008},{0x0, 0x88, 0x2A, 0xFF}}},
	{{{-6, -123, -575},0, {-16, 1008},{0x0, 0x88, 0x2A, 0xFF}}},
	{{{-6, -109, -532},0, {-16, 1008},{0x0, 0x88, 0x2A, 0xFF}}},
	{{{-36, -37, -532},0, {-16, 1008},{0x0, 0x38, 0x72, 0xFF}}},
	{{{-36, -73, -515},0, {-16, 1008},{0x0, 0x38, 0x72, 0xFF}}},
	{{{-6, -73, -515},0, {-16, 1008},{0x0, 0x38, 0x72, 0xFF}}},
	{{{-6, -37, -532},0, {-16, 1008},{0x0, 0x38, 0x72, 0xFF}}},
	{{{-36, -37, -617},0, {-16, 1008},{0x0, 0x78, 0xD6, 0xFF}}},
	{{{-36, -22, -575},0, {-16, 1008},{0x0, 0x78, 0xD6, 0xFF}}},
	{{{-6, -22, -575},0, {-16, 1008},{0x0, 0x78, 0xD6, 0xFF}}},
	{{{-6, -37, -617},0, {-16, 1008},{0x0, 0x78, 0xD6, 0xFF}}},
};

Gfx another_door_Cube_012_mesh_layer_1_tri_1[] = {
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(another_door_Cube_012_mesh_layer_1_vtx_1 + 96, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_another_door_f3d_material_005[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, another_door_wood_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 3),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, another_door_wood_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(another_door_f3d_material_005_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_another_door_f3d_material_005[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_another_door_handle[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(another_door_handle_lights),
	gsSPEndDisplayList(),
};

Gfx another_door_Cube_012_mesh_layer_1[] = {
	gsSPDisplayList(mat_another_door_f3d_material_005),
	gsSPDisplayList(another_door_Cube_012_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_another_door_f3d_material_005),
	gsSPDisplayList(mat_another_door_handle),
	gsSPDisplayList(another_door_Cube_012_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx another_door_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
