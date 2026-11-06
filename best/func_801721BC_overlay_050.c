extern unsigned char D_800DFB88;
s32 func_80032DEC_ovl_01();
s32 func_80033174_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8016F5D8_overlay_050();
extern char D_800C7650[];
void func_801721BC_overlay_050(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_s2;
  u16 temp_v0;
  u8 temp_a0;
  u8 temp_v1;
  volatile unsigned long var_v0;
  void *temp_s1;
  temp_s1 = *((void **) (((char *) arg0) + 0x250));
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  temp_s2 = func_80033174_ovl_01(arg0, temp_s1) & 0xFF;
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((((*((u8 *) (((char *) arg0) + 5))) & 1) + 3) << 0x18) + 0x300);
      *((s32 *) (((char *) arg0) + 0)) |= 0xA;
      func_80077B0C_ovl_01(((temp_s2 + 1) << 0x10) | 0x04000001, arg0 + 0x28);
      *((u8 *) (((char *) arg0) + 0x25C)) |= 0x12;

    case 1:
      if (temp_s2 != 0)
    {
      func_8016F5D8_overlay_050(arg0, *((s32 *) (((char *) temp_s1) + 0x28)), *((s32 *) (((char *) temp_s1) + 0x30)), 0x40);
    }
    else
    {
      func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) temp_s1) + 0x28)), *((s32 *) (((char *) temp_s1) + 0x30)), 0x40);
    }
      if ((((u8) (*((u8 *) (((char *) arg0) + 0x1E9)))) < 6U) || (D_800DFB88 != 0))
    {
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    }
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0x1A)
    {
      var_v0 = (*((u8 *) (((char *) arg0) + 6))) + 1;
      block_21:
      *((u8 *) (((char *) arg0) + 6)) = var_v0;

    }

    default:
      return;

    case 2:
      func_80077B0C_ovl_01(((temp_s2 + 1) << 0x10) | 0x04000001, arg0 + 0x28);
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x100300;
      *((u8 *) (((char *) arg0) + 6)) += 1;

    case 3:
      if (temp_s2 != 0)
    {
      func_8016F5D8_overlay_050(arg0, *((s32 *) (((char *) temp_s1) + 0x28)), *((s32 *) (((char *) temp_s1) + 0x30)), 0x10);
    }
    else
    {
      func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) temp_s1) + 0x28)), *((s32 *) (((char *) temp_s1) + 0x30)), 0x10);
    }
      *((u8 *) (((char *) arg0) + 6)) += func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)), 0x400);
      return;

    case 4:
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
      if (((s16) temp_v0) >= 0x24)
    {
      var_v0 = (*((u8 *) (((char *) arg0) + 6))) + 1;
      goto block_21;
    }
      break;

    case 5:
      func_80077B0C_ovl_01(((temp_s2 + 1) << 0x10) | 0x04000001, arg0 + 0x28);
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x05000300;
      *((u8 *) (((char *) arg0) + 6)) += 1;

    case 6:
      temp_v1 = (*((u8 *) (((char *) arg0) + 6))) + func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x224)), *((s32 *) (((char *) arg0) + 0x228)));
      *((u8 *) (((char *) arg0) + 6)) = temp_v1;
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0xC)
    {
      var_v0 = temp_v1 + 1;
      goto block_21;
    }
      break;

  }

}

