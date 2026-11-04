extern volatile u32 D_80167418_ovl_16[];
void func_80164C80_ovl_16(void *arg0)
{
  volatile u32 *base = D_80167418_ovl_16;
  u8 *new_var;
  new_var = (u8 *) arg0;
  ((void (*)(void)) base[new_var[5]])();
}

