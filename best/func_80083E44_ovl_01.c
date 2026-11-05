extern float D_800B8940_overlay_001;
extern float D_800B8944_overlay_001;
extern float D_800B8948_overlay_001;
extern float D_800B894C_overlay_001;

float func_800482C4_ovl_01(float x) {
    if (0.0f < x) {
        return D_800B894C_overlay_001 - D_800B8948_overlay_001 / x;
    }
    return D_800B8944_overlay_001 - D_800B8940_overlay_001 / x;
}

s32 func_80083E44_ovl_01(s32 *p, s16 *r) {
    if ((u16)r[2] < (u32)(p[0] - r[0])) {
        return 0;
    }
    if ((u16)r[3] < (u32)(p[2] - r[1])) {
        return 0;
    }
    return 1;
}

s32 func_800608A8_ovl_01(s32 a0, s32 a1, s32 a2, s16 *a3, u32 a4) {
    u32 t = (u32)(a0 - a1 + a2) & 0xFFF;
    s32 x = (s16)a2 * 2;
    a1 = a1 - a2;
    if ((s32)t < x) {
        *a3 = (s16)a0;
        return 0;
    }
    if (t < 0x801) {
        *a3 = (s16)(a1 + x);
        return 1;
    }
    return 0;
}
