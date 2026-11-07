s32 func_80078F14_overlay_001();
extern char D_800C7650_ovl_01[];
extern s8 D_80119E10_ovl_01;
extern u8 D_80119E11_ovl_01;
extern s8 D_80119E12_ovl_01;
extern char D_80119E84_ovl_01[];
inline static u8 *inline_fn(char *arg0, int arg1)
{
  return (u8 *) (arg0 + arg1);
}

void func_80077460_ovl_01(u8 arg0, s8 arg1)
{
  int new_var;
  s8 *new_var2;
  new_var = (*((s32 *) (D_800C7650_ovl_01 + 0x19A3C))) & 0x2000;
  if (!new_var)
  {
    D_80119E12_ovl_01 = arg1;
    new_var2 = (s8 *) (D_80119E84_ovl_01 + 0x12);
    D_80119E10_ovl_01 = 1;
    D_80119E11_ovl_01 = arg0;
    new_var = 1;
    if ((*inline_fn(D_80119E84_ovl_01, 0)) == new_var)
    {
      func_80078F14_overlay_001(*((s8 *) (D_80119E84_ovl_01 + 2)), 0x7F);
    }
    if ((*inline_fn(D_80119E84_ovl_01, 8)) == new_var)
    {
      func_80078F14_overlay_001(*((s8 *) (D_80119E84_ovl_01 + 0xA)), 0x7F);
    }
    if ((*inline_fn(D_80119E84_ovl_01, 0x10)) == new_var)
    {
      func_80078F14_overlay_001(*new_var2, 0x7F);
    }
  }
}

