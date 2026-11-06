s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_80033634_ovl_01();
s32 func_80040BE4_ovl_01(s32, u8 *);
s32 func_8004DCE8_ovl_01(void *, s32, s16, s16);
s32 func_80052C9C_ovl_01(s32, s32, s32);
s32 func_80069F4C_ovl_01(s32 *, s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_8016B948_overlay_031(void *, s16, s16 *);
extern s32 D_800C7650;
extern s32 D_801126AC;
extern s32 D_8016C258_overlay_031;
extern u8 D_8016C298_overlay_031;
extern s32 func_801126B0_ovl_01;
void func_80165AB4_ovl_31(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 sp18;
  s32 sp1C;
  s32 sp20;
  s32 var_a0;
  s16 temp_a1;
  s16 temp_a2_2;
  s16 temp_a3;
  s16 var_s1;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_s0;
  s32 __repair_result_var_s0;
  char *new_var;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v1;
  s8 temp_v1_3;
  u16 temp_a2;
  u16 temp_v0_4;
  u16 temp_v0_5;
  u32 temp_hi;
  u8 temp_v1;
  u8 temp_v1_2;
  void *temp_v0_3;
  void *temp_v1_4;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  new_var = ((char *) arg0) + 0x1E2;
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x13000F00;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2C0)) = 0U;
      *((s8 *) (((char *) arg0) + 0x207)) = 0;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) | 4);
      func_80052C9C_ovl_01(8, 0x50, 0xF);

    case 1:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0x12)
    {
      func_80077D48_ovl_01(2, arg0);
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      sp10 = 0x226;
      sp12 = -0x190;
      sp14 = 0;
      temp_v1 = *((u8 *) (((char *) arg0) + 0x2C2));
      var_s1 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) (&D_800C7650)) + 0x19AAA)), *((s16 *) (((char *) (&D_800C7650)) + 0x19AB2)));
      switch (temp_v1)
      {
        case 0:
          break;

        case 1:
          __repair_result_var_s0 = func_80033634_ovl_01();
          var_v0 = func_80033634_ovl_01();
          var_v1 = var_s1 + 0x200;
          block_9:
        var_s1 = var_v1 - (((((s32) (__repair_result_var_s0 & 0xFF)) >> (var_v0 & 3)) & 1) << 0xA);

          break;

        case 2:
          temp_s0 = func_80033634_ovl_01();
          var_s1 = (var_s1 + 0x400) - (((((s32) (temp_s0 & 0xFF)) >> (func_80033634_ovl_01() & 3)) & 1) << 0xB);
          break;

        case 3:
          var_s0 = func_80033634_ovl_01();
          var_v0 = func_80033634_ovl_01();
          var_v1 = var_s1 + 0xA00;
          goto block_9;

        case 4:
          var_s1 += 0x800;
          break;

        case 5:
          temp_v1_3 = (D_8016C298_overlay_031 + (((func_80033634_ovl_01() & 0xFF) % 3) + 3)) & 7;
          *((s8 *) (((char *) arg0) + 0x207)) = temp_v1_3;
          if (((u8) D_8016C298_overlay_031) >= 8U)
        {
          *((s8 *) (((char *) arg0) + 0x207)) = (s8) (temp_v1_3 + 8);
        }
          temp_v0 = (*((s32 *) (((char *) arg0) + 0x28))) - (*((s16 *) (((char *) (((*((s8 *) (((char *) arg0) + 0x207))) * 4) + (&D_8016C258_overlay_031))) + 0)));
          temp_v0_2 = (*((s32 *) (((char *) arg0) + 0x30))) - (*((s16 *) (((char *) (((*((s8 *) (((char *) arg0) + 0x207))) * 4) + (&D_8016C258_overlay_031))) + 2)));
          temp_hi = MULTU_HI(func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2), &D_8016C298_overlay_031), 0xCCCCCCCD);
          sp12 = -0x258;
          sp10 = (s16) (temp_hi >> 2);
          temp_v0_3 = ((*((s8 *) (((char *) arg0) + 0x207))) * 4) + (&D_8016C258_overlay_031);
          var_s1 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) temp_v0_3) + 0)), *((s16 *) (((char *) temp_v0_3) + 2)));
          break;

      }

      do { func_8016B948_overlay_031(arg0, var_s1, &sp10); } while (0);
      *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) (-((s16) ((*((u16 *) (((char *) arg0) + 0x1E0))) / 5)));
      *((s16 *) (((char *) arg0) + 0x1F6)) = (s16) (-((s16) ((*((u16 *) (((char *) arg0) + 0x1E4))) / 5)));
      func_80032DEC_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x80);
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) | 0x80);
      return;
    }

    default:
      return;

    case 2:
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100));

    if (temp_a3)
    {
      temp_v0_3 = ((char *) arg0) + 0x2C0;
    }
    else
    {
      temp_v0_3 = ((char *) arg0) + 0x2C0;
    }
    case 3:
      func_80032DEC_ovl_01(arg0, (s16) (*((s32 *) (((char *) (&D_800C7650)) + 0x19AA8))), (s16) (*((s32 *) (((char *) (&D_800C7650)) + 0x19AB0))), 0x100);
      temp_a3 = (s16) (*((u16 *) (((char *) arg0) + 0x1E4)));
      temp_a2 = *((u16 *) temp_v0_3);
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + (*((s16 *) new_var)));
      temp_a2_2 = (s16) (*((u16 *) (((char *) arg0) + 0x1E0)));
      *((u16 *) temp_v0_3) = (u16) (temp_a2 + 2);
      *((s16 *) new_var) = (s16) ((((u16) (*((s16 *) new_var))) + 0x8C) - temp_a2);
      *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + temp_a2_2);
      *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + temp_a3);
      func_8004DCE8_ovl_01(arg0, 0x400, temp_a2_2, temp_a3);
      temp_a1 = *((s16 *) (((char *) arg0) + 0x25E));
      *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) - ((s16) (*((u16 *) (((char *) arg0) + 0x1E0)))));
      *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) - ((s16) (*((u16 *) (((char *) arg0) + 0x1E4)))));
      if (temp_a1 < (*((s32 *) (((char *) arg0) + 0x2C))))
    {
      *((u8 *) (((char *) arg0) + 6)) = 4U;
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) temp_a1;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x14060800;
      *((s16 *) new_var) = 0;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFF7B);
      var_a0 = 4;
      if (temp_a1 == 0)
      {
        var_a0 = 3;
      }
      func_80077D48_ovl_01(var_a0, arg0);
      func_80052C9C_ovl_01(8, 0x64, 0);
    }
      sp18 = *((s32 *) (((char *) arg0) + 0x120));
      sp1C = *((s32 *) (((char *) arg0) + 0x124));
      sp20 = *((s32 *) (((char *) arg0) + 0x128));
      var_v0_2 = func_80069F4C_ovl_01(&sp18, 0x578, 0x400, 0) << 0x10;
      if (D_801126AC != 0)
    {
      var_v0_2 = (*((u16 *) (((char *) (&func_801126B0_ovl_01)) + 2))) << 0x10;
    }
      if (var_v0_2 == 0)
    {
      *((s8 *) (((char *) arg0) + 0x1A2)) = 0;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFFDF);
    }
      if ((*((s32 *) (((char *) arg0) + 0x2C))) >= (-0xE0F))
    {
      *((s8 *) (((char *) arg0) + 0x1A2)) = 0;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFFDF);
    }
      block_33:
    *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + ((s16) (*((u16 *) (((char *) arg0) + 0x1E0)))));

      *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + ((s16) (*((u16 *) (((char *) arg0) + 0x1E4)))));
      break;

    case 4:
      temp_v0_4 = (*((u16 *) (((char *) arg0) + 0x1E0))) + ((u16) (*((s16 *) (((char *) arg0) + 0x1F4))));
      *((u16 *) (((char *) arg0) + 0x1E0)) = temp_v0_4;
      if ((temp_v0_4 & 0x8000) == ((*((s16 *) (((char *) arg0) + 0x1F4))) & 0x8000))
    {
      *((u16 *) (((char *) arg0) + 0x1E0)) = 0U;
    }
      temp_v0_5 = (*((u16 *) (((char *) arg0) + 0x1E4))) + ((u16) (*((s16 *) (((char *) arg0) + 0x1F6))));
      *((u16 *) (((char *) arg0) + 0x1E4)) = temp_v0_5;
      if ((temp_v0_5 & 0x8000) == ((*((s16 *) (((char *) arg0) + 0x1F6))) & 0x8000))
    {
      *((u16 *) (((char *) arg0) + 0x1E4)) = 0U;
    }
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01030000;
      *((s8 *) (((char *) arg0) + 0x2CF)) = 0x3C;
      *((s8 *) (((char *) arg0) + 0x2BA)) = 0;
      if ((*((u8 *) (((char *) arg0) + 0x2C2))) == 5)
      {
        *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
      }
    }
      goto block_33;

  }

}

