unsigned long long func_80032DEC_ovl_01(void *, s32, s32, s32);
s32 func_800331E8_ovl_01();
s32 func_80077B0C_ovl_01(s32, void *);
s16 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_8016F400_overlay_051(void *, s32, s32, s32, s32, s32, s16 *);
s32 func_8016FC64_overlay_051(void *, s16);
void func_801724D4_overlay_051(void *arg0)
{
  s16 sp20;
  s16 sp22;
  s16 sp24;
  s16 temp_s0_2;
  s16 temp_s0_4;
  s16 temp_v0;
  u16 temp_s0;
  u16 temp_v0_2;
  u16 temp_v0_3;
  u16 temp_v0_4;
  u16 temp_v0_5;
  u8 temp_v1;
  u8 var_v0;
  void *temp_s0_3;
  void *temp_s2;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  temp_s2 = *((void **) (((char *) arg0) + 0x250));
  temp_s0 = *((u16 *) (((char *) temp_s2) + 0x66));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03000300;
      func_80077B0C_ovl_01(0x04010001, arg0 + 0x28);
      *((u16 *) (((char *) arg0) + 0x1F4)) = 5U;
      *((u16 *) (((char *) arg0) + 0x1E0)) = 0x2BCU;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s8 *) (((char *) arg0) + 0x206)) = 1;
      *((s16 *) (((char *) arg0) + 0x1F6)) = 0;
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) | 0x80);
      *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 0x12);

    case 1:
      func_8016FC64_overlay_051(arg0, (s16) temp_s0);
      if ((*((s16 *) (((char *) arg0) + 0x1F6))) == 0)
    {
      temp_v0 = func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400);
      *((s16 *) (((char *) arg0) + 0x1F6)) = temp_v0;
      if ((temp_v0 << 0x10) == 0)
      {
        *((s16 *) (((char *) arg0) + 0x1F6)) = func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400);
      }
    }
      temp_v0_2 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_2;
      if ((temp_v0_2 << 0x10) == 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
    }
      *((u16 *) (((char *) arg0) + 0x1E0)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1E0))) - 0x64);
      if ((*((s32 *) (((char *) arg0) + 0x1AC))) & 1)
    {
      *((u8 *) (((char *) arg0) + 6)) = 5U;
      *((s8 *) (((char *) arg0) + 0x206)) = 0;
    }
      break;

    case 2:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x04000300;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s8 *) (((char *) arg0) + 0x206)) = 0;
      func_80077B0C_ovl_01(0x022A0001, arg0 + 0x28);
      *((u8 *) (((char *) arg0) + 6)) = 3U;

    case 3:
      do
    {
      func_8016FC64_overlay_051(arg0, (s16) temp_s0);
    }
    while (0);
      temp_s0_2 = func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + (temp_s0_2 + func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400)));
      sp24 = 0;
      sp20 = 0;
      sp22 = 0x64;
      temp_v0_3 = *((u16 *) (((char *) arg0) + 0x1F4));
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) (temp_v0_3 + 1);
      if (((u32) ((temp_v0_3 - 5) & 0xFFFF)) < 8U)
    {
      func_8016F400_overlay_051(arg0, 4, 0x55, 0x448, 0, 4, &sp20);
      func_8016F400_overlay_051(arg0, 4, 0x55, 0x448, 0, 7, &sp20);
    }
      temp_v0_4 = (*((u16 *) (((char *) arg0) + 0x1E0))) - 0xA;
      *((u16 *) (((char *) arg0) + 0x1E0)) = temp_v0_4;
      if (temp_v0_4 & 0x8000)
    {
      *((u16 *) (((char *) arg0) + 0x1E0)) = 0U;
    }
      break;

    case 4:
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
      *((u8 *) (((char *) arg0) + 0x26F)) = 0U;
      *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) & 0xED);
      break;

    case 5:
      temp_s0_3 = arg0 + 0x28;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000300;
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
      func_80077B0C_ovl_01(0x04020001, temp_s0_3);
      func_80077B0C_ovl_01(0x02290001, temp_s0_3);

    case 6:
      temp_s0_2 = func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400);
      if ((temp_s0_2 + func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400)) != 0)
    {
      block_29:
      *((u8 *) (((char *) arg0) + 6)) = var_v0;

    }
      break;

    case 7:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x05000300;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 8:
      func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x10400);
      var_v0 = (*((u8 *) (((char *) arg0) + 6))) + 1;
      temp_v0_5 = (*((u16 *) (((char *) arg0) + 0x1F4))) - ((func_800331E8_ovl_01() * 5) + 1);
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_5;
      if (temp_v0_5 & 0x8000)
    {
      *((u8 *) (((char *) arg0) + 6)) = 9U;
    }
      break;

    case 9:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000300;
      *((u8 *) (((char *) arg0) + 0x26F)) = 0U;
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 10:
      if (func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400) != 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = 0xBU;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x06000300;
    }
      break;

    case 11:
      var_v0 = 4;
      if ((func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x1A4)), *((s32 *) (((char *) arg0) + 0x218)), 0x10400) != 0) || ((var_v0 = 4, func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x1A4)), *((s32 *) (((char *) arg0) + 0x218)), 0x10400) != 0)))
    {
      goto block_29;
    }
      break;

  }

  if ((*((s8 *) (((char *) arg0) + 0x206))) != 0)
  {
    func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) temp_s2) + 0x28)), *((s32 *) (((char *) temp_s2) + 0x30)), 0x20);
  }
}

