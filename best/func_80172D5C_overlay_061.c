s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80040E88_ovl_01(s16 *, s32 *);
s32 func_8004279C_ovl_01(s32 *, s16 *, void *);
s32 func_80077B0C_ovl_01(s32, void *);
s32 func_80077F60_ovl_01(s32, s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650;
void func_80172D5C_overlay_061(void *arg0, s32 arg1, s32 arg2)
{
  s32 sp10;
  s16 sp30;
  s16 sp32;
  s16 sp34;
  u16 temp_v0;
  u8 temp_v1;
  u8 temp_v1_2;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x05000700;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) | 0x80);
      func_80077B0C_ovl_01(0x04020001, arg0 + 0x28);
      *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 0x12);
      sp32 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x2A)), *((s16 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x32)));
      sp30 = 0;
      sp34 = 0;
      func_80040E88_ovl_01(&sp30, &sp10);
      sp30 = 0x258;
      sp32 = 0;
      func_8004279C_ovl_01(&sp10, &sp30, arg0 + 0x1E0);

    case 1:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03000300;
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0xFU;
    }
      *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + (*((s16 *) (((char *) arg0) + 0x1E0))));
      *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + (*((s16 *) (((char *) arg0) + 0x1E4))));
      *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) (((s32) (((u16) (*((s16 *) (((char *) arg0) + 0x1E0)))) << 0x10)) >> 0x11);
      temp_v1_2 = *((u8 *) (((char *) arg0) + 0x1E9));
      *((s16 *) (((char *) arg0) + 0x1E4)) = (s16) (((s32) (((u16) (*((s16 *) (((char *) arg0) + 0x1E4)))) << 0x10)) >> 0x11);
      if ((temp_v1_2 == 3) || (temp_v1_2 == 0xB))
    {
      func_80077F60_ovl_01(2, 0, arg0);
      return;
    }

    default:
      return;

    case 2:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
      if (((s16) temp_v0) == (-1))
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000300;
      *((u8 *) (((char *) arg0) + 6)) = 3U;
      return;
    }
      break;

    case 3:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0)
    {
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~2));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x06000700;
      *((u8 *) (((char *) arg0) + 6)) = 4U;
      *((u8 *) (((char *) arg0) + 0x25C)) = 0U;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
      *((s32 *) (((char *) (&D_800C7650)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C))) & (~0x40));
      return;
    }
      break;

    case 4:
      if (func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x1A4)), *((s32 *) (((char *) arg0) + 0x218)), 0x10200) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
    }
      break;

  }

}

