s32 func_80082230_ovl_01(void *, s32, s32);
s32 func_80040E88_ovl_01(void *, void *);
s32 func_8004279C_ovl_01(void *, s32, s32);

void func_80083800_ovl_01(s32 a, s32 b, s32 c)
{
  s16 x[4];
  s32 z[8];
  func_80082230_ovl_01(x, 0, 8);
  x[1] = a;
  func_80040E88_ovl_01(x, z);
  func_8004279C_ovl_01(z, b, c);
}
