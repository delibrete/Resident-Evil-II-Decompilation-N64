s32 func_8003334C_ovl_01(void *, s32, s32, s32);
s32 func_80052C00_ovl_01(s32, s32);
s32 func_80052D40_ovl_01(s32, s32, s32, s32);
s32 func_80077B0C_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern volatile u8 D_800C7650_ovl_01;
void func_80164604_overlay_015(void *arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      func_80052D40_ovl_01(0xA, 0x28, 0x96, 0xB);
      func_80052C00_ovl_01(3, 0x16);
      func_80052C00_ovl_01(3, 0x1A);
      func_80052D40_ovl_01(0x41, 0xF0, 0x78, 0x15);
      func_80052D40_ovl_01(0xA, 0xF5, 0x46, 0x56);
      func_80052D40_ovl_01(5, 0x46, 0x8C, 0x6A);
      func_80052C00_ovl_01(3, 0x6E);
      func_80052D40_ovl_01(0x14, 0xFF, 0x78, 0x6C);
      func_80052D40_ovl_01(0x14, 0xBE, 0x64, 0x80);
      func_80052D40_ovl_01(0x91, 0xA0, 0x1E, 0x94);
      *((s16 *) (((char *) arg0) + 0x1F4)) = 0;
      *((volatile s32 *) (((s8 *) (&D_800C7650_ovl_01)) + 0x19A60)) |= 0x01000000;
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 1:
      *((u8 *) (((char *) arg0) + 0x1E9)) = 0U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000300;
      func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x1A4)), *((s32 *) (((char *) arg0) + 0x218)), 0x400);
      if ((*((s16 *) (((char *) arg0) + 0x1F4))) != 0)
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000000;
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
      return;
    }
      return;

    new_var = (s8 *) (&D_800C7650_ovl_01);
    case 2:
      func_8003334C_ovl_01(arg0, arg1, arg2, 0);
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 3)
    {
      func_80077B0C_ovl_01(0x04020001, arg0 + 0x28);
    }
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000));
      return;

    case 3:
      *((volatile s8 *) (new_var + 0x19CEF)) = (s8) 0x80;
      break;

  }

}

