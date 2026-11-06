typedef void (*Fn)(u8 *, s32, s32);
extern Fn D_80167234_ovl_33[];
inline static int inline_fn(u8 *arg0, int arg1)
{
  return (arg0[5] - arg1) * 9;
}

void func_8016ED0C_overlay_062(u8 *p, s32 x, s32 y)
{
  volatile Fn *table;
  u32 n = inline_fn(p, 1) + p[0x26E];
  table[n](p, x, y);
  table = D_80167234_ovl_33;
}

