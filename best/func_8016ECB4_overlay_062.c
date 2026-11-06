typedef void (*Fn)(u8 *, s32, s32);
extern Fn D_80167234_ovl_33[];
void func_8016ECB4_overlay_062(u8 *p, s32 x, s32 y)
{
  volatile Fn *table = D_80167234_ovl_33;
  volatile Fn **new_var;
  u32 n = ((p[5] - 1) * 9) + p[0x26E];
  new_var = &table;
  (*new_var)[n](p, x, y);
}

