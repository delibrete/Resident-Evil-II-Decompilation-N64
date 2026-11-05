extern u8 D_80143FB0_ovl_01[];

s32 func_800A8488_ovl_01(u8 *arg0) {
    u8 *base;
    u32 k;
    s32 off;
    base = D_80143FB0_ovl_01;
    k = arg0[0x4B];
    if (k == 0xFF) {
        off = 0x20;
    } else {
        off = k << 2;
    }
    return *(s32 *)(base + off);
}
