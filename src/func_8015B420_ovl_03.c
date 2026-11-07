typedef void (*Fn)(void);
extern volatile Fn D_80160ACC_ovl_03[];
extern u8 D_80160B9D_ovl_03;
extern void func_80043650_ovl_01(void);
void func_8015B420_ovl_03(void)
{
  volatile Fn *new_var;
  u32 j;
  func_80043650_ovl_01();
  new_var = D_80160ACC_ovl_03;
  j = D_80160B9D_ovl_03;
  new_var[j]();
}

