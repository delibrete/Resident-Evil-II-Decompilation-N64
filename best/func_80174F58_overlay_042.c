extern volatile u32 D_80168CCC_ovl_14[];
void func_80174F58_overlay_042(void *arg0)
{
  volatile u32 *base = D_80168CCC_ovl_14;
  u32 new_var;
  u32 idx = *(((u8 *) arg0) + 5);
  ((void (*)(void)) base[new_var])();
  new_var = idx;
}

