static inline static int *inline_fn(int **arg0)
{
  return arg0[0];
}

void func_8002720C_ovl_01(void)
{
  long long new_var7[2];
  int new_var3;
  int *new_var5[2];
  int *new_var4;
  unsigned short new_var2;
  new_var3 = (new_var2 = 1);
  new_var5[new_var2] = &new_var7[0];
  new_var7[0] = 0;
  new_var4 = inline_fn(new_var5);
  new_var5[0] = new_var5[new_var3];
  if (1)
  {
    new_var7[1] = *new_var4;
  }
  ;
  do
  {
    new_var7[0] = 0;
  }
  while (new_var7[1]);
  new_var7[0] = 0;
}

