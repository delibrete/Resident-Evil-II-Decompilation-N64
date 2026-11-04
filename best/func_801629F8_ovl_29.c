s32 func_80032EA4_ovl_01(void *, void *, void *, s32);
extern u8 D_800C7650_ovl_01[];
static inline void *inline_fn(u8 *arg0)
{
  return *((void **) (arg0 + 0x1ab0));
}

void func_801629F8_ovl_29(void *p)
{
  u8 *b = p;
  u8 *g;
  int r;
  void *new_var3;
  unsigned long long new_var;
  u32 n;
  s32 new_var2;
  do
  {
    n = *((u32 *) (b + 0x28c));
    func_80032EA4_ovl_01(p, *((void **) (g + 0x1aa8)), inline_fn(g), 0x5f4);
  }
  while (0);
  new_var3 = *((void **) (g + 0x1aa8));
  r = func_80032EA4_ovl_01(p, new_var3, inline_fn(g), 0x270);
  new_var2 = func_80032EA4_ovl_01(p, *((void **) (g + 0x1aa8)), inline_fn(g), 0x400);
  {
    s32 t = new_var2;
    new_var = 16;
    if ((t << new_var) != 0)
    {
      goto skip1;
    }
    if (n >= 0x5dc)
    {
      goto skip1;
    }
    *((s32 *) (b - (-4))) = 0x1050000;
  }
  skip1:
  if (b[0x2b6])
  {
    return;
  }

  if (g[0x1cef])
  {
    return;
  }
  if ((r << 16) != 0)
  {
    return;
  }
  g = ((u8 *) (&D_800C7650_ovl_01)) + 0x18000;
  if (n >= 0xbb8)
  {
    return;
  }
  *((s32 *) (b + 4)) = 0x1020000;
}

