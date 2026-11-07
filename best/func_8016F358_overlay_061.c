extern unsigned char D_800E133F;
s32 func_80032DEC_ovl_01();
s32 func_80033634_ovl_01();
s32 func_8004279C_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80173020_overlay_061();
s32 func_801730A8_overlay_061();
extern char D_800C7650[];
extern s32 D_800E10D4;
void func_8016F358_overlay_061(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp10;
  u16 sp12;
  u16 sp14;
  s16 temp_v0_2;
  s16 new_var[2];
  u16 temp_a0;
  u16 temp_a0_2;
  u16 temp_a0_4;
  u16 temp_v0;
  u16 temp_v0_4;
  u8 temp_a2;
  u8 temp_a2_2;
  u8 temp_v1;
  void *temp_a0_3;
  void *temp_a0_6;
  void *temp_s0;
  void *temp_s0_2;
  void *var_s0;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  var_s0 = *((void **) (((char *) arg0) + 0x234));
  switch (temp_v1)
  {
    case 0:
      var_s0 = *((void **) (((char *) arg0) + 0x234));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u8 *) (((char *) arg0) + 0x25C)) &= 0xFD;
      *((s32 *) (((char *) var_s0) + 0)) |= 1;
      func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) (*((void **) (D_800C7650 + 0x19CB4)))) + 0x4C)), *((s32 *) (((char *) (*((void **) (D_800C7650 + 0x19CB4)))) + 0x54)));
      *((u16 *) (((char *) arg0) + 0x68)) = -0x40U;
      *((u16 *) (((char *) arg0) + 0x1F6)) = 0x28U;
      *((s8 *) (((char *) arg0) + 0x206)) = 0;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s16 *) (((char *) arg0) + 0x64)) = 0;
      *((s8 *) (((char *) arg0) + 0x207)) = 0;

    case 1:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
      *((u16 *) (((char *) var_s0) + 0x124)) += *((u16 *) (((char *) arg0) + 0x1F4));
      *((u16 *) (((char *) arg0) + 0x1F4)) += 2;
      if (((s16) (*((u16 *) (((char *) var_s0) + 0x124)))) >= 0xDDD)
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01003F00;
    }
      if ((((s16) (*((u16 *) (((char *) var_s0) + 0x124)))) >= 0x801) && ((*((s8 *) (((char *) arg0) + 0x207))) == 0))
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x09003F00;
      *((s8 *) (((char *) arg0) + 0x207)) = 1;
    }
      if ((*((s8 *) (((char *) arg0) + 0x206))) == 0)
    {
      temp_a0 = *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) arg0) + 0x68)) -= temp_a0;
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) (temp_a0 - 1);
      return;
    }

    default:
      return;

    case 2:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
      temp_v0 = (*((u16 *) (((char *) var_s0) + 0x124))) + (*((u16 *) (((char *) arg0) + 0x1F4)));
      *((u16 *) (((char *) var_s0) + 0x124)) = temp_v0;
      if (((s16) temp_v0) >= 0x1001)
    {
      *((u16 *) (((char *) var_s0) + 0x124)) = 0x1000U;
      *((u8 *) (((char *) arg0) + 6)) = 3U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((func_80033634_ovl_01() & 0xF) + 0xA);
    }
      if ((*((s8 *) (((char *) arg0) + 0x206))) == 0)
    {
      temp_a0_2 = *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) arg0) + 0x68)) -= temp_a0_2;
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) (temp_a0_2 - 8);
    }
      func_80173020_overlay_061(arg0, *((void **) (((char *) arg0) + 0x234)));
      temp_a0_3 = *((void **) (((char *) arg0) + 0x234));
      sp10 = 0x5DC;
      sp12 = 0;
      sp14 = 0;
      temp_s0 = temp_a0_3 + 0x468;
      func_8004279C_ovl_01(temp_a0_3 + 0x4A0, &sp10, &sp10);
      temp_v0_2 = sp12 + (*((u16 *) (((char *) temp_s0) + 0x52)));
      sp12 = temp_v0_2;
      temp_a0_4 = *((u16 *) (((char *) temp_s0) + 0x56));
      sp14 += temp_a0_4;
      if ((temp_v0_2 >= (-0x18F)) && ((*((s8 *) (((char *) arg0) + 0x206))) == 0))
    {
      *((u8 *) (((char *) arg0) + 6)) = 4U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((func_80033634_ovl_01(temp_a0_4) & 0xF) + 0x1E);
      *((s8 *) (((char *) arg0) + 0x206)) = 1;
      *((u16 *) (((char *) arg0) + 0x1F6)) = 0x40U;
    }
      if ((*((u16 *) (((char *) arg0) + 0x2BC))) & 2)
    {
      temp_a2 = D_800E133F;
      if (temp_a2 == 0)
      {
        D_800E10D4 = 0x02020000;
        D_800E133F = (u8) (temp_a2 | 0x80);
        *((void **) (D_800C7650 + 0x19CD0)) = arg0;
        func_80052C00_ovl_01(3, 0, temp_a2, D_800C7650 + 0x18000);
        func_80052C9C_ovl_01(0xA, 0xFA, 0);
      }
    }
      if (((s16) sp14) < (-0x6978))
    {
      *((u16 *) (((char *) arg0) + 0x66)) -= 0x20;
    }
      if (((s16) sp14) >= (-0x4D57))
    {
      *((u16 *) (((char *) arg0) + 0x66)) += 0x20;
      return;
    }
      break;

    case 3:
      if ((*((s8 *) (((char *) arg0) + 0x206))) == 0)
    {
      new_var[0] = *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) arg0) + 0x68)) -= new_var[0];
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) (new_var[0] - 8);
    }
      func_80173020_overlay_061(arg0, *((void **) (((char *) arg0) + 0x234)));
      temp_a0_6 = *((void **) (((char *) arg0) + 0x234));
      sp10 = 0x5DC;
      sp12 = 0;
      sp14 = 0;
      temp_s0_2 = temp_a0_6 + 0x468;
      func_8004279C_ovl_01(temp_a0_6 + 0x4A0, &sp10, &sp10);
      sp12 += *((u16 *) (((char *) temp_s0_2) + 0x52));
      new_var[1] = sp14 + (*((u16 *) (((char *) temp_s0_2) + 0x56)));
      sp14 = new_var[1];
      if (new_var[1] < (-0x6978))
    {
      *((u16 *) (((char *) arg0) + 0x66)) -= 0x20;
    }
      if (sp14 >= (-0x4D57))
    {
      *((u16 *) (((char *) arg0) + 0x66)) += 0x20;
    }
      if ((((s16) sp12) >= (-0x18F)) && ((*((s8 *) (((char *) arg0) + 0x206))) == 0))
    {
      *((s8 *) (((char *) arg0) + 0x206)) = 1;
      *((u16 *) (((char *) arg0) + 0x1F6)) = 0x40U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((func_80033634_ovl_01() & 0xF) + 0x14);
      *((u8 *) (((char *) arg0) + 6)) = 4U;
    }
      if ((*((u16 *) (((char *) arg0) + 0x2BC))) & 2)
    {
      temp_a2_2 = D_800E133F;
      if (temp_a2_2 == 0)
      {
        D_800E10D4 = 0x02020000;
        D_800E133F = (u8) (temp_a2_2 | 0x80);
        *((void **) (D_800C7650 + 0x19CD0)) = arg0;
        func_80052C00_ovl_01(3, 0, temp_a2_2, D_800C7650 + 0x18000);
        func_80052C9C_ovl_01(0xA, 0xFA, 0);
        return;
      }
    }
      break;

    case 4:
      temp_v0_4 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_4;
      if (((s16) temp_v0_4) == (-1))
    {
      *((u8 *) (((char *) arg0) + 6)) = 5U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x3F00;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 8U;
    }
      temp_a0_3 = *((void **) (((char *) arg0) + 0x234));
      *((u16 *) (((char *) temp_a0_3) + 0x5C)) += *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) temp_a0_3) + 0x1D4)) -= *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) temp_a0_3) + 0x34C)) -= *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) temp_a0_3) + 0x4C4)) -= ((s32) ((*((u16 *) (((char *) arg0) + 0x1F6))) << 0x10)) >> 0x11;
      *((u16 *) (((char *) arg0) + 0x1F6)) -= (*((s8 *) (((char *) arg0) + 0x206))) * 2;
      func_801730A8_overlay_061(arg0, *((void **) (((char *) arg0) + 0x234)));
      temp_a0_3 = *((void **) (((char *) arg0) + 0x234));
      if (((u32) ((((((((s16) (*((u16 *) (((char *) arg0) + 0x68)))) + ((s16) (*((u16 *) (((char *) temp_a0_3) + 0x5C))))) + ((s16) (*((u16 *) (((char *) temp_a0_3) + 0x1D4))))) + ((s16) (*((u16 *) (((char *) temp_a0_3) + 0x34C))))) + ((s16) (*((u16 *) (((char *) temp_a0_3) + 0x4C4))))) & 0xFFF) - 0x801)) < 0x7FFU)
    {
      *((u16 *) (((char *) temp_a0_3) + 0x5C)) -= *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) temp_a0_3) + 0x1D4)) += *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) temp_a0_3) + 0x34C)) += *((u16 *) (((char *) arg0) + 0x1F6));
      *((u16 *) (((char *) temp_a0_3) + 0x4C4)) += ((s32) ((*((u16 *) (((char *) arg0) + 0x1F6))) << 0x10)) >> 0x11;
      func_801730A8_overlay_061(arg0, *((void **) (((char *) arg0) + 0x234)));
      *((u16 *) (((char *) arg0) + 0x1F6)) = 0U;
      *((s8 *) (((char *) arg0) + 0x206)) = 0;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 5U;
      return;
    }
      break;

    case 5:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
      *((u16 *) (((char *) var_s0) + 0x124)) -= *((u16 *) (((char *) arg0) + 0x1F4));
      *((u16 *) (((char *) arg0) + 0x1F4)) += 8;
      *((u16 *) (((char *) arg0) + 0x68)) += 4;
      if (((s16) (*((u16 *) (((char *) var_s0) + 0x124)))) < 0)
    {
      *((u16 *) (((char *) var_s0) + 0x124)) = 0U;
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
    }
      break;

  }

}

