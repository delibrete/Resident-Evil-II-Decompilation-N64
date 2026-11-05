s32 func_80032B8C_ovl_01(void *, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_801637A4_ovl_30(void *);
void func_80163BB0_ovl_30(void *arg0, s32 arg1, s32 arg2)
{
  u16 temp_v0;
  u8 temp_s0;
  void *new_var;
  temp_s0 = *((u8 *) (((char *) arg0) + 7));
  switch (temp_s0)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 7)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x06000F00;
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      func_80077D48_ovl_01(0xB, arg0);
      return;

    case 1:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)
    {
      *((u8 *) (((char *) arg0) + 7)) = 2U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0x1FU;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x3F00;
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    }
      if (arg0 || arg2)
    {
      func_80032B8C_ovl_01(arg0, 0);
      return;
    }
    else
    {
      func_80032B8C_ovl_01(arg0, 0);
      return;
    }

    case 2:
      new_var = arg0;
      func_80089D34_ovl_01(new_var, arg1, arg2, 0x40);
      temp_v0 = (*((u16 *) (((char *) new_var) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
      if ((temp_v0 << 0x10) == 0)
    {
      *((u8 *) (((char *) arg0) + 5)) = temp_s0;
      *((s16 *) (((char *) arg0) + 6)) = 0;
      *((s8 *) (((char *) arg0) + 0x2B4)) = 0;
      *((s8 *) (((char *) arg0) + 0x2B8)) = 0x3C;
      func_801637A4_ovl_30(arg0);
    }
      return;

  }

}

