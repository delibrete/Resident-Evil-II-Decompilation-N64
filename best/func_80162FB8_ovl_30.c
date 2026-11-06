inline static void *inline_fn(void **arg0)
{
  return *arg0;
}

void func_80162FB8_ovl_30(void *a)
{
  int new_var6;
  void ***new_var4;
  void **new_var;
  volatile unsigned int new_var7;
  volatile unsigned int new_var2;
  void **new_var3;
  void ***new_var5;
  new_var3 = &a;
  new_var5 = &new_var3;
  new_var7 = (new_var2 = new_var6);
  new_var6 = 1;
  *((volatile u8 *) inline_fn(new_var)) = new_var7;
  new_var4 = new_var5;
  new_var = *new_var4;
}

