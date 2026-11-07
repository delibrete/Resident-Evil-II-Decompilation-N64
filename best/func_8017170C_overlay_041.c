s32 func_80033634_ovl_01();
s32 func_80035AAC_ovl_01_108();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172768_overlay_041();
s32 func_80172C10_overlay_041();
s32 func_80172CE8_overlay_041();
s32 func_80172DA4_overlay_041();
void func_8017170C_overlay_041(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_a2;
  s16 temp_a0;
  s16 temp_a1;
  s32 temp_v1_2;
  u8 temp_v0;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      func_80035AAC_ovl_01_108(arg0);
      func_80077D48_ovl_01(3, arg0);
      func_80172DA4_overlay_041(arg0, 0x64);
      *((s16 *) (((char *) arg0) + 0x1F2)) = -1;
      func_80172C10_overlay_041(arg0);
      do
    {
      func_80172CE8_overlay_041(arg0, (func_80033634_ovl_01() & 3) + 3);
    }
    while (0);
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x09000700;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x1E0)) = (u16) (((s32) ((*((u16 *) (((char *) arg0) + 0x1E0))) << 0x10)) >> 0x11);
      *((u16 *) (((char *) arg0) + 0x1E4)) = (u16) (((s32) ((*((u16 *) (((char *) arg0) + 0x1E4))) << 0x10)) >> 0x11);

    case 1:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
    }

    case 2:
      temp_a1 = *((s16 *) (((char *) arg0) + 0x1E2));
      temp_a0 = (s16) (*((u16 *) (((char *) arg0) + 0x1E4)));
      *((s32 *) (((char *) arg0) + 0x2C)) += temp_a1;
      *((s32 *) (((char *) arg0) + 0x28)) += (s16) (*((u16 *) (((char *) arg0) + 0x1E0)));
      *((s16 *) (((char *) arg0) + 0x1E2)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1E2)))) + 0x14);
      *((s32 *) (((char *) arg0) + 0x30)) += temp_a0;
      temp_v1_2 = (*((s16 *) (((char *) arg0) + 0x25E))) - 0xFA;
      if (temp_v1_2 < (*((s32 *) (((char *) arg0) + 0x2C))))
    {
      *((u8 *) (((char *) arg0) + 0x2B5)) = 8U;
      *((s32 *) (((char *) arg0) + 0x2C)) = temp_v1_2;
      *((s16 *) (((char *) arg0) + 0x68)) = 0;
      *((u8 *) (((char *) arg0) + 6)) = 3U;
    }
      if ((*((s32 *) (((char *) arg0) + 0x1AC))) & 1)
    {
      if ((*((s32 *) (((char *) arg0) + 0))) & 0x4000)
      {
        *((s16 *) (((char *) arg0) + 0x64)) = (s16) (((func_80033634_ovl_01(temp_a0, temp_a1) & 1) << 0xB) + 0x400);
        *((s16 *) (((char *) arg0) + 0x66)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
        *((s16 *) (((char *) arg0) + 0x68)) = 0;
      }
      else
      {
        *((s16 *) (((char *) arg0) + 0x68)) = (s16) (((func_80033634_ovl_01(temp_a0, temp_a1) & 1) << 0xB) + 0x400);
        *((s16 *) (((char *) arg0) + 0x64)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
        *((s16 *) (((char *) arg0) + 0x66)) = 0;
      }
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x04000000;
      *((s8 *) (((char *) arg0) + 0x1E9)) = 3;
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      var_a2 = 2;
      block_16:
      func_80172768_overlay_041(arg0, 7, var_a2);

    }

    default:
      return;

    case 3:
      *((s32 *) (((char *) arg0) + 0x28)) += (s16) (*((u16 *) (((char *) arg0) + 0x1E0)));
      *((s32 *) (((char *) arg0) + 0x30)) += (s16) (*((u16 *) (((char *) arg0) + 0x1E4)));
      *((u16 *) (((char *) arg0) + 0x1E0)) = (u16) (((s32) ((*((u16 *) (((char *) arg0) + 0x1E0))) << 0x10)) >> 0x11);
 do { temp_v1 = (*((u8 *) (((char *) arg0) + 0x2B5))) - 1; *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v1; *((u16 *) (((char *) arg0) + 0x1E4)) = (u16) (((s32) ((*((u16 *) (((char *) arg0) + 0x1E4))) << 0x10)) >> 0x11); if ((temp_v1 & 0xFF) == 0xFF) { *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0B000700; *((u8 *) (((char *) arg0) + 0x2B5)) = 0xBU; *((u8 *) (((char *) arg0) + 6)) = 4U; return; } } while (0);
      break;

    case 4:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      temp_v0 = (*((u8 *) (((char *) arg0) + 0x2B5))) - 1;
      *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v0;
      if ((temp_v0 & 0xFF) == 0xFF)
    {
      var_a2 = 0;
      goto block_16;
    }
      break;

  }

}
