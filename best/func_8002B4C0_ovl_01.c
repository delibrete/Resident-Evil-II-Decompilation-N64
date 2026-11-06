inline static volatile long long inline_fn(volatile long long arg0)
{
  return arg0;
}

inline static volatile long long inline_fn2(volatile long long arg0)
{
  return arg0;
}

s32 func_8002B4C0_ovl_01(void *arg0)
{
  volatile long long new_var;
  volatile long long new_var3;
  int new_var2;
  new_var3 = 0;
  new_var2 = new_var3;
  new_var = new_var2;
  new_var2 = inline_fn(new_var);
  new_var3 = inline_fn2(new_var2);
  return new_var3;
}

