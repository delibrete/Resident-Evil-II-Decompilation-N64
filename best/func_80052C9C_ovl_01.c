extern s32 D_800E9098_ovl_01; extern s8 *D_8010BF44_ovl_01; extern s32 D_8010C0C4_ovl_01;
s8 *func_80052F1C_ovl_01(s32 *); u32 func_80052F40_ovl_01(s32 *);
void func_80052C9C_ovl_01(s32 a, s32 b, s32 c) {
    s32 *q = &D_8010C0C4_ovl_01;
    s32 one = 1;
    D_800E9098_ovl_01 = one;
    if (func_80052F40_ovl_01(q) < 32 && a) {
        D_8010BF44_ovl_01 = func_80052F1C_ovl_01(q);
        D_8010BF44_ovl_01[0] = one;
        D_8010BF44_ovl_01[1] = b;
        *(s16 *)(D_8010BF44_ovl_01 + 4) = a;
        *(s16 *)(D_8010BF44_ovl_01 + 2) = c;
        *(s16 *)(D_8010BF44_ovl_01 + 6) = 0;
    }
}
