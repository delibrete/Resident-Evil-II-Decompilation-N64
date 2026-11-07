extern unsigned short D_800E10C8;
s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
extern char D_800E10D0[];
s32 func_80173554_overlay_054(void *arg0)
{
  s32 *var_s0;
  s32 temp_s1;
  s32 var_s3;
  s8 var_a0;
  u8 temp_v0;
  char *new_var;
  void *temp_s2;
  temp_s2 = arg0 + 0x2B4;
  new_var = ((char *) arg0) + 0x2B4;
  if ((*((u8 *) new_var)) != 0)
  {
    var_s0 = *((s32 **) (D_800C7650 + 0x19D3C));
  }
  else
  {
    var_s0 = &D_800E10D0;
  }
  if ((*((u8 *) new_var)) != 0)
  {
    var_s3 = (*((s32 *) (((char *) arg0) + 0x290))) & 0x3FFFFFFF;
  }
  else
  {
    var_s3 = *((s32 *) (((char *) arg0) + 0x28C));
  }
  temp_s1 = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) var_s0) + 0x28)), *((s32 *) (((char *) var_s0) + 0x30)), 0x100);
  func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) var_s0) + 0x28)), *((s32 *) (((char *) var_s0) + 0x30)));
  if ((*((s16 *) (((char *) var_s0) + 0x1F2))) >= 0)
  {
    if (var_s3 >= 0x5DD)
    {
      *((u8 *) (((char *) temp_s2) + 0xB)) = 0x5AU;
      goto block_16;
    }
    temp_v0 = *((u8 *) (((char *) temp_s2) + 0xB));
    if (temp_v0 != 0)
    {
      *((u8 *) (((char *) temp_s2) + 0xB)) = (u8) (temp_v0 - 1);
      goto block_16;
    }
    var_a0 = 2;
    if (temp_s1 & 0x8000)
    {
      var_a0 = 1;
    }
    if (((*((u8 *) (((char *) (var_a0 + temp_s2)) + 0x21))) == 0) && (!(D_800E10C8 & 0x80)))
    {
      *((s8 *) (((char *) temp_s2) + 0xF)) = var_a0;
      *((s8 *) (((char *) temp_s2) + 0xD)) = 4;
      *((s8 *) (((char *) ((var_a0 & 0xFF) + temp_s2)) + 0x21)) = 0xF;
      return 1;
    }
    return 0;
  }
  block_16:
  return 0;

}

