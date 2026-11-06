s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_8004229C_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80089D34_ovl_01();
extern s8 D_80174ADA_overlay_048;
extern s8 D_80174ADB_overlay_048;
void func_8017292C_overlay_048(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 temp_v0_3;
  u16 temp_v0_2;
  u8 temp_v0;
  u8 temp_v1;
  void *temp_a0;
  void *temp_s0;
  void *temp_s1;
  void *temp_v1_2;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  *((u8 *) (((char *) arg0) + 0x2BE)) |= 0x52;
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02001F00;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      temp_v1_2 = *((void **) (((char *) arg0) + 0x234));
      *((u16 *) (((char *) arg0) + 0x2BA)) |= 1;
      *((s32 *) (((char *) temp_v1_2) + 0xD38)) |= 0x40;
      *((u8 *) (((char *) arg0) + 0x25C)) &= 0xFD;
      *((u16 *) (((char *) arg0) + 0x2BA)) |= 0x200;

    case 1:
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0x23)
    {
      func_80052C9C_ovl_01(8, 0x96, 0);
    }
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0)
    {
      temp_a0 = *((void **) (((char *) arg0) + 0x234));
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      *((s32 *) (((char *) temp_a0) + 0xEB0)) |= 0x200;
      *((s32 *) (((char *) temp_a0) + 0x11A0)) |= 0x200;
      *((s32 *) (((char *) temp_a0) + 0x1028)) |= 0x200;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x09001F00;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0xB4U;
      *((u8 *) (((char *) arg0) + 0x207)) = 0U;
    }
      temp_v0_2 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      func_80032B8C_ovl_01(arg0, 0);
      temp_a0 = *((void **) (((char *) arg0) + 0x234));
      func_8004229C_ovl_01(temp_a0 + 0x1B0, temp_a0 + 0xD40, temp_a0 + 0xD70);
      break;

    case 2:
      temp_v0 = (*((u8 *) (((char *) arg0) + 0x207))) - 1;
      *((u8 *) (((char *) arg0) + 0x207)) = temp_v0;
      if (((s8) temp_v0) == (-1))
    {
      *((u8 *) (((char *) arg0) + 0x207)) = (u8) ((func_80033634_ovl_01(arg0) & 1) + 1);
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) (0x20 - (func_80033634_ovl_01() & 0x3F));
      *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) (0x10 - (func_80033634_ovl_01() & 0x1F));
      *((s16 *) (((char *) arg0) + 0x1E4)) = (s16) (0x10 - (func_80033634_ovl_01() & 0x1F));
    }
      *((u16 *) (((char *) arg0) + 0x66)) += *((u16 *) (((char *) arg0) + 0x1F6));
      *((s32 *) (((char *) arg0) + 0x28)) += *((s16 *) (((char *) arg0) + 0x1E0));
      *((s32 *) (((char *) arg0) + 0x30)) += *((s16 *) (((char *) arg0) + 0x1E4));
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
      temp_v0_2 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_2;
      if (((s16) temp_v0_2) == (-1))
    {
      *((u8 *) (((char *) arg0) + 6)) = 3U;
      *((s16 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0xE54)) = 0xFF;
    }
      if (!((*((u16 *) (((char *) arg0) + 0x1F4))) & 3))
    {
      temp_s1 = *((void **) (((char *) arg0) + 0x234));
      temp_s0 = temp_s1 + 0xD38;
      sp10 = func_80033634_ovl_01() & 0x7F;
      sp10 = (*((u16 *) (((char *) temp_s0) + 0x1E))) - (sp10 - 0x40);
      sp12 = (*((u16 *) (((char *) temp_s0) + 0x22))) - ((func_80033634_ovl_01() & 0x7F) - 0x40);
      sp14 = (*((u16 *) (((char *) temp_s0) + 0x26))) - ((func_80033634_ovl_01() & 0x7F) - 0x40);
      func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) | 0x91000, (s16) ((*((u16 *) (((char *) arg0) + 0x66))) - 0x400), temp_s1 + 0x1B0, &sp10);
    }
      break;

    case 3:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0B001F00;
      *((u8 *) (((char *) arg0) + 6)) = 4U;

    case 4:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = 5U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03001F00;
    }
      break;

    case 5:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
      *((s8 *) (((char *) arg0) + 0x2BC)) = 6;
      *((u8 *) (((char *) arg0) + 0x2BE)) &= 0x7F;
      *((u16 *) (((char *) arg0) + 0x2BA)) &= 0xFDFF;
    }
      break;

  }

  if (!((*((u8 *) (((char *) arg0) + 0x1E9))) & 0xF))
  {
    temp_v0_3 = func_80033634_ovl_01();
    D_80174ADA_overlay_048 = 3 - ((temp_v0_3 & 0xFF) % 6);
    D_80174ADB_overlay_048 = 0xF - ((func_80033634_ovl_01((void *) ((temp_v0_3 & 0xFF) / 6), &D_80174ADA_overlay_048) & 0xFF) % 30);
  }
}

