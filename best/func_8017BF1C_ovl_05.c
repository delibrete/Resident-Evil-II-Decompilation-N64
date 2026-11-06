extern s32 func_80027530_ovl_01(s32, s32, s32, s32);
extern s32 func_800276B4_ovl_01(s32);
extern s32 func_8006C0A0_ovl_01(s32, s8 *, u8 *);
extern u8 D_8017E53F_ovl_05;
extern s8 D_8017E549_ovl_05;
void func_8017B4F4_ovl_05(void);
extern u8 D_8017E54C_ovl_05;
extern u8 D_8017E544_ovl_05[];
extern s16 D_8017E274_ovl_05[];
void func_8017B390_ovl_05(void);
extern u8 D_8017E53F_ovl_05;
extern u8 D_8017E54C_ovl_05;
extern u8 D_800C7650_ovl_01[];
extern s32 D_8017E4C8_ovl_05[];
extern s32 func_80077B0C_ovl_01(s32, s32);
void func_8017BB18_ovl_05(void);
extern s32 func_800439B8_ovl_01(s32, void *, s32, s32);
extern u8 D_8017E53D_ovl_05;
extern u8 D_800DF650_ovl_01[];
extern s16 D_8017E274_ovl_05[];
void func_8017BF1C_ovl_05(void)
{
  s32 i;
  u8 *new_var;
  void *p = ((u8 *) D_8017E274_ovl_05) + (D_8017E53D_ovl_05 * 0x8C);
  s32 x;
  i = 7;
  do
  {
    x = 0x204;
    new_var = D_800DF650_ovl_01 + x;
    x = *((s32 *) new_var);
    x = func_800439B8_ovl_01(x, p, 0, 0);
    *((s32 *) new_var) = x;
    p = ((u8 *) p) + 20;
    i--;
  }
  while (i);
}

