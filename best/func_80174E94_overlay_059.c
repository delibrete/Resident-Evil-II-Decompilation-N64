u16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, s32 *, u16 *);
s32 func_80040E88_ovl_01(u16 *, s32 *);
s32 func_8004279C_ovl_01(s32 *, u16 *, u16 *);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_8016F01C_overlay_059(void *, s32, s32);
s32 func_80173D38_overlay_059(void *);
s32 func_80173E70_overlay_059(void *);
s32 func_80173FA8_overlay_059(void *);
s32 func_80174138_overlay_059(void *);
s32 func_801743D0_overlay_059(void *);
s32 func_801752E8_overlay_059(void *, s32, s32);
extern s32 D_800C7650;
extern s32 D_800E8FC8;
extern s32 D_80178FF4_overlay_059;
void func_80174E94_overlay_059(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_constant = 0xC8;
  u16 sp10;
  u16 sp12;
  u16 sp14;
  u16 sp18;
  u8 new_var;
  u16 sp1A;
  u16 sp1C;
  s32 sp20;
  u16 temp_s4;
  u8 temp_v1;
  void *temp_s0;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    temp_s0 = (*((s32 *) (((char *) arg0) + 0x234))) + 0xD38;
    temp_s4 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) (&D_800C7650)) + 0x19AAA)), *((s16 *) (((char *) (&D_800C7650)) + 0x19AB2)));
    sp10 = 0;
    sp12 = temp_s4;
    sp14 = 0;
    func_80040E88_ovl_01(&sp10, &sp20);
    sp10 = __repair_constant;
    sp12 = -0xC8U;
    sp1A = 0;
    sp1C = 0;
    sp18 = ((*((u16 *) (((char *) arg0) + 0x1E0))) * 4) + 0x12C;
    if (!(((*((u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF))
    {
      sp10 = 0x96;
      sp12 = 0x320;
      sp1A = 0x2BC;
      sp18 = ((*((u16 *) (((char *) arg0) + 0x1E0))) * 2) + 0x96;
    }
    if ((((*((u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF) == 2)
    {
      sp10 = __repair_constant;
      sp12 = -0x2BCU;
      sp1A = -0x2BCU;
      sp18 = ((*((u16 *) (((char *) arg0) + 0x1E0))) * 2) + 0xC8;
    }
    func_8004279C_ovl_01(&sp20, &sp10, &sp10);
    sp10 += *((u16 *) (((char *) temp_s0) + 0x4E));
    sp12 += *((u16 *) (((char *) temp_s0) + 0x52));
    sp14 += *((u16 *) (((char *) temp_s0) + 0x56));
    func_8004279C_ovl_01(&sp20, &sp18, &sp18);
    sp18 += *((u16 *) (((char *) temp_s0) + 0x4E));
    sp1A += *((u16 *) (((char *) temp_s0) + 0x52));
    sp1C += *((u16 *) (((char *) temp_s0) + 0x56));
    temp_v1 = *((u8 *) (((char *) arg0) + 5));
    if ((temp_v1 != 0x10) && (temp_v1 != 0xC))
    {
      func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x10000, (s16) temp_s4, &D_800E8FC8, &sp10);
      sp12 -= ((func_80033634_ovl_01() & 0x3F) & 0xFF) - 0x40;
      func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8, &sp10);
      func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8, &sp18);
      sp12 -= ((func_80033634_ovl_01() & 0x3F) & 0xFF) - 0x40;
      func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8, &sp18);
      if ((*((u8 *) (((char *) arg0) + 5))) != 1)
      {
        func_80077D48_ovl_01(2, arg0);
      }
    }
    if (((u32) ((*((u8 *) (((char *) arg0) + 5))) - 5)) < 2U)
    {
      *((s8 *) (((char *) arg0) + 0x2BC)) = 1;
    }
    if (((u8) (*((u8 *) (((char *) arg0) + 0x26E)))) < 3U)
    {
      if ((*((u8 *) (((char *) arg0) + 5))) == 9)
      {
        func_80173FA8_overlay_059(arg0);
      }
      if ((*((u8 *) (((char *) arg0) + 5))) == 0x11)
      {
        func_80174138_overlay_059(arg0);
      }
      if ((*((u8 *) (((char *) arg0) + 5))) == 0xA)
      {
        func_80173D38_overlay_059(arg0);
      }
      if ((*((u8 *) (((char *) arg0) + 5))) == 0xB)
      {
        func_80173E70_overlay_059(arg0);
      }
    }
    if ((*((u8 *) (((char *) arg0) + 5))) == 0xE)
    {
      func_801743D0_overlay_059(arg0);
    }
    new_var = *((u8 *) (((char *) arg0) + 0x2B9));
    if ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0x400)
    {
      *((s32 *) (((char *) arg0) + 4)) = (s32) (*((s32 *) (((char *) arg0) + 0x298)));
      goto block_30;
    }
    sp12 = *((u16 *) (((char *) arg0) + 0x2B6));
    *((u8 *) (((char *) arg0) + 0x2B9)) = (u8) (new_var + (*((u8 *) (((char *) ((*((u8 *) (((char *) arg0) + 5))) + (&D_80178FF4_overlay_059))) + (-1)))));
    if (!(sp12 & 1))
    {
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) (sp12 | 1);
      *((s8 *) (((char *) arg0) + 0x2B8)) = 0xF;
    }
    if (((u8) (*((u8 *) (((char *) arg0) + 0x2B9)))) < 0xCU)
    {
      *((s32 *) (((char *) arg0) + 4)) = (s32) (*((s32 *) (((char *) arg0) + 0x298)));
      func_8016F01C_overlay_059(arg0, arg1, arg2);
      return;
    }
    *((u8 *) (((char *) arg0) + 0x2B9)) = 0U;
    *((s8 *) (((char *) arg0) + 0x2B8)) = 0;
    *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFFFE);
    goto block_29;
  }
  block_29:
  block_30:
  func_801752E8_overlay_059(arg0, arg1, arg2);


}

