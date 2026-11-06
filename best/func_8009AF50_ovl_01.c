s32 func_800824A4_overlay_001(s32 *, void *, s32, s32);
s32 func_80083800_overlay_001(s16, s16 *, s16 *);
extern s32 D_800C7650_overlay_001;
extern s32 D_80131720_overlay_001;
extern s32 D_80131728_overlay_001;
void func_8009AF50_ovl_01(void)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 var_v0;
  u32 temp_v1_4;
  u32 temp_v1_5;
  u32 var_v1;
  int temp_v1;
  u8 temp_v1_2;
  u8 temp_v1_3;
  void *temp_s0;
  void *temp_s1;
  temp_s1 = (char *)((*((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650_overlay_001)) + 0x1827C)))) + 0x2C)))); temp_s1 += (s32)(((*((s16 *) (((char *) (&D_800C7650_overlay_001)) + 0x215FC))) * 0x28));
  func_800824A4_overlay_001(&D_80131728_overlay_001, temp_s1, 0x28, 0x18000);
  temp_s0 = (&D_80131728_overlay_001) - 8;
  *((s8 *) (((char *) temp_s1) + 3)) = 0;
  *((s16 *) (((char *) temp_s1) + 0x26)) = 1;
  if (!((*((u8 *) (((char *) temp_s0) + 1))) & 0x10))
  {
    sp10 = 0x4B0;
    sp12 = 0;
    sp14 = 0;
    do { func_80083800_overlay_001(*((s16 *) (((char *) (&D_800C7650_overlay_001)) + 0x19AE6)), &sp10, &sp10); } while (0);
    *((s32 *) (((char *) temp_s0) + 0x34)) = -0x960;
    *((u8 *) (((char *) temp_s0) + 3)) = 0xFFU;
    *((u8 *) (((char *) temp_s0) + 4)) = 0xE6U;
    *((u8 *) (((char *) temp_s0) + 5)) = 0xA0U;
    *((s32 *) (((char *) temp_s0) + 0x30)) = (s32) ((*((s32 *) (((char *) (&D_800C7650_overlay_001)) + 0x19AA8))) + sp10);
    *((s32 *) (((char *) temp_s0) + 0x38)) = (s32) ((*((s32 *) (((char *) (&D_800C7650_overlay_001)) + 0x19AB0))) + sp14);
  }
  temp_v1 = *((u8 *) (((char *) temp_s0) + 2));
  switch (temp_v1)
  {
    case 1:
      temp_v1_4 = ((u8) (*((u8 *) (((char *) temp_s0) + 3)))) >> 1;
      if (((u8) (*((u8 *) (((char *) temp_s1) + 0xA)))) < temp_v1_4)
    {
      *((u8 *) (((char *) temp_s1) + 0xA)) = (u8) temp_v1_4;
    }
      temp_v1_5 = ((u8) (*((u8 *) (((char *) temp_s0) + 4)))) >> 1;
      if (((u8) (*((u8 *) (((char *) temp_s1) + 0xB)))) < temp_v1_5)
    {
      if (temp_s1 || temp_s0)
      {
        *((u8 *) (((char *) temp_s1) + 0xB)) = (u8) temp_v1_5;
      }
      else
      {
        *((u8 *) (((char *) temp_s1) + 0xB)) = (u8) temp_v1_5;
      }
    }
      var_v1 = ((u8) (*((u8 *) (((char *) temp_s0) + 5)))) >> 1;
      var_v0 = ((u8) (*((u8 *) (((char *) temp_s1) + 0xC)))) < var_v1;
      goto block_15;

    case 0:
      temp_v1_2 = *((u8 *) (((char *) temp_s0) + 3));
      if (((u8) (*((u8 *) (((char *) temp_s1) + 0xA)))) < temp_v1_2)
    {
      *((u8 *) (((char *) temp_s1) + 0xA)) = temp_v1_2;
    }
      temp_v1_3 = *((u8 *) (((char *) temp_s0) + 4));
      if (((u8) (*((u8 *) (((char *) temp_s1) + 0xB)))) < temp_v1_3)
    {
      *((u8 *) (((char *) temp_s1) + 0xB)) = temp_v1_3;
    }
      var_v1 = (u32) (*((u8 *) (((char *) temp_s0) + 5)));
      var_v0 = ((u8) (*((u8 *) (((char *) temp_s1) + 0xC)))) < var_v1;
      block_15:
    if (var_v0 != 0)
    {
      *((u8 *) (((char *) temp_s1) + 0xC)) = (u8) var_v1;
    }

      *((u8 *) (((char *) temp_s0) + 2)) = (u8) ((*((u8 *) (((char *) temp_s0) + 2))) + 1);
      break;

  }

  *((u16 *) (((char *) temp_s1) + 0x1C)) = (u16) (*((u16 *) (((char *) (&D_80131720_overlay_001)) + 0x32)));
  *((u16 *) (((char *) temp_s1) + 0x1E)) = (u16) (*((u16 *) (((char *) (&D_80131720_overlay_001)) + 0x36)));
  *((s16 *) (((char *) temp_s1) + 0x26)) = 0x1770;
  *((u16 *) (((char *) temp_s1) + 0x20)) = (u16) (*((u16 *) (((char *) (&D_80131720_overlay_001)) + 0x3A)));
}

