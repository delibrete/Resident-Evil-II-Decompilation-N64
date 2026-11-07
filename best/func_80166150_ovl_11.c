void func_80166150_ovl_11(void *a, void *b, void *c)
{
  volatile long new_var2;
  volatile long *new_var;
  int *new_var9;
  void **new_var4;
  short new_var3;
  int new_var8;
  unsigned int new_var10;
  int new_var6;
  int pad;
  int new_var7;
  volatile long new_var5[2];
  pad = !b;
  if (!new_var4)
  {
    new_var6 = 1;
    do
    {
    }
    while (0);
    if (new_var6)
    {
    }
  }
  ;
  pad = 0;
  new_var9 = &new_var8;
  new_var3 = 1;
  new_var5[0] = new_var5[1];
  new_var8 = pad;
  new_var7 = 0;
  (void) a;
  new_var10 = *new_var9;
  do
  {
    new_var5[new_var3] = (new_var2 = pad);
    new_var5[new_var3] = (new_var2 = new_var10);
    pad = *(&new_var5[new_var7]);
    if (new_var3)
    {
      if (pad)
      {
      }
      new_var2 = new_var7;
      if (new_var2)
      {
        b;
      }
      else
      {
        b;
      }
    }
    new_var4 = &c;
  }
  while (pad);
  (void) (*new_var4);
}

