s32 func_800662B8_ovl_01(void *, void *);
extern s32 D_80175870_overlay_042;
s32 func_8016EE8C_overlay_042(void *arg0)
{
  u8 temp_a0;
  u8 temp_v0_2;
  u8 temp_v0_3;
  u8 temp_v1;
  u8 var_v0;
  void *temp_s0;
  void *temp_v0;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  temp_v0 = *((void **) (((char *) arg0) + 0x234));
  temp_v1 = *((u8 *) (((char *) arg0) + 0x2B6));
  temp_s0 = temp_v0 + 0x2050;
  switch (temp_v1)
  {
    case 1:
      *((u8 *) (((char *) arg0) + 0x2DC)) = 0U;
      *((u8 *) (((char *) arg0) + 0x2B6)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2B6))) + 1);

    case 2:
      temp_v0_2 = (*((u8 *) (((char *) arg0) + 0x2DC))) + 1;
      *((u8 *) (((char *) arg0) + 0x2DC)) = temp_v0_2;
      if ((temp_v0_2 & 0xFF) == 0x11)
    {
      var_v0 = (*((u8 *) (((char *) arg0) + 0x2B6))) + 1;
      block_9:
      *((u8 *) (((char *) arg0) + 0x2B6)) = var_v0;

    }
      break;
      break;

    case 3:
      temp_v1_2 = *((void **) (((char *) temp_s0) + 0x120));
      *((s32 *) (((char *) temp_v0) + 0x2050)) = 1;
      *((u16 *) (((char *) temp_v1_2) + 0xC)) = (u16) ((*((u16 *) (((char *) temp_v1_2) + 0xC))) + 0x800);
      func_800662B8_ovl_01(arg0, temp_s0);
      if (((s16) (*((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0xC)))) >= 0x1000)
    {
      var_v0 = (*((u8 *) (((char *) arg0) + 0x2B6))) + 1;
      goto block_9;
    }
      break;

    case 4:
      temp_v1_3 = *((void **) (((char *) temp_s0) + 0x120));
      *((u16 *) (((char *) temp_v1_3) + 0x10)) = (u16) ((*((u16 *) (((char *) temp_v1_3) + 0x10))) + 0x400);
      func_800662B8_ovl_01(arg0, temp_s0);
      if (((s16) (*((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x10)))) >= 0x1000)
    {
      *((u8 *) (((char *) arg0) + 0x2DC)) = 4U;
      var_v0 = (*((u8 *) (((char *) arg0) + 0x2B6))) + 1;
      goto block_9;
    }

    case 5:
      temp_v1_4 = (char *)(((*((u8 *) (((char *) arg0) + 0x2DC))) * 4)); temp_v1_4 += (s32)((*((void **) (((char *) temp_s0) + 0x120))));
      *((u16 *) (((char *) temp_v1_4) + 4)) = (u16) ((*((u16 *) (((char *) temp_v1_4) + 4))) + 0x1000);
      func_800662B8_ovl_01(arg0, temp_s0);
      temp_a0 = *((u8 *) (((char *) arg0) + 0x2DC));
      temp_v0_3 = temp_a0 + 1;
      if ((*((s16 *) (((char *) ((temp_a0 * 4) + (*((void **) (((char *) temp_s0) + 0x120))))) + 4))) >= 0x1000)
    {
      *((u8 *) (((char *) arg0) + 0x2DC)) = temp_v0_3;
      if ((temp_v0_3 & 0xFF) == 0xB)
      {
        *((u8 *) (((char *) arg0) + 0x2B6)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2B6))) + 1);
        *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0xC)) = 0U;
        *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x10)) = 0U;
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x14)) = 0;
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x18)) = 0;
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x1C)) = 0;
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x20)) = 0;
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x24)) = 0;
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x28)) = 0;
      }
    }
      break;

    case 6:
      temp_v1_5 = *((void **) (((char *) temp_s0) + 0x120));
      *((u16 *) (((char *) temp_v1_5) + 0x2C)) = (u16) ((*((u16 *) (((char *) temp_v1_5) + 0x2C))) - 0x1000);
      func_800662B8_ovl_01(arg0, temp_s0);
      if (((s16) (*((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x120)))) + 0x2C)))) <= 0)
    {
      *((u8 *) (((char *) arg0) + 0x2B6)) = 0U;
      D_80175870_overlay_042 = 0;
      *((s32 *) (((char *) temp_v0) + 0x2050)) = 0;
    }
      break;

  }

  return 0;
}

