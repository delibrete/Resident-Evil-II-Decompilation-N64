s32 func_8017228C_overlay_045(void *, s32, s32);
s32 func_80173B4C_overlay_045(void *, s32, s32);
s32 func_801744D8_overlay_045(void *arg0, s32);
void func_80173074_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  void *temp_v1;
  void *new_var;
  void *temp_v1_2;
  if (((*((u8 *) (((char *) arg0) + 6))) == 0) && ((*((u8 *) (((char *) arg0) + 0x2C0))) == 0))
  {
    temp_v1 = *((void **) (((char *) arg0) + 0x234));
    new_var = temp_v1;
    {
      *((s32 *) (((char *) temp_v1) + 0x1BE8)) = (s32) ((*((s32 *) (((char *) new_var) + 0x1BE8))) | 0x10);
      temp_v1_2 = temp_v1;
    }
    if (1)
    {
      temp_v1_2 = temp_v1_2;
      temp_v1_2 = temp_v1_2 - -0x1BE8;
      *((s16 *) (((char *) temp_v1_2) + 0x136)) = 0x5A;
      *((s16 *) (((char *) temp_v1_2) + 0x130)) = 0;
      temp_v1 = (char *) temp_v1_2;
      *((s16 *) (temp_v1 + 0x132)) = 0;
      *((s8 *) (temp_v1 + 0x134)) = 0x64;
      temp_v1 = temp_v1 + 0x135;
      *((s8 *) temp_v1) = 0x64;
      func_801744D8_overlay_045(arg0, 0x101F3F);
      func_80173B4C_overlay_045(arg0, 0x13, 7);
      func_80173B4C_overlay_045(arg0, 0, 6);
      func_80173B4C_overlay_045(arg0, 1, 6);
      *((s8 *) (((char *) arg0) + 0x2D5)) = 1;
    }
  }
  func_8017228C_overlay_045(arg0, arg1, arg2);
}

