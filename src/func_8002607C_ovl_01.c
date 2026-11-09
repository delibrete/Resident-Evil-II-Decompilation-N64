extern s32 D_800C4E68_overlay_001;
extern s32 D_800C4EB8_overlay_001;
extern s32 D_800C5688_overlay_001;
extern u8 D_800C7650_overlay_001;
extern s32 D_8010B698_overlay_001;
extern s32 D_80113778_overlay_001;
void func_8002607C_ovl_01(s32 arg0) {
    u8 *base;
    u8 *p;
    s32 off;
    s32 value;
    D_800C5688_overlay_001 = arg0;
    base = &D_800C7650_overlay_001;
    off = 0x20000;
    p = base + off;
    value = *(s16 *)(p + 0x1270) * (D_80113778_overlay_001 << 1);
    D_800C4E68_overlay_001 = arg0 - value;
    D_800C4EB8_overlay_001 = D_8010B698_overlay_001;
}
