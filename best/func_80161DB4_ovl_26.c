void func_80161DB4_ovl_26(void *arg0, s32 arg1, volatile long long arg2)
{
  int new_var2;
  int new_var4;
  volatile unsigned int new_var;
  s32 i;
  int new_var3;
  void **new_var5;
  new_var4 = 0;
  new_var3 = 26;
  for (i = 0; i < new_var3; i++)
  {
    ((volatile s32 *) arg0)[i] |= 0x8000;
  }

  for (i = 0; i < 12; i++)
  {
    new_var5 = &arg0;
    new_var = 0x2B4 / 4;
    ((s32 *) (*new_var5))[i + new_var] = new_var4;
  }

  for (i = (new_var4 = 0); i < 3; i++)
  {
    if (new_var2 || new_var4)
    {
      new_var2 = 0x264 / 2;
      ((s16 *) arg0)[new_var2 + i] = 0;
    }
    else
    {
      new_var2 = 0x264 / 2;
      ((s16 *) arg0)[(0x264 / 2) + i] = 0;
    }
  }

}

