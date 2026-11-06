s32 func_80165BD8_overlay_013(u8 *, s32, s32);
s32 func_80166080_overlay_013(u8 *);
s32 func_80166158_overlay_013(u8 *, s32);
s32 func_80166214_overlay_013(u8 *, s32);
void func_80164B7C_ovl_13(u8 *p, s32 a1, s32 a2)
{
  char *new_var;
  s32 var_a2;
  s32 temp_v1_2;
  u8 temp_v0;
  u8 temp_v1;
  char *new_var2;
  new_var = (char *) p;
  temp_v1 = *((u8 *) (((char *) p) + 6));
  switch (temp_v1)
  {
    case 0:
      func_80035AAC_ovl_01_108(p);
      func_80077D48_ovl_01(3, p);
      func_80166214_overlay_013(p, 0x64);
      *((s16 *) (((char *) p) + 0x1F2)) = -1;
      new_var2 = ((char *) p) + 0x1E0;
      func_80166080_overlay_013(p);
      do { func_80166158_overlay_013(p, (func_80033634_ovl_01() & 3) + 3); } while (0);
      *((s32 *) (((char *) p) + 0x1E8)) = 0x09000700;
      *((u8 *) (((char *) p) + 6)) = 1U;
      *((u16 *) new_var2) = (u16) (((s32) ((*((u16 *) new_var2)) << 0x10)) >> 0x11);
      *((u16 *) (((char *) p) + 0x1E4)) = (u16) (((s32) ((*((u16 *) (((char *) p) + 0x1E4))) << 0x10)) >> 0x11);

    case 1:
      if (func_80089D34_ovl_01(p, a1, a2, 0x200) != 0)
    {
      *((u8 *) (((char *) p) + 6)) = 2U;
    }

    case 2:
      *((s32 *) (new_var + 0x2C)) = (s32) ((*((s32 *) (((char *) p) + 0x2C))) + (*((s16 *) (((char *) p) + 0x1E2))));
      *((s32 *) (((char *) p) + 0x28)) = (s32) ((*((s32 *) (((char *) p) + 0x28))) + ((s16) (*((u16 *) (((char *) p) + 0x1E0)))));
      *((s16 *) (((char *) p) + 0x1E2)) = (s16) (((u16) (*((s16 *) (((char *) p) + 0x1E2)))) + 0x14);
      *((s32 *) (((char *) p) + 0x30)) = (s32) ((*((s32 *) (((char *) p) + 0x30))) + ((s16) (*((u16 *) (((char *) p) + 0x1E4)))));
      temp_v1_2 = (*((s16 *) (((char *) p) + 0x25E))) - 0xFA;
      if (temp_v1_2 < (*((s32 *) (((char *) p) + 0x2C))))
    {
      *((u8 *) (((char *) p) + 0x2B5)) = 8U;
      *((s32 *) (((char *) p) + 0x2C)) = temp_v1_2;
      *((s16 *) (((char *) p) + 0x68)) = 0;
      *((u8 *) (((char *) p) + 6)) = 3U;
    }
      if ((*((s32 *) (((char *) p) + 0x1AC))) & 1)
    {
      if ((*((s32 *) (((char *) p) + 0))) & 0x4000)
      {
        *((s16 *) (((char *) p) + 0x64)) = (s16) (((func_80033634_ovl_01() & 1) << 0xB) + 0x400);
        *((s16 *) (((char *) p) + 0x66)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
        *((s16 *) (((char *) p) + 0x68)) = 0;
      }
      else
      {
        *((s16 *) (((char *) p) + 0x68)) = (s16) (((func_80033634_ovl_01() & 1) << 0xB) + 0x400);
        *((s16 *) (((char *) p) + 0x64)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
        *((s16 *) (((char *) p) + 0x66)) = 0;
      }
      *((s32 *) (((char *) p) + 0x1E8)) = 0x04000000;
      *((s8 *) (((char *) p) + 0x1E9)) = 3;
      func_80089D34_ovl_01(p, a1, a2, 0x200);
      var_a2 = 2;
      block_16:
      func_80165BD8_overlay_013(p, 7, var_a2);

    }

    default:
      return;

    case 3:
      *((s32 *) (((char *) p) + 0x28)) = (s32) ((*((s32 *) (((char *) p) + 0x28))) + ((s16) (*((u16 *) (((char *) p) + 0x1E0)))));
      *((s32 *) (((char *) p) + 0x30)) = (s32) ((*((s32 *) (((char *) p) + 0x30))) + ((s16) (*((u16 *) (((char *) p) + 0x1E4)))));
      *((u16 *) new_var2) = (u16) (((s32) ((*((u16 *) (((char *) p) + 0x1E0))) << 0x10)) >> 0x11);
      temp_v1 = *((u8 *) (((char *) p) + 0x2B5));
      temp_v1 = temp_v1 - 1;
      *((u8 *) (((char *) p) + 0x2B5)) = temp_v1;
      *((u16 *) (((char *) p) + 0x1E4)) = (u16) (((s32) ((*((u16 *) (((char *) p) + 0x1E4))) << 0x10)) >> 0x11);
      if ((temp_v1 & 0xFF) == 0xFF)
    {
      *((s32 *) (((char *) p) + 0x1E8)) = 0x0B000700;
      *((u8 *) (((char *) p) + 0x2B5)) = 0xBU;
      *((u8 *) (((char *) p) + 6)) = 4U;
      return;
    }
      break;

    case 4:
      func_80089D34_ovl_01(p, a1, a2, 0x200);
      temp_v0 = (*((u8 *) (((char *) p) + 0x2B5))) - 1;
      *((u8 *) (((char *) p) + 0x2B5)) = temp_v0;
      if ((temp_v0 & 0xFF) == 0xFF)
    {
      var_a2 = 0;
      goto block_16;
    }
      break;

  }

}

