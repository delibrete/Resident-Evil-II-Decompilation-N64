s32 func_80033634_ovl_01(s32, s32 *);
s32 func_800377B0_ovl_01(s32, s16, s32 *, u16 *);
extern s32 D_800E10D0;
extern s32 D_800E8FC8;
extern s32 D_80173A8C_overlay_040;
void func_80173490_overlay_040(s32 *arg0, s32 arg1, s32 arg2)
{
  u16 sp10;
  u16 sp12;
  u16 sp14;
  s32 *var_a2;
  s32 *var_s0;
  s16 temp_a0_2;
  s32 temp_a0;
  s32 temp_v1;
  s32 var_a0;
  u16 temp_a1;
  u8 temp_v0;
  void *temp_a3;
  void *temp_s1;
  void *temp_s2;
  temp_s2 = (char *) arg0;
  temp_s2 += (s32) 0x2B4;
  if ((*((u8 *) (((char *) temp_s2) + 7))) != 0)
  {
    temp_a0 = arg2 & 0xFF;
    temp_s1 = (char *) (temp_a0 * 6);
    temp_s1 += (s32) (&D_80173A8C_overlay_040);
    var_s0 = arg0;
    if (temp_a0 == 4)
    {
      var_s0 = &D_800E10D0;
      temp_v1 = temp_v0 & 0x7F;
    }
    temp_a1 = *((u16 *) (((char *) temp_s1) + 2));
    temp_a3 = (char *)((*((s32 *) (((char *) var_s0) + 0x234)))); temp_a3 += (s32)(((arg1 & 0x7F) * 0x178));
    temp_v0 = *((u8 *) (((char *) temp_s1) + 0));
    temp_a0_2 = ((*((s16 *) (((char *) var_s0) + 0x66))) + ((func_80033634_ovl_01(temp_a0, arg0) & 0xFF) & ((temp_a1 * 2) - 1))) - temp_a1;
    if (temp_v0 & 0x80)
    {
      var_a2 = temp_a3 + 0x38;
      var_a0 = temp_v1 << 0x18;
      sp10 = 0;
      sp12 = 0;
      sp14 = 0;
      func_800377B0_ovl_01((var_a0 | ((*((u8 *) (((char *) temp_s1) + 1))) << 0x10)) | (*((u16 *) (((char *) temp_s1) + 4))), temp_a0_2, var_a2, &sp10);
    }
    else
    {
      var_a2 = &D_800E8FC8;
      sp10 = *((u16 *) (((char *) temp_a3) + 0x4E));
      var_a0 = temp_v1 << 0x18;
      sp12 = *((u16 *) (((char *) temp_a3) + 0x52));
      sp14 = *((u16 *) (((char *) temp_a3) + 0x56));
      func_800377B0_ovl_01((var_a0 | ((*((u8 *) (((char *) temp_s1) + 1))) << 0x10)) | (*((u16 *) (((char *) temp_s1) + 4))), temp_a0_2, var_a2, &sp10);
    }
    *((u8 *) (((char *) temp_s2) + 7)) = (u8) ((*((u8 *) (((char *) temp_s2) + 7))) - 1);
  }
}

