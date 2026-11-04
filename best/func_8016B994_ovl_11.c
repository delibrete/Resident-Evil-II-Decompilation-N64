static inline volatile unsigned char inline_fn(volatile unsigned char arg0)
{
  return arg0;
}

void func_8016B994_ovl_11(void *arg0, volatile int arg1, volatile unsigned short arg2)
{
  unsigned char new_var2;
  volatile unsigned int new_var3;
  volatile unsigned char new_var;
  new_var = 0;
  new_var3 = new_var;
  new_var2 = new_var3;
  new_var = new_var2;
  do
  {
  }
  while (inline_fn(new_var));
}

