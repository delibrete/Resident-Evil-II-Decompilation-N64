/* identical to func_801645CC_ovl_32 (matched), with its names changed by decompdecomp */
s32 func_80032B8C_ovl_01(void *, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_8017115C_overlay_060(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  *((u16 *) (((char *) arg0) + 0x2C2)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C2))) | 2);
  switch (*((u8 *) (((char *) arg0) + 6)))
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08001F00;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      func_80077D48_ovl_01(0xC, arg0);

    case 1:
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0xF)
    {
      func_80077D48_ovl_01(9, arg0);
    }
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
      *((u16 *) (((char *) arg0) + 0x2C2)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C2))) & 0xFFFD);
    }
      func_80032B8C_ovl_01(arg0, 0);
      return;

  }

}

