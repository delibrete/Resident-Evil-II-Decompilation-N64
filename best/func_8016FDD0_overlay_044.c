s32 func_80032C9C_ovl_01(void *, s32, s32);
s32 func_80032DEC_ovl_01(void *, s32, s32, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_8008A974_ovl_01(void *, s32, s32, s32);
void func_8016FDD0_overlay_044(void *arg0, s32 arg1, s32 arg2)
{
  s16 var_v0;
  s16 var_v1;
  u8 temp_v1;
  void *temp_v0;
 do { temp_v1 = *((u8 *) (((char *) arg0) + 6)); } while (0);
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000F00;
      *((s8 *) (((char *) arg0) + 0x2CE)) = 3;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C8))) & 0xFFFD);

    case 1:
      temp_v0 = *((void **) (((char *) arg0) + 0x2C4));
      do { func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) temp_v0) + 0x28)), *((s32 *) (((char *) temp_v0) + 0x30)), 0x60); } while (0);
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      var_v0 = *((s16 *) (((char *) arg0) + 0x1E0));
      if (var_v0 < 0)
    {
      var_v0 += 3;
    }
      var_v1 = *((s16 *) (((char *) arg0) + 0x1E4));
      *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) (var_v0 >> 2);
      if (var_v1 < 0)
    {
      var_v1 += 3;
    }
      *((s16 *) (((char *) arg0) + 0x1E4)) = (s16) (var_v1 >> 2);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_8008A974_ovl_01(arg0, arg1, arg2, 0x100));
      func_80032C9C_ovl_01(arg0, 0, 0);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x04000F00;
      *((u8 *) (((char *) arg0) + 6)) = 0x300;

    case 3:
      *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + 1);
      func_8008A974_ovl_01(arg0, arg1, arg2, 0x100);
      if (((u8) (*((u8 *) (((char *) arg0) + 7)))) >= 5U)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x010F0000;
    }
      return;

  }

}
