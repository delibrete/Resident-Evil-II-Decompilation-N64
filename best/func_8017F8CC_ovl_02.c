extern s32 func_8017BE48_ovl_02(s32);
extern s32 func_8017BB30_ovl_02(s32);
extern s32 func_8017BB68_ovl_02(s32);
extern s32 D_80185700_ovl_02;
extern s8 D_80184C2C_ovl_02[];
extern s8 D_80184C6C_ovl_02[];
extern s8 D_80184CEC_ovl_02[];
extern s8 D_80184BE4_ovl_02[];
extern s8 D_80184DEC_ovl_02[];
extern s8 D_80184E2C_ovl_02[];
s32 func_8017F720_ovl_02(void);
s8 func_8017F5D8_ovl_02(void);
s8 func_8017F75C_ovl_02(void);
s32 func_8017F8CC_ovl_02(void)
{
  s32 index = func_8017BB30_ovl_02(5);
  s32 bits;
  s32 flag;
  s8 *base;
  unsigned char new_var;
  if (index < 0x1f)
  {
    base = D_80184DEC_ovl_02;
  }
  else
  {
    index = func_8017BB30_ovl_02(9) - 0x1f0;
    base = D_80184E2C_ovl_02;
  }
  base += index * 2;
  flag = base[0];
  func_8017BB68_ovl_02(base[1]);
  bits = 0;
  if (flag)
  {
    bits = func_8017BE48_ovl_02(flag);
    new_var = 1;
    if (((bits >> (flag - new_var)) & 1) == 0)
    {
      bits = (1 - (1 << flag)) + bits;
    }
  }
  return bits;
}

