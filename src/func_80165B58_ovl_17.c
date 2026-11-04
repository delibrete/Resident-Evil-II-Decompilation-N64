extern volatile u32 D_80167F44_ovl_17[];
static inline volatile u32 inline_fn(volatile u32 *arg0, u32 arg1)
{
  return arg0[arg1];
}

void func_80165B58_ovl_17(void *arg0)
{
  volatile u32 *base = D_80167F44_ovl_17;
  u32 i = *(((u8 *) arg0) + 6);
  ((void (*)(void)) inline_fn(base, i))();
}

