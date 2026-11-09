extern float D_800B8940_overlay_001;
extern float D_800B8944_overlay_001;
extern float D_800B8948_overlay_001;
extern float D_800B894C_overlay_001;
float func_800482C4_ovl_01(float x);
s32 func_80083E44_ovl_01(s32 *p, s16 *r)
{
  if (((u16) r[2]) < ((u32) (p[0] - r[0])))
  {
    return 0;
  }
  if (((u16) r[3]) < ((u32) (p[2] - r[1])))
  {
    return 1;
  }
  return 0;
}

s32 func_800608A8_ovl_01(s32 a0, s32 a1, s32 a2, s16 *a3, u32 a4);
