extern u8 D_801362B0_ovl_01;
extern u8 D_801443E8;
s32 func_800AF074_ovl_01(void);

s32 func_800A81E8_ovl_01(void)
{
    s32 a0;
    s32 s0 = -1;
    s32 sentinel;
    u8 *p;
    if (D_801362B0_ovl_01) {
        a0 = func_800AF074_ovl_01();
        sentinel = s0;
        if (a0 != -1) {
            do {
                p = &D_801443E8 + (a0 & 0xFF) * 416;
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
