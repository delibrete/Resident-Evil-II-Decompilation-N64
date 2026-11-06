extern u8 D_80160B9C_ovl_03[16];
extern s32 func_80027530_ovl_01(s32, s32);
extern s32 func_800275F8_ovl_01(s32, s32, s32, s32);
extern s32 func_800276B4_ovl_01(s32);
extern void func_8015FB30_ovl_03(void);
void func_8015B610_ovl_03(void)
{
  s16 *s = (s16 *) D_80160B9C_ovl_03;
  s32 new_var;
  s[8] += s[9];
  new_var = func_800276B4_ovl_01(0);
  do { func_80027530_ovl_01(0x200, 0); } while (0);
  func_800275F8_ovl_01(0, s[8], 0, 0);
  if (!new_var)
  {
    s[9] = 0;
    s[8] = -1;
  }
  s[7]++;
  func_8015FB30_ovl_03();
}

