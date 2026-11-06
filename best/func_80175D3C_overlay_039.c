s32 func_80033634_ovl_01(s32);
s32 func_800377B0_ovl_01(s32, s16, s32, s16 *);
s32 func_80040D24_ovl_01(s32 *, s32);
s32 func_80040E88_ovl_01(s16 *, s32 *);
s32 func_800416EC_ovl_01(s32 *, s32 *);
s32 func_80042010_ovl_01(s32, s32 *);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80174420_overlay_039(void *);
s32 func_801745CC_overlay_039(void *);
s32 func_80174798_overlay_039(void *);
void func_80175D3C_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
  void *new_var;
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 sp18;
  s32 sp38;
  s16 temp_v0_2;
  s32 temp_a0;
  s32 temp_s0;
  s32 temp_s2;
  s32 temp_s2_2;
  u16 temp_v0;
  u8 temp_v1;
  u8 temp_v1_2;
  sp10 = 0;
  sp12 = 0;
  sp14 = 0;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s16 *) (((char *) arg0) + 0x1F4)) = 0;
      *((s16 *) (((char *) arg0) + 0x1F6)) = 1;
      *((s8 *) (((char *) arg0) + 0x206)) = 0;
      if ((*((u16 *) (((char *) arg0) + 0x26C))) & 0x20)
    {
      *((s16 *) (((char *) arg0) + 0x1F6)) = -1;
    }
      sp12 = 0x12C;
      func_800377B0_ovl_01(0x17D0, *((s16 *) (((char *) arg0) + 0x66)), (*((s32 *) (((char *) arg0) + 0x234))) + 0xBF8, &sp10);
      temp_a0 = *((s32 *) (((char *) arg0) + 0x2C4));
      *((s8 *) (((char *) arg0) + 0x1EA)) = 0xF;
      if ((temp_a0 & 0xFF000000) == 0x01000000)
    {
      *((s32 *) (((char *) arg0) + 0x2C8)) = temp_a0;
    }
      if ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0)
    {
      temp_s0 = *((s32 *) (((char *) arg0) + 0x234));
      *((s16 *) (((char *) arg0) + 0x1F2)) = 0;
      *((s8 *) (((char *) arg0) + 0x206)) = 1;
      do
      {
        func_800377B0_ovl_01(0x31F40, (func_80033634_ovl_01(temp_a0) & 0xFF) * 0x10, temp_s0 + 0xBF8, &sp10);
      }
      while (0);
      *((s8 *) (((char *) arg0) + 0x1EA)) = 0xF;
    }
      if ((*((u8 *) (((char *) arg0) + 0x2D5))) == 0)
    {
      func_80077D48_ovl_01(0xC, arg0);
      *((u8 *) (((char *) arg0) + 0x2D5)) = 0x96U;
    }
      new_var = arg0;
      if ((((*((u8 *) (((char *) new_var) + 5))) == 0xA) && (!((*((u16 *) (((char *) new_var) + 0x1AA))) & 0x80))) && (((u8) (*((u8 *) (((char *) new_var) + 0x26E)))) < 3U))
    {
      func_80174420_overlay_039(new_var);
      *((u16 *) (((char *) new_var) + 0x2B6)) = (u16) ((*((u16 *) (((char *) new_var) + 0x2B6))) | 0x800);
    }
      *((s8 *) (((char *) new_var) + 0x207)) = 0x18;
      if ((*((u8 *) (((char *) new_var) + 5))) == 0x10)
    {
      if ((!((*((u16 *) (((char *) new_var) + 0x1AA))) & 0x80)) && (((u8) (*((u8 *) (((char *) new_var) + 0x2D6)))) >= 9U))
      {
        func_80174420_overlay_039(new_var);
        *((u16 *) (((char *) new_var) + 0x2B6)) = (u16) ((*((u16 *) (((char *) new_var) + 0x2B6))) | 0x800);
      }
      *((s8 *) (((char *) new_var) + 0x207)) = 2;
      *((u8 *) (((char *) new_var) + 0x2D6)) = (u8) ((*((u8 *) (((char *) new_var) + 0x2D6))) + 1);
    }
      temp_v1_2 = *((u8 *) (((char *) new_var) + 5));
      if ((temp_v1_2 == 0xF) || (temp_v1_2 == 0x12))
    {
      *((s8 *) (((char *) new_var) + 0x207)) = 2;
    }
      if (((*((u8 *) (((char *) new_var) + 5))) == 0xB) && (((u8) (*((u8 *) (((char *) new_var) + 0x26E)))) < 3U))
    {
      func_801745CC_overlay_039(new_var);
    }
      if ((*((u8 *) (((char *) new_var) + 5))) == 0xE)
    {
      func_80174798_overlay_039(new_var);
      case 1:
        ;

    }
      if (func_80089D34_ovl_01(new_var, arg1, arg2, 0x100) == 0)
    {
      temp_s2 = *((s32 *) (((char *) new_var) + 0x234));
      sp14 = (-(((*((s16 *) (((char *) new_var) + 0x1F4))) * (*((s8 *) (((char *) new_var) + 0x207)))) * 8)) * (*((s16 *) (((char *) new_var) + 0x1F6)));
      func_80040E88_ovl_01(&sp10, &sp18);
      func_80042010_ovl_01(temp_s2 + 8, &sp18);
      func_800416EC_ovl_01(&sp18, &sp38);
      func_80040D24_ovl_01(&sp38, (temp_s2 + 0x178) + 8);
      temp_v0 = (u16) (*((s16 *) (((char *) new_var) + 0x1F4)));
      *((s16 *) (((char *) new_var) + 0x1F4)) = (s16) (temp_v0 + 1);
      if (((s16) temp_v0) >= 3)
      {
        *((u8 *) (((char *) new_var) + 6)) = 2U;
        *((s16 *) (((char *) new_var) + 0x1F4)) = 0x10;
        return;
      }
    }
    else
    {
      block_42:
      *((s16 *) (((char *) new_var) + 0x136)) = 0x1F4;

      *((s16 *) (((char *) new_var) + 0x138)) = 0x1F4;
      *((s16 *) (((char *) new_var) + 0x12C)) = 0x1F4;
      *((s16 *) (((char *) new_var) + 0x12E)) = 0x1F4;
      *((s16 *) (((char *) new_var) + 0x134)) = -0x5DC;
      *((s16 *) (((char *) new_var) + 0x13A)) = 0x5DC;
      *((u16 *) (((char *) new_var) + 0x2B6)) = (u16) ((*((u16 *) (((char *) new_var) + 0x2B6))) & 0xFFED);
      *((s32 *) (((char *) new_var) + 0)) = (s32) ((*((s32 *) (((char *) new_var) + 0))) | 0x0C000000);
      *((s32 *) (((char *) new_var) + 4)) = (s32) (*((s32 *) (((char *) new_var) + 0x2C8)));
      *((u16 *) (((char *) new_var) + 0x1AA)) = (u16) ((*((u16 *) (((char *) new_var) + 0x1AA))) & 0xDFFF);
      *((u8 *) (((char *) new_var) + 6)) = (u8) ((*((u8 *) (((char *) new_var) + 6))) + 1);
      return;
    }
      break;

    case 2:
      if (func_80089D34_ovl_01(new_var, arg1, arg2, 0x100) == 0)
    {
      temp_s2_2 = *((s32 *) (((char *) new_var) + 0x234));
      sp14 = (-((*((s16 *) (((char *) new_var) + 0x1F4))) * (*((s8 *) (((char *) new_var) + 0x207))))) * (*((s16 *) (((char *) new_var) + 0x1F6)));
      func_80040E88_ovl_01(&sp10, &sp18);
      func_80042010_ovl_01(temp_s2_2 + 8, &sp18);
      func_800416EC_ovl_01(&sp18, &sp38);
      func_80040D24_ovl_01(&sp38, (temp_s2_2 + 0x178) + 8);
      temp_v0_2 = ((u16) (*((s16 *) (((char *) new_var) + 0x1F4)))) - 1;
      *((s16 *) (((char *) new_var) + 0x1F4)) = temp_v0_2;
      if (temp_v0_2 == (-1))
      {
        *((u8 *) (((char *) new_var) + 6)) = 3U;
        return;
      }
    }
    else
    {
      goto block_42;
    }
      break;

    case 3:
      if (func_80089D34_ovl_01(new_var, arg1, arg2, 0x100) != 0)
    {
      goto block_42;
    }
      break;

  }

}

