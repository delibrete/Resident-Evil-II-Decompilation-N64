inline static static static static static static static static static static static static static static static static static static static volatile short inline_fn(volatile short arg0)
{
  return arg0;
}

inline static static static static static static static static static static static static static static volatile short inline_fn2(volatile short arg0)
{
  return inline_fn((unsigned char) arg0);
}

void func_80167C40_ovl_31(void *arg0)
{
  volatile short new_var11;
  unsigned char new_var3;
  volatile short new_var5;
  volatile short new_var8[2];
  volatile short new_var4;
  volatile short new_var10;
  int new_var6;
  volatile short *new_var7;
  volatile short new_var;
  volatile char new_var2;
  volatile unsigned char new_var9;
  new_var4 = (char) new_var8[1];
  new_var8[1] = 0;
  new_var = new_var4;
  new_var6 = 0;
  do
  {
  }
  while (new_var6);
  if (new_var4)
  {
    new_var4 = *new_var7;
    new_var7 = &new_var8[new_var6];
    new_var3 = new_var8[1];
    new_var4 = new_var;
    new_var6 = new_var4;
    new_var5 = (new_var5 = *new_var7);
    new_var10 = inline_fn2(new_var6);
    new_var8[0] = new_var10;
    new_var8[1] = new_var5;
    ;
    new_var9 = new_var3;
  }
  else
  {
    new_var7 = &new_var8[new_var6];
    new_var3 = new_var8[1];
    new_var4 = new_var;
    new_var9 = new_var4;
    new_var11 = new_var4;
    new_var6 = new_var9;
    new_var5 = (new_var5 = new_var11);
    new_var8[0] = inline_fn2(new_var6);
    new_var8[1] = new_var5;
    ;
    new_var9 = new_var3;
  }
  do
  {
  }
  while (new_var9);
}

