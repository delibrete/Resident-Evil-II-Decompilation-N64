extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01;
inline static u8 *inline_fn(u32 arg0)
{
  return D_800C7650_ovl_01 + arg0;
}

void func_801661AC_ovl_35(s32 arg0)
{
  u32 offset = 0x18000;
  u8 *p;
  int new_var;
  new_var = 4;
  if (arg0 == 0)
  {
    p = &D_800E10D0_ovl_01;
  }
  else
  {
    u8 *base = inline_fn(offset);
    p = *((u8 **) (base + 0x1D3C));
  }
  p[new_var] = 3;
  p[5] = 0;
  p[6] = 0;
  p[7] = 0;
}

