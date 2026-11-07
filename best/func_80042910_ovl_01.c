s32 func_80009470(void *, void *, f32, f32, f32, f32, f32);
f32 func_80047DA0_ovl_01(f32, f32, s16 *);
extern f64 D_800B87F0_ovl_01;
extern f64 D_800B87F8_ovl_01;
extern f32 D_800B8800_ovl_01;
extern f32 D_800B8804_ovl_01;
extern f32 D_800B8808_ovl_01;
extern f32 D_800B880C_ovl_01;
extern f32 D_800B8810_ovl_01;
extern f32 D_800EFBE4_ovl_01;
extern f32 D_800EFBE8_ovl_01;
extern f32 D_800EFBEC_ovl_01;
extern s16 D_800EFBF0_ovl_01;
extern s16 D_800EFBF2_ovl_01;
extern f32 D_800EFBF4_ovl_01;
extern f32 D_800EFBF8_ovl_01;
extern s32 D_801314F0_ovl_01;
void func_80042910_ovl_01(s16 arg0)
{
  f32 temp_fv0_2;
  f64 temp_ft1;
  f64 temp_fv0;
  s32 temp_v1;
  temp_v1 = arg0;
  temp_v1 = temp_v1 << 7;
  temp_fv0 = (f64) temp_v1;
  temp_ft1 = D_800B87F0_ovl_01 - temp_fv0;
  D_800EFBF0_ovl_01 = arg0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x98)) = temp_v1;
  D_800EFBF4_ovl_01 = (f32) ((temp_fv0 + D_800B87F0_ovl_01) / temp_ft1);
  D_800EFBF2_ovl_01 = (arg0 * 0xF0) / 224;
  D_800EFBF8_ovl_01 = (f32) ((temp_fv0 * D_800B87F8_ovl_01) / temp_ft1);
  temp_fv0_2 = func_80047DA0_ovl_01(D_800EFBEC_ovl_01 / ((f32) arg0), D_800B8800_ovl_01, &D_800EFBF2_ovl_01);
  *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1B8)) = (f32) (((f32) (*((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x98)))) * D_800B8804_ovl_01);
  *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1BC)) = (f32) (D_800EFBE8_ovl_01 / D_800B8808_ovl_01);
  *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1B4)) = (f32) D_800B880C_ovl_01;
  *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1B0)) = (f32) (temp_fv0_2 * D_800B8810_ovl_01);
  func_80009470((&D_801314F0_ovl_01) + 0xB0, (&D_801314F0_ovl_01) + 0x1C0, *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1B0)), *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1BC)), D_800B880C_ovl_01, *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1B8)), D_800EFBE4_ovl_01);
}

