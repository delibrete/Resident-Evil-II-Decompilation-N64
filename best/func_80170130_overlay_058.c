s32 func_80077D48_ovl_01(s32, void *);
s32 func_80173E84_overlay_058(void *, s32, s32);
s32 func_801743A4_overlay_058(s32, s32);
s32 func_80170130_overlay_058(void *arg0, s32 arg1)
{
  s32 temp_s0;
  u16 temp_v1_2;
  unsigned int new_var3;
  void *temp_v1;
  u16 *new_var;
  unsigned int new_var2;
 do { if ((*(*((s32 **) (((char *) arg0) + 0x214)))) & 0x01000000) { temp_s0 = arg1 & 0xFF; if (func_801743A4_overlay_058(temp_s0, 0x64) != 0) { new_var2 = 0x56; temp_v1 = (*((s32 *) (((char *) arg0) - -0x234))) + (temp_s0 * 0x178); temp_v1_2 = *((u16 *) (((char *) temp_v1) + new_var2)); if (((u32) (((*(new_var = &(*((u16 *) (((char *) temp_v1) + 0x4E))))) + 0xE73) & 0xFFFF)) < 0x4A9BU) { new_var3 = temp_v1_2; if (((s16) new_var3) >= (-0x55EF)) { if (((s16) new_var3) < (-0x2AF8)) { func_80077D48_ovl_01(5, arg0); func_80173E84_overlay_058(arg0, (arg1 - 1) & 0xFF, 6); func_80173E84_overlay_058(arg0, temp_s0, 6); func_80173E84_overlay_058(arg0, (arg1 + 1) & 0xFF, 6); return 1; } goto block_6; } return 0; } } } block_6: return 0; } while (0);
}
