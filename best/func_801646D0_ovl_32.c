void func_801646D0_ovl_32(void)
{
  volatile int new_var5[2];
  volatile int new_var3;
  volatile long new_var4;
  new_var5[0] = new_var5[1];
  if (new_var5[0])
  {
    new_var5[1] = 0;
  }
  else
  {
    new_var5[0] = new_var5[1] || new_var5[0];
    new_var4 = new_var5[0];
    if (new_var4)
    {
      new_var5[1] = 0;
      new_var3 = (unsigned short) new_var5[1];
    }
    else
    {
      new_var5[1] = 0;
    }
  }
  do
  {
  }
  while (new_var3);
}

