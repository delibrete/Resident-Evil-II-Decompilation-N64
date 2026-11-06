s32 func_8015E2EC_overlay_003(s32, s32, s32, s32);
s32 func_8015EEC4_overlay_003(u8);
extern s32 D_800C7650;
extern s32 D_80160B9C_overlay_003;
extern u8 D_80160BA2_overlay_003;
extern s32 D_80161478_overlay_003;
void func_8015CA78_ovl_03(void)
{
  s32 temp_v1_2;
  u32 temp_a0;
  u8 temp_v0;
  u8 temp_v1;
  int new_var;
  u8 temp_v1_3;
  switch (*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3)))
  {
    case 0:
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA)) = 0x80U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 8)) = 2U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 9)) = 0U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB)) = 0U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 7)) = 0U;
      D_80161478_overlay_003 = 0;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3)) = 1U;
      *((u8 *) (((char *) (&D_800C7650)) + 0x21962)) = (u8) ((*((u8 *) (((char *) (&D_800C7650)) + 0x21962))) & 0xF3);

    case 1:
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA))) - 0x10);
      temp_v1 = (*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 9))) + 1;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 9)) = temp_v1;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB))) + 0x10);
      if ((temp_v1 & 0xFF) == 8)
    {
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA)) = 0U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB)) = 0x80U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3))) + 1);
    }
      break;

    case 2:
      if ((*((u16 *) (((char *) (&D_800C7650)) + 0x1825E))) & 0x4000)
    {
      if ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6))) == 0)
      {
        *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6))) + 1);
        func_80077B0C_ovl_01(0x04040000, 0);
      }
    }
      if ((*((u16 *) (((char *) (&D_800C7650)) + 0x1825E))) & 0x1000)
    {
      if ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6))) != 0)
      {
        *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6))) - 1);
        func_80077B0C_ovl_01(0x04040000, 0, 0);
        goto block_17;
      }
      goto block_18;
    }
      block_17:
    if (D_80160BA2_overlay_003 == 0)
    {
      block_18:
      if ((*((u16 *) (((char *) (&D_800C7650)) + 0x1825E))) & 0x8000)
      {
        temp_v1_2 = (*((u8 *) (((char *) (&D_800C7650)) + 0x21962))) & 0xC;
        if (temp_v1_2 != 0)
        {
          *((u8 *) (((char *) (&D_800C7650)) + 0x21962)) = (u8) (((*((u8 *) (((char *) (&D_800C7650)) + 0x21962))) & 0xF3) | (temp_v1_2 - 4));
          func_80077B0C_ovl_01(0x04040000, 0, 0);
        }
      }

      if ((*((u16 *) (((char *) (&D_800C7650)) + 0x1825E))) & 0x2000)
      {
        temp_a0 = ((u32) ((*((u8 *) (((char *) (&D_800C7650)) + 0x21962))) & 0xC)) >> 2;
        if (temp_a0 < 2U)
        {
          *((u8 *) (((char *) (&D_800C7650)) + 0x21962)) = (u8) (((*((u8 *) (((char *) (&D_800C7650)) + 0x21962))) & 0xF3) | ((temp_a0 + 1) * 4));
          func_80077B0C_ovl_01(0x04040000, 0, 0);
        }
      }
    }

      temp_v0 = ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 8)))) + ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 7))));
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 7)) = temp_v0;
      new_var = 1;
      if (((u32) ((temp_v0 - new_var) & 0xFF)) >= 0x30U)
    {
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 8)) = (u8) (-((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 8))) & 0xFF));
    }
      if ((*((s32 *) (((char *) (&D_800C7650)) + 0x18268))) & 0x2000)
    {
      func_80077B0C_ovl_01(0x04050000, 0, 0);
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3)) = 3U;
    }
      if (((*((s32 *) (((char *) (&D_800C7650)) + 0x18268))) & 0x1000) || ((*((s32 *) (((char *) (&D_800C7650)) + 0x18258))) & 0x800))
    {
      if ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6))) == 1)
      {
        func_80077B0C_ovl_01(0x04050000, 0, 0);
        *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3)) = 3U;
        *((s8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xD)) = 0;
      }
      else
      {
        *((s8 *) (((char *) (&D_80160B9C_overlay_003)) + 5)) = 1;
        *((s8 *) (((char *) (&D_80160B9C_overlay_003)) + 2)) = 5;
        func_80077B0C_ovl_01(0x04060000, 0, 0);
      }
    }
      break;

    case 3:
      D_80161478_overlay_003 = 1;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 7)) = 0U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA))) + 0x10);
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB)) = (u8) ((*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB))) - 0x10);
      temp_v1_3 = (*((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 9))) - 1;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 9)) = temp_v1_3;
      if (!(temp_v1_3 & 0xFF))
    {
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xA)) = 0x80U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 0xB)) = 0U;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 6)) = 1U;
      *((s8 *) (((char *) (&D_80160B9C_overlay_003)) + 2)) = 0;
      *((u8 *) (((char *) (&D_80160B9C_overlay_003)) + 3)) = 0U;
    }
      break;

  }

  func_8015EEC4_overlay_003(D_80160BA2_overlay_003);
  func_8015E2EC_overlay_003(1, 1, 0x1B, D_80161478_overlay_003);
}

