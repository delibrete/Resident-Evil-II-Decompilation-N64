void func_80028F2C(void);
void func_80028EB4(void *arg0, volatile unsigned int arg1)
{
  s32 remain = arg1;
  s32 len;
  s32 *buf = *((s32 **) (((u8 *) arg0) + 0x14));
  if (remain > 0)
  {
    do
    {
      len = buf[1];
      if (len >= remain)
      {
        buf[0] += remain;
        buf[1] -= remain;
        break;
      }
      else
      {
        remain -= len;
        func_80028DF0_ovl_01(arg0);
      }
    }
    while (1);
  }
}

void func_80047854_ovl_01(void *arg0, s8 arg1, s8 arg2, s32 arg3, u16 arg4);
void func_8004790C_ovl_01(void *arg0, s16 a1, s16 a2, s16 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);
