s32 func_800537D4_ovl_01(s32, s32, s32);
extern s32 D_800C7650_ovl_01;
extern void *D_8010D8E0_ovl_01;
s32 func_80053874_ovl_01(volatile unsigned char arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 temp_v0;
  char new_var;
  u8 temp_v1;
  void *temp_s0;
  int new_var2;
  temp_s0 = D_8010D8E0_ovl_01;
  switch (*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x20F5B)))
  {
    case 0:
      if (((u8) (*((u8 *) (((char *) temp_s0) + 0x2DC)))) < 0xDU)
    {
      temp_v1 = *((u8 *) (((char *) temp_s0) + 0x2DC));
      func_800537D4_ovl_01(arg0, arg0 + (temp_v1 * (arg2 / 12)), arg1 + (temp_v1 * (arg3 / 12)));
      *((u8 *) (((char *) temp_s0) + 0x2DC)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x2DC))) + 1);
      return 1;
    }
      block_7:
    *((u8 *) (((char *) temp_s0) + 0x2DC)) = 0U;

      *((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x20F5B)) = 0U;
      return 0;

    case 1:
      if (((u8) (*((u8 *) (((char *) temp_s0) + 0x2DC)))) >= 0xDU)
    {
      goto block_7;
    }
      new_var = 1;
      temp_v0 = *((u8 *) (((char *) temp_s0) + 0x2DC));
      func_800537D4_ovl_01(arg0, (arg0 + arg2) - ((temp_v0 * arg2) / 12), (arg1 + arg3) - ((temp_v0 * arg3) / 12));
      new_var2 = (*((u8 *) (((char *) temp_s0) + 0x2DC))) + new_var;
      *((u8 *) (((char *) temp_s0) + 0x2DC)) = (u8) new_var2;
      return new_var;

    default:
      return new_var;

  }

}

