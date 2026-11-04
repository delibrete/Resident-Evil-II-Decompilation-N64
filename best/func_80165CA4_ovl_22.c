extern volatile u32 D_80166870_ovl_22[];
static inline static u8 *inline_fn(void *arg0)
{
  return (u8 *) arg0;
}

void func_80165CA4_ovl_22(void *arg0)
{
  volatile u32 *base;
  volatile u32 *new_var2;
  volatile u32 *new_var;
  u32 i = *(inline_fn(arg0) + 5);
  if (D_80166870_ovl_22)
  {
    new_var = base;
    new_var2 = new_var;
    ((void (*)(void)) new_var2[i])();
    base = D_80166870_ovl_22;
  }
  else
  {
    new_var = base;
    new_var2 = new_var;
    ((void (*)(void)) new_var2[i])();
    base = D_80166870_ovl_22;
  }
}

