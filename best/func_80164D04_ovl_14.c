extern volatile u32 D_80168C34_ovl_14[];
void func_80164D04_ovl_14(void *arg0)
{
  volatile u32 *base;
  volatile u32 *new_var;
  base = &base[((u8 *) arg0)[5]];
  new_var = base;
  ((void (*)(void)) (*new_var))();
  base = D_80168C34_ovl_14;
}

