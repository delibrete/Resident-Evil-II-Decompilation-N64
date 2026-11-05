typedef void (*Fn)(u8 *, s32, s32);
extern Fn D_80167234_ovl_33[];
void func_801725E8_overlay_061(u8 *p, s32 x, s32 y)
{
  volatile Fn *table = D_80167234_ovl_33;
  u32 n = ((p[5] - 1) * 9) + p[0x26E];
  s32 *new_var;
  new_var = &y;
  table[n](p, x, *new_var);
}

