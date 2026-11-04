static inline static static static static static static int inline_fn(unsigned long arg0)
{
  return ((short) arg0) != 0;
}

static inline volatile unsigned long inline_fn2(volatile unsigned long *arg0)
{
  return arg0[1];
}

volatile unsigned long func_80170F70_ovl_07(void)
{
  volatile unsigned long new_var6[2];
  int new_var2;
  volatile unsigned long new_var3;
  volatile unsigned long long new_var5;
  unsigned int new_var;
  if (inline_fn2(new_var6))
  {
    ;
    new_var5 = new_var;
    new_var = inline_fn2(new_var6);
    new_var3 = new_var5;
    do
    {
    }
    while (0);
  }
  else
  {
    ;
  }
  {
    new_var6[0] = 0;
    ;
    {
    }
  }
  new_var3 = new_var5;
}

