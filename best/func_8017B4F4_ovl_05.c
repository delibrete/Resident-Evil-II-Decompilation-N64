extern u8 D_8017E53F_overlay_005;
extern s8 D_8017E549_overlay_005;
void func_8017B4F4_ovl_05(void)
{
  volatile int pad;
  int new_var;
  new_var = 1;
  if (func_800276B4_ovl_01(0) != 0)
  {
    func_80027530_ovl_01(0x200, 0, 7, new_var);
    D_8017E549_overlay_005 = 1;
    D_8017E53F_overlay_005 &= 0xF7;
    func_8006C0A0_ovl_01(1);
  }
}

