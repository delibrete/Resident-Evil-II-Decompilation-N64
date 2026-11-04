extern u32 func_80166D80_ovl_33[];
void func_80164AF0_ovl_12(void *arg0)
{
  volatile u32 *base = (volatile u32 *) func_80166D80_ovl_33;
  void (*new_var)(void);
  u32 new_var2;
  u32 address = base[new_var2];
  new_var2 = address;
  new_var = (void (*)(void)) new_var2;
  new_var();
}

