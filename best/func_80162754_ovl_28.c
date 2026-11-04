static inline static int inline_fn(int arg0)
{
  return arg0;
}

static inline u8 inline_fn2(void *arg0)
{
  return *(6 + ((u8 *) arg0));
}

unsigned long long func_80162754_ovl_28(void *arg0)
{
  int new_var;
  int new_var2;
  new_var2 = inline_fn(inline_fn2(arg0) == 1);
  {
    *((s32 *) (((u8 *) arg0) + 0x1e8)) = 0x1f00;
    new_var = 1;
    *(((u8 *) arg0) + 6) = new_var;
    *(((s8 *) arg0) + 0x207) = 1;
    *(((s8 *) arg0) + 0x206) = 1;
    *(((u8 *) arg0) + 0x25c) &= 0xfd;
  }
  if (new_var2)
  {
    func_80089D34_ovl_01(arg0);
  }
}

