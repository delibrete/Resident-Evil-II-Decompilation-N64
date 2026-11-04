s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_8008A974_ovl_01(void *, s32, s32, s32);
void func_80163748_overlay_016(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_v0;
  s32 new_var;
  u8 temp_v1;
  void *temp_v0;
  if (1)
  {
    if (1)
    {
    }
  }
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000F00;
      *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C8))) | 2);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 1:
      if ((*((u8 *) (((char *) arg0) + 0x2CA))) == 0)
    {
      if (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x7D0U)
      {
        temp_v0 = *((void **) (((char *) arg0) + 0x2C4));
        new_var = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) temp_v0) + 0x28)), *((s32 *) (((char *) temp_v0) + 0x30)), 0x300);
        var_v0 = 0x01020000;
        if (new_var == 0)
        {
          var_v0 = 0x01090000;
        }
        goto block_11;
      }
      goto block_9;
    }
      block_9:
    func_800334F8_ovl_01(arg0, arg1, arg2, 1);

      *((s8 *) (((char *) arg0) + 0x2CE)) = 4;
      do { func_80032B8C_ovl_01(arg0, 0); } while (0);
      func_8008A974_ovl_01(arg0, arg1, arg2, 0x10100);
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0x2E)
    {
      var_v0 = 0x010F0000;
      block_11:
      *((s32 *) (((char *) arg0) + 4)) = var_v0;

    }
      return;

  }

}

