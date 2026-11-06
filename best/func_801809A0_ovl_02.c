static inline static static static static static static long long inline_fn(volatile long long arg0)
{
  return (long long) arg0;
}

void func_801809A0_ovl_02(void)
{
  volatile long long *new_var8[2];
  volatile int new_var;
  int new_var3;
  volatile long long new_var2;
  volatile long long *new_var5;
  unsigned char new_var4;
  volatile long long new_var6;
  new_var4 = 1;
  new_var5 = &new_var2;
  new_var8[0] = new_var5;
  new_var = new_var4;
  new_var3 = new_var;
  {
    new_var8[1] = new_var8[0];
    new_var3 = 1;
    new_var6 = *new_var8[new_var3];
    new_var2 = new_var3;
    new_var = inline_fn(new_var6);
    {
    }
  }
}

