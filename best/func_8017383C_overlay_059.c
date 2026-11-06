inline static u8 __repair_inline(u8 a)
{
  return a;
}

s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01();
u32 func_80040BE4_ovl_01(s32);
s32 func_8004DCE8_ovl_01(void *, s32, s16, s16);
s32 func_80052C9C_ovl_01(s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_801784D8_overlay_059(void *, s16, s16 *);
extern s32 D_800C7650;
extern s32 D_80178DC0_overlay_059;
extern u8 D_80178DE0_overlay_059;
extern s32 D_80178DE4_overlay_059;
void func_8017383C_overlay_059(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp20;
  u16 sp22;
  s16 sp24;
  int temp_a1;
  s16 temp_a2;
  s16 temp_a3;
  s32 temp_v0_2;
  s32 temp_v0_3;
  u16 temp_a0;
  u16 temp_a0_2;
  u16 temp_s5;
  u16 temp_s6;
  u16 temp_v1_2;
  u8 temp_v1;
  void *temp_v0;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((u8 *) (((char *) arg0) + 0x206)) = (u8) (*((((u32) (func_80033634_ovl_01() & 0xFF)) % ((u8) D_80178DE0_overlay_059)) + (&D_80178DE4_overlay_059)));
  }
  temp_v0 = (char *) (((s8) (*((u8 *) (((char *) arg0) + 0x206)))) * 4);
  temp_v0 += (s32) (&D_80178DC0_overlay_059);
  temp_s5 = *((u16 *) (((char *) temp_v0) + 0));
  temp_s6 = *((u16 *) (((char *) temp_v0) + 2));
  temp_v1 = __repair_inline(*((u8 *) (((char *) arg0) + 6)));
  *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1F4))) + 1);
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x06000700;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2C0)) = 0U;
      *((s8 *) (((char *) arg0) + 0x207)) = 0;
      *((s8 *) (((char *) arg0) + 0x2D7)) = 0;
      *((s16 *) (((char *) arg0) + 0x2D4)) = 0;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFFFD);
      func_80052C9C_ovl_01(8, 0x50, 0xF);

    case 1:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_80032DEC_ovl_01(arg0, (s16) temp_s5, (s16) temp_s6, 0x10);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0x13)
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      *((s16 *) (((char *) arg0) + 0x1E2)) = -0x44C;
      *((s8 *) (((char *) arg0) + 0x207)) = 0x12;
      if ((*((u8 *) (((char *) arg0) + 5))) == 0x11)
      {
        *((s16 *) (((char *) arg0) + 0x1E2)) = -0x320;
        *((s8 *) (((char *) arg0) + 0x207)) = 0x10;
      }
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) | 4);
      func_80032DEC_ovl_01(arg0, (s16) temp_s5, (s16) temp_s6, 0x20);
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) | 0x80);
      func_80077D48_ovl_01(2, arg0);
    }
      break;

    case 2:
      func_80032DEC_ovl_01(arg0, (s16) temp_s5, (s16) temp_s6, 0x40);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x200));
      temp_a0 = *((u16 *) (((char *) arg0) + 0x2C0));
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + (*((s16 *) (((char *) arg0) + 0x1E2))));
      *((s16 *) (((char *) arg0) + 0x1E2)) = (s16) ((((u16) (*((s16 *) (((char *) arg0) + 0x1E2)))) + 0x78) - temp_a0);
      *((u16 *) (((char *) arg0) + 0x2C0)) = (u16) (temp_a0 + 2);
      break;

    case 3:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0D000F00;
      *((u8 *) (((char *) arg0) + 6)) = 4U;

    case 4:
      sp24 = *((s32 *) (((char *) arg0) + 0x30));
      func_80032DEC_ovl_01(arg0, (s16) (*((s32 *) (((char *) (&D_800C7650)) + 0x19AA8))), (s16) (*((s32 *) (((char *) (&D_800C7650)) + 0x19AB0))), 0x20);
      if ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0x10)
    {
      func_80032DEC_ovl_01(arg0, (s16) (*((s32 *) (((char *) (&D_800C7650)) + 0x19AA8))), (s16) (*((s32 *) (((char *) (&D_800C7650)) + 0x19AB0))), 0x20);
    }
      do
    {
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    }
    while (0);
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + (*((s16 *) (((char *) arg0) + 0x1E2))));
      temp_a0 = *((u16 *) (((char *) arg0) + 0x2C0));
      *((s16 *) (((char *) arg0) + 0x1E2)) = (s16) ((((u16) (*((s16 *) (((char *) arg0) + 0x1E2)))) + 0x78) - temp_a0);
      *((u16 *) (((char *) arg0) + 0x2C0)) = (u16) (temp_a0 + 2);
      if ((*((s16 *) (((char *) arg0) + 0x1E2))) > 0)
    {
      temp_a0_2 = *((u16 *) (((char *) arg0) + 0x2B6));
      if (!(temp_a0_2 & 0x10))
      {
        *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) (temp_a0_2 | 0x10);
        *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0E000F00;
      }
    }
      temp_a2 = *((s16 *) (((char *) arg0) + 0x1E0));
      temp_a3 = *((s16 *) (((char *) arg0) + 0x1E4));
      *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + temp_a2);
      *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + temp_a3);
      func_8004DCE8_ovl_01(arg0, 0x400, temp_a2, temp_a3);
      temp_a1 = *((s16 *) (((char *) arg0) + 0x25E));
      *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) - (*((s16 *) (((char *) arg0) + 0x1E0))));
      *((s32 *) (((char *) arg0) + 0x30)) = (s32) (sp24 - (*((s16 *) (((char *) arg0) + 0x1E4))));
      if (temp_a1 < (*((s32 *) (((char *) arg0) + 0x2C))))
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01060000;
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) temp_a1;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
      if (temp_a1 == (-0xE10))
      {
        *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) | 0x20);
      }
      func_80052C9C_ovl_01(8, 0x64, 0);
    }
      if ((*((s32 *) (((char *) arg0) + 0x2C))) < (-0xED8))
    {
      *((s8 *) (((char *) arg0) + 0x1A2)) = 2;
    }
      if ((*((s32 *) (((char *) arg0) + 0x2C))) >= (-0xE0F))
    {
      *((s8 *) (((char *) arg0) + 0x1A2)) = 0;
    }
      break;

  }

  if ((*((s8 *) (((char *) arg0) + 0x207))) != 0)
  {
    temp_v0_2 = ((s16) temp_s5) - (*((s32 *) (((char *) arg0) + 0x28)));
    temp_v0_3 = ((s16) temp_s6) - (*((s32 *) (((char *) arg0) + 0x30)));
    sp20 = (s16) (func_80040BE4_ovl_01((temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3)) / ((u32) (*((s8 *) (((char *) arg0) + 0x207)))));
    sp24 = 0;
    sp22 = (u16) (*((s16 *) (((char *) arg0) + 0x1E2)));
    func_801784D8_overlay_059(arg0, func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), (s16) temp_s5, (s16) temp_s6), &sp20);
    *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + (*((s16 *) (((char *) arg0) + 0x1E0))));
    *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + (*((s16 *) (((char *) arg0) + 0x1E4))));
    *((s8 *) (((char *) arg0) + 0x207)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x207)))) - 1);
  }
}

