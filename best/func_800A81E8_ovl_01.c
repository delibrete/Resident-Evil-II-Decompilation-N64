extern u8 D_801362B0_ovl_01;
extern u8 D_801443E8_ovl_01[];
s32 func_800AF074_ovl_01(void);

s32 func_800A81E8_ovl_01(void) {
    s32 s0;
    s32 a0;
    s32 sentinel;
    u8 *base;
    u8 *p;

    s0 = -1;
    if (D_801362B0_ovl_01) {
        a0 = func_800AF074_ovl_01();
        if (a0 != s0) {
            base = D_801443E8_ovl_01;
            sentinel = s0;
            do {
                p = base + ((a0 & 0xFF) * 416);
                if (*(s32 *)(p + 0x60) == a0) {
                    s0 = 0;
                    *(s32 *)(p + 0x24) |= 8;
                }
                a0 = *(s32 *)(p + 0x10);
            } while (a0 != sentinel);
        }
    }
    return s0;
}
