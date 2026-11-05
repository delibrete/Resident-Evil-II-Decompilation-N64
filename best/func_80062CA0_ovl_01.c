extern f32 D_8011113C_ovl_01;
extern f64 D_800B91A8_ovl_01;
extern f32 D_800B91B0_ovl_01;
extern f32 D_800EFBF4_ovl_01;
extern f32 D_800EFBF8_ovl_01;
extern f32 D_800B91B4_ovl_01;
extern s32 func_80062BB0_ovl_01(s32);

s32 func_80062CA0_ovl_01(f32 arg) {
    f32 a;
    f32 v;

    a = arg * D_8011113C_ovl_01;
    if ((f64)a < D_800B91A8_ovl_01) {
        a = D_800B91B0_ovl_01;
    }
    v = (-a * D_800EFBF4_ovl_01 + D_800EFBF8_ovl_01) / a;
    v = v * D_800B91B4_ovl_01 + D_800B91B4_ovl_01;
    return func_80062BB0_ovl_01((s32)v << 16 >> 13) & 0xFFFF;
}
