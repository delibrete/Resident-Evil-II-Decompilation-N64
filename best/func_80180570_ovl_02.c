s32 func_80004CFC();
s32 func_8007530C_ovl_01();
s32 func_800A21B8_ovl_01();
s32 func_800A8B68_ovl_01();
extern s32 D_800C1DF0;
extern u8 D_80110344;
s32 func_80180570_ovl_02(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_s0;
  s32 temp_v0;
  int new_var;
  func_80004CFC(arg0, (D_800C1DF0 + 0x3B807) & (~7), 0, 0);
  temp_s0 = arg1 & 0xFFFF;
  new_var = arg2 & 0xFFFF;
  func_8007530C_ovl_01(temp_s0, 8, 1);
  temp_v0 = func_800A8B68_ovl_01(temp_s0, new_var, (D_800C1DF0 + 0x3B807) & (~7), 0);
  func_800A21B8_ovl_01(((D_80110344 * 0x7F) / 100) & 0xFF, 0, temp_v0, 0);
  return temp_v0;
}

