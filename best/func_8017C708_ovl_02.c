static inline static int inline_fn(int arg0)
{
  return arg0;
}

short func_8017C708_ovl_02(volatile short arg0, void *arg1)
{
  long long new_var;
  long long *new_var3;
  int new_var2;
  new_var = 0;
  new_var2 = new_var;
  ;
  new_var2 = inline_fn(new_var2);
  new_var = new_var2;
  new_var3 = &new_var;
  do
  {
  }
  while (*new_var3);
}

