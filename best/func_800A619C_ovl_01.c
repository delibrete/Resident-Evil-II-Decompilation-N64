extern f32 D_800BA708_ovl_01;
extern f32 D_800BA70C_ovl_01;
unsigned char func_800A619C_ovl_01(u16 x)
{
  f32 f;
  f = ((f32) x) * D_800BA708_ovl_01;
  if (D_800BA70C_ovl_01 <= f)
  {
    f = f - D_800BA70C_ovl_01;
    return ((s32) f) | 0x8000;
  }
  return (s32) f;
}

