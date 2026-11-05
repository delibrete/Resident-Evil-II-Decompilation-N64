extern u8 D_801443E8[];
extern s32 func_800AE654_ovl_01(s32, s32, s32, s32);
extern s32 func_800AE140_ovl_01(void *);
extern s32 func_800A5830_ovl_01(s32);
extern void func_800A5A6C_ovl_01(s32);
extern void func_800AE478_ovl_01(void *, s32);

s32 func_800AED60_ovl_01(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0;
    u8 *temp_s1;
    u8 *base;
    temp_s2 = arg0 & 0xFF;
    temp_v0 = func_800AE654_ovl_01(temp_s2, 0xFF, 0xFFFF, 1);
    if (temp_v0 != -1) {
        base = D_801443E8;
        temp_s1 = base + temp_v0 * 0x1A0;
        *(s8 *)(temp_s1 + 0xBD) = 1;
        *(s8 *)(temp_s1 + 0x4C) = 1;
        func_800AE140_ovl_01(temp_s1);
        *(s32 *)(temp_s1 + 0x60) = temp_v0 | ~0xFF;
        if (func_800A5830_ovl_01(temp_v0) & 0xFF) {
            func_800A5A6C_ovl_01(temp_v0);
        }
        *(s32 *)temp_s1 = 0;
        func_800AE478_ovl_01(temp_s1, temp_s2);
    }
    return temp_v0;
}
