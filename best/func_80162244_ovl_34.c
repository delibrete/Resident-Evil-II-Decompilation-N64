s32 func_80032B8C_ovl_01(void *, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80077B0C_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650_ovl_01;
void func_80162244_ovl_34(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_a0;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((*((u8 *) (((char *) arg0) + 5))) << 0x18) + 0x300);
      *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) | 0x40);
      *((s8 *) (((char *) arg0) + 0x25C)) = 1;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) | 0x80);
      if ((*((u8 *) (((char *) arg0) + 5))) == 0)
    {
      var_a0 = 0x4000001;
      var_a0 = 0x04010000;
    }
      func_80077B0C_ovl_01(var_a0 | 1, arg0 + 0x28);

    case 1:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
      *((s8 *) (((char *) arg0) + 0x25C)) = 0;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
      *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) & (~0x40));
    }
      func_80032B8C_ovl_01(arg0, 0);
      return;

  }

}

