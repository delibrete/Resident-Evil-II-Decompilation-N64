extern u8 D_80147A40[];
s32 func_800A8304_ovl_01(s32 arg0) {
    u8 *p;
    p = D_80147A40;
    p += (arg0 & 0xFF) * 0x28;
    if (*(u8 *)(p + 0x14) == 4)
        goto decomp_shared_return;
    if (*(s32 *)(p + 0xC) == 0)
        return 0;
    if (*(s32 *)(p + 8) < 0)
        return 1;
decomp_shared_return:
    return 0;
}
