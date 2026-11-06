extern u8 *D_80114ECC_ovl_01;

void func_8006D60C_ovl_01(u8 *arg0, s32 arg1) {
    u8 *tbl = D_80114ECC_ovl_01;
    u16 v = *(u16 *)(tbl + arg1 * 2);
    *(u8 **)(arg0 + 0x140) = arg0 + ((*(s8 *)(arg0 + 0x2) << 5) + 0xC0);
    *(s8 *)(arg0 + 0x1) = 1;
    *(s8 *)(arg0 + 0x0) = 0;
    *(s8 *)(arg0 + 0x4) = -1;
    *(s8 *)(arg0 + 0x8) = -1;
    *(u8 **)(arg0 + 0x1C) = tbl + v;
}
