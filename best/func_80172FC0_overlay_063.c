s32 func_800377B0_ovl_01(s32, s16);
s32 func_80040E88_ovl_01(s32, s32 *);
s32 func_8004279C_ovl_01(s32 *, s32, u16 *);
extern s32 D_800E8FC8;
extern s32 D_80173368_overlay_063;
void func_80172FC0_overlay_063(void *arg0, s32 arg1, void *arg2, s32 arg3)
{
  u16 new_var2[2];
  u16 new_var[2];
  void *temp_s0;
  temp_s0 = (char *) ((arg1 & 0x7F) * 6);
  temp_s0 += (s32) (&D_80173368_overlay_063);
  func_80040E88_ovl_01(arg0 + 0x64, &new_var[0]);
  func_8004279C_ovl_01(&new_var[0], arg3, &new_var2[1]);
  new_var2[1] += *((u16 *) (arg2 + 0));
  new_var2[0] += *((u16 *) (arg2 + 2));
  new_var[1] += *((u16 *) (((char *) arg2) + 4));
  do { func_800377B0_ovl_01(((((*((u8 *) (((char *) temp_s0) + 0))) & 0x7F) << 0x18) | (((*((u8 *) (((char *) temp_s0) + 1))) + (*((u16 *) (((char *) temp_s0) + 2)))) << 0x10)) | (*((u16 *) (((char *) temp_s0) + 4))), *((s16 *) (((char *) arg0) + 0x66))); } while (0);
}

