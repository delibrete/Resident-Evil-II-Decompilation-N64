inline static volatile short inline_fn(volatile short arg0)
{
  return arg0;
}

int func_80166F6C_ovl_28(void *arg0)
{
  unsigned int new_var6;
  volatile unsigned long long new_var7;
  volatile short *new_var9;
  int new_var2;
  volatile unsigned long long new_var;
  volatile short new_var4;
  volatile short new_var8;
  volatile short new_var5;
  volatile short new_var3;
  new_var4 = 1;
  new_var8 = inline_fn(new_var4);
  new_var2 = new_var8;
  new_var3 = new_var2;
  new_var5 = (new_var4 = (char) new_var3);
  new_var = *(new_var9 = &new_var5);
  new_var7 = new_var;
  new_var6 = new_var7;
  new_var2 = new_var6;
  {
  }
}

