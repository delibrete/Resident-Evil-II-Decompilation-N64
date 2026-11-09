extern u8 D_80112794_overlay_001;
extern u8 D_80112908_overlay_001[];
extern s32 D_801129BC_overlay_001;
extern s32 D_80139E00;

void func_8006BDD4_ovl_01(void) {
    s32 v;
    D_80112908_overlay_001[0] = 8;
    D_80112908_overlay_001[1] = 8;
    D_80112908_overlay_001[2] = 8;
    D_80112908_overlay_001[3] = 8;
    D_80112908_overlay_001[6] = 8;
    D_80112908_overlay_001[4] = 0;
    D_80112908_overlay_001[5] = 0;
    D_801129BC_overlay_001 = 0;
    v = D_80139E00;
    v = v | 1;
    v = v & ~2;
    v = v & ~0x10;
    v = v & ~0x20;
    D_80139E00 = v;
    D_80112794_overlay_001 &= 0xF7;
}
