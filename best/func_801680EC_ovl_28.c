extern void (*D_80168FE8_ovl_28[])(void);
static inline static u8 inline_fn(u8 *arg0, int arg1)
{
  return arg0[arg1];
}

void func_801680EC_ovl_28(void *arg0)
{
  void (**new_var3)(void);
  void (**new_var2)(void);
  void (**new_var)(void);
  new_var = &new_var[inline_fn((u8 *) arg0, 5)];
  new_var2 = new_var;
  (*new_var2)();
  new_var3 = D_80168FE8_ovl_28;
  new_var = new_var3;
}

