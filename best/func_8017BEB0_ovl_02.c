void func_8017BEB0_ovl_02(s32 arg0, void *arg1)
{
  volatile s32 *p = arg1;
  volatile long new_var2;
  s32 n;
  volatile s32 *new_var4;
  volatile long long new_var;
  if (arg0 < 4)
  {
    new_var4 = p;
    n = new_var4[0] + func_8017F8CC_ovl_02();
    p[0] = n;
  }
  else
    if (arg0 == 4)
  {
    n = new_var4[1] + func_8017F96C_ovl_02();
    p[1] = n;
  }
  else
  {
    volatile long new_var3;
    new_var2 = new_var4[2];
    new_var3 = new_var2;
    if (arg0)
    {
      new_var = (p[2] = new_var4[2] + func_8017F96C_ovl_02());
      n = new_var;
    }
    else
    {
      new_var = (p[2] = new_var3 + func_8017F96C_ovl_02());
      n = new_var;
    }
  }
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
}
