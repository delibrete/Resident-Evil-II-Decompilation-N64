void func_8017BEB0_ovl_02(s32 arg0, void *arg1)
{
  volatile s32 *p = arg1;
  volatile long new_var2;
  s32 n;
  volatile long long new_var;
  if (arg0 < 4)
  {
    n = p[0] + func_8017F8CC_ovl_02();
    p[0] = n;
  }
  else
    if (arg0 == 4)
  {
    n = p[1] + func_8017F96C_ovl_02();
    p[1] = n;
  }
  else
  {
    new_var2 = p[2];
    if (arg0)
    {
      new_var = (p[2] = p[2] + func_8017F96C_ovl_02());
      n = new_var;
    }
    else
    {
      new_var = (p[2] = new_var2 + func_8017F96C_ovl_02());
      n = new_var;
    }
  }
}

