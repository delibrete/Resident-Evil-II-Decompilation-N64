s32 func_80077D48_ovl_01(s32, void *);
s32 func_801672F4_overlay_030(void *, s32, s32);
s32 func_80167814_overlay_030(s32, s32);
s32 func_801635A0_overlay_030(void *arg0, s32 arg1)
{
  s32 temp_s0;
  u16 temp_v1_2;
  void *temp_v1;
 do { if ((*(*((s32 **) (((char *) arg0) + 0x214)))) & 0x01000000) { temp_s0 = arg1 & 0xFF; if (func_80167814_overlay_030(temp_s0, 0x64) != 0) { temp_v1 = (*((s32 *) (((char *) arg0) + 0x234))) + (temp_s0 * 0x178); temp_v1_2 = *((u16 *) (((char *) temp_v1) + 0x56)); if (((u32) (((*((u16 *) (((char *) temp_v1) + 0x4E))) + 0xE73) & 0xFFFF)) < 0x4A9BU) { if (((s16) temp_v1_2) >= (-0x55EF)) { if (((s16) temp_v1_2) < (-0x2AF8)) { func_80077D48_ovl_01(5, arg0); func_801672F4_overlay_030(arg0, (arg1 - 1) & 0xFF, 6); func_801672F4_overlay_030(arg0, temp_s0, 6); func_801672F4_overlay_030(arg0, (arg1 + 1) & 0xFF, 6); return 1; } goto block_6; } return 0; } } } } while (0);
  block_6:
  return 0;

}
