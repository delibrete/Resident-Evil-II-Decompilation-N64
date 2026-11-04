unsigned char func_80167E3C_ovl_11(void)
{
  volatile unsigned char new_var;
  int new_var5;
  int *new_var2;
  volatile int new_var3;
  volatile short *new_var7;
  volatile short new_var4[2];
  new_var2 = &(*(&new_var4[1]));
  new_var2 = new_var4;
  new_var5 = 1;
  new_var5 = 0;
  do
  {
    new_var = new_var2[new_var5];
    new_var7 = new_var2;
    new_var4[new_var5] = new_var5;
    if (*new_var7)
    {
      new_var4[1] = new_var;
    }
    ;
  }
  while (new_var = (new_var3 = new_var2[new_var5]));
}

