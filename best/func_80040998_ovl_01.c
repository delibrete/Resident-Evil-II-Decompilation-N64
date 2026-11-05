extern s32 D_800EEBD0_ovl_01[];
extern f32 D_800B8780_ovl_01;
extern f32 D_800B8784_ovl_01;
f32 func_80048310_ovl_01(f32);
void func_8003420C_ovl_01(void *p, s32 dx, s32 dy, s32 id);
s32 func_800408F0_ovl_01(s32 x);
s32 func_80040998_ovl_01(s32 x)
{
  int new_var;
  s32 *new_var2;
  s32 *new_var3;
  new_var2 = D_800EEBD0_ovl_01;
  new_var = 0x400;
  x &= 0xfff;
  if (x < new_var)
  {
    return D_800EEBD0_ovl_01[new_var - (x & 0x3ff)];
    do
    {
    }
    while (0);
  }
  if (x < 0x800)
  {
 do { } while (0);
  }
  new_var3 = D_800EEBD0_ovl_01;
  if (x < 0xc00)
  {
    return -new_var3[x & 0x3ff];
  }
  return new_var2[x & 0x3ff];
  return -new_var2[new_var - (x & 0x3ff)];
}

s32 func_80040A44_ovl_01(s32 a);
