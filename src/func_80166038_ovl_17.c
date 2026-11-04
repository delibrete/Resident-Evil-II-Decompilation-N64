extern volatile u32 D_80167F60_ovl_17[];
void func_80166038_ovl_17(void *arg0)
{
  volatile u32 *base = D_80167F60_ovl_17;
  void (*new_var)(void);
  u32 i = *(((u8 *) arg0) + 6);
  new_var = (void (*)(void)) base[i];
  new_var();
}

