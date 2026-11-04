typedef void (*Fn)(void *);
extern volatile u32 D_80168FE0_ovl_28[];
static inline Fn inline_fn(volatile u32 *arg0, u8 arg1)
{
  return (Fn) arg0[arg1];
}

void func_80167DA4_ovl_28(void *p)
{
  u8 i = ((u8 *) p)[5];
  inline_fn(p, i)(p);
}

