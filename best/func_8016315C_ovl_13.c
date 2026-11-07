extern short D_800E12C2;
s32 func_80032C08_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80165BE8_overlay_013();
extern char D_800C7650[];
void func_8016315C_ovl_13(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_a1;
  s32 temp_v1_2;
  u8 temp_v0;
  u8 temp_v0_2;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03000700;
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x32;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0x78;
      *((s8 *) (((char *) arg0) + 0x2B9)) = 0;
      *((u8 *) (((char *) arg0) + 0x2B5)) = 0U;
      *((u8 *) (((char *) arg0) + 6)) = 1U;

    case 1:
      temp_v0 = (*((u8 *) (((char *) arg0) + 0x2B5))) - 1;
      *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v0;
      if ((temp_v0 & 0xFF) == 0xFF)
    {
      if (func_80033634_ovl_01() & 1)
      {
        func_80077D48_ovl_01(1, arg0);
      }
      *((u8 *) (((char *) arg0) + 0x2B5)) = 0xFU;
    }
      func_80032C08_ovl_01(arg0, 0, 0, *((u16 *) (((char *) arg0) + 0x2A)), *((u16 *) (((char *) arg0) + 0x2E)), *((u16 *) (((char *) arg0) + 0x32)));
      if (((*((s32 *) (((char *) arg0) + 0x2C))) - ((*((s16 *) (((char *) arg0) + 0x25E))) - 0xFA)) >= (-0x12B))
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
    }
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0A000700;
      if (func_80033634_ovl_01() & 1)
    {
      func_80077D48_ovl_01(1, arg0);
    }
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x32;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0xF;
      *((u8 *) (((char *) arg0) + 0x2B5)) = 0xFU;
      *((u8 *) (((char *) arg0) + 0x2B4)) = 3U;
      *((u8 *) (((char *) arg0) + 6)) = 5U;

    case 5:
      block_17:
    temp_v0_2 = (*((u8 *) (((char *) arg0) + 0x2B5))) - 1;

      *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v0_2;
      if (!(temp_v0_2 & 0xFF))
    {
      *((u8 *) (((char *) arg0) + 6)) = (u8) (*((u8 *) (((char *) arg0) + 0x2B4)));
    }
      func_80032C08_ovl_01(arg0, 0, 0, *((u16 *) (((char *) arg0) + 0x2A)), *((u16 *) (((char *) arg0) + 0x2E)), *((u16 *) (((char *) arg0) + 0x32)));
      temp_v1_2 = (*((s16 *) (((char *) arg0) + 0x25E))) - 0xFA;
      if (temp_v1_2 < (*((s32 *) (((char *) arg0) + 0x2C))))
    {
      *((s32 *) (((char *) arg0) + 0x2C)) = temp_v1_2;
    }
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0)
    {
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0xA;
      *((u8 *) (((char *) arg0) + 6)) = 6U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000700;
      return;
    }

    default:
      return;

    case 3:
      if (func_80033634_ovl_01() & 1)
    {
      func_80077D48_ovl_01(1, arg0);
    }
      *((u8 *) (((char *) arg0) + 0x2B5)) = 5U;
      *((u8 *) (((char *) arg0) + 0x2B4)) = 4U;
      *((u8 *) (((char *) arg0) + 6)) = 5U;
      goto block_17;

    case 4:
      *((u8 *) (((char *) arg0) + 6)) = 5U;
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0xA;
      *((u8 *) (((char *) arg0) + 0x2B5)) = 0xFFU;
 do { *((s16 *) (((char *) arg0) + 0x1E2)) = 0; *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s16 *) (((char *) arg0) + 0x25E))) - 0xFA); goto block_17; } while (0);

    case 6:
      func_80032DEC_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x60);
      func_80032C08_ovl_01(arg0, 0, 0);
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s16 *) (((char *) arg0) + 0x25E))) - 0xFA);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0)
    {
      if ((D_800E12C2 < 0) && ((*((s8 *) (((char *) arg0) + 0x2BD))) <= 0))
      {
        var_a1 = 0;
      }
      else
      {
        *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 2);
        var_a1 = 2;
      }
      func_80165BE8_overlay_013(arg0, var_a1);
    }
      break;

  }

}
