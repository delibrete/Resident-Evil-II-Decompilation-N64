extern s32 func_8000F020(void);
extern s32 func_8017D0D8_ovl_02(void);
extern s32 func_8017BE7C_ovl_02(void);
extern s32 func_8017D1DC_ovl_02(void);
extern s32 func_8017D384_ovl_02(void);
extern s32 func_8017D3E0_ovl_02(void);
extern s32 func_8017BB30_ovl_02(s32);
extern s32 func_8017BB68_ovl_02(s32);
extern void func_8017D194_ovl_02(void);
extern s32 D_80185790_ovl_02;
extern s32 D_801857A4_ovl_02;
extern s32 D_801861DC_ovl_02;
extern s32 *D_80186C14_ovl_02;
void func_8017B520_ovl_02(u32 *p, u32 n, s32 val)
{
  int new_var;
  u32 i = 0;
  n >>= 3;
  if (n)
  {
    s32 x = val;
    new_var = 0;
    do
    {
      p[0] = new_var;
      p[1] = x;
      p += 2;
      i++;
    }
    while (i < n);
  }
  if (n || val)
  {
    func_8000F020();
  }
  else
  {
    func_8000F020();
  }
}

s32 func_8017D070_ovl_02(void);
s32 func_8017D0D8_ovl_02(void);
void func_8017D194_ovl_02(void);
