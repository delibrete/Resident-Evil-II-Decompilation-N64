static inline volatile unsigned long long inline_fn(volatile unsigned long long *arg0)
{
  return *arg0;
}

void func_80163654_ovl_23(void *arg0)
{
  volatile unsigned long long new_var;
  volatile unsigned long long *new_var3;
  unsigned int *new_var2;
  ;
  new_var = 0;
  ;
  new_var3 = &new_var;
  do
  {
  }
  while (inline_fn(new_var3));
}

