extern s32 D_800E9098_overlay_001;
extern u8 D_8010BF78_overlay_001[];
extern u8 *D_8010BF40_overlay_001;
u32 func_80052F40_overlay_001(void *p);
u8 *func_80052F1C_overlay_001(void *p);

void func_80052C00_ovl_01(s32 a0, s32 a1) {
    s32 s2 = 1;
    u8 *s0;

    D_800E9098_overlay_001 = s2;
    s0 = D_8010BF78_overlay_001;
    if (func_80052F40_overlay_001(s0) < 0x20 && a0 != 0) {
        D_8010BF40_overlay_001 = func_80052F1C_overlay_001(s0);
        D_8010BF40_overlay_001[0] = s2;
        D_8010BF40_overlay_001[1] = a0 != 0;
        *(u16 *)(D_8010BF40_overlay_001 + 4) = a0;
        *(u16 *)(D_8010BF40_overlay_001 + 2) = a1;
        *(u16 *)(D_8010BF40_overlay_001 + 6) = 0;
    }
}
