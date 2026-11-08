extern s32 func_8004B0D8_overlay_001(void *);
extern s32 func_8004C4D0_overlay_001(void *);
extern s32 func_8004C940_overlay_001(void *, u32 *, u32 *);
extern u32 D_800FE218_overlay_001;
extern u32 D_800FE21C_overlay_001;
extern u32 D_800FE220_overlay_001;
extern u8 D_800FE228_overlay_001[];

void func_8004AFEC_ovl_01(void) {
    u8 *base = D_800FE228_overlay_001;
    u8 *p;
    u32 n;

    if (*(u8 *)(base + 0xD00C) & 0x80) {
        func_8004B0D8_overlay_001(base);
    }
    func_8004C4D0_overlay_001(base);
    n = (*(u32 *)(base + 0xC800) - (u32)base) / 20;
    if (D_800FE21C_overlay_001 < n) {
        D_800FE21C_overlay_001 = n;
    }
    p = base + 0x2800;
    n = (*(u32 *)(base + 0xC804) - (u32)p) / 20;
    if (D_800FE220_overlay_001 < n) {
        D_800FE220_overlay_001 = n;
    }
    p = base + 0xC808;
    n = *(u32 *)(base + 0xD008) - (u32)p;
    if (D_800FE218_overlay_001 < n) {
        D_800FE218_overlay_001 = n;
    }
    func_8004C940_overlay_001(p, &D_800FE218_overlay_001, &D_800FE21C_overlay_001);
}
