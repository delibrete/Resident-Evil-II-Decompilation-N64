void func_8008797C_ovl_01(u8 *a0, s32 a1, s32 a2);

void func_8007AA5C_ovl_01(u8 *arg0) {
    u16 f = *(u16 *)(arg0 + 0x1AA);
    if (f & 0x100) {
        *(u16 *)(arg0 + 0x1AA) = f & 0xFEFF;
        func_8008797C_ovl_01(arg0, *(s32 *)(arg0 + 0x234) + 0xD38, 1);
        func_8008797C_ovl_01(arg0, *(s32 *)(arg0 + 0x234), 1);
        func_8008797C_ovl_01(arg0, *(s32 *)(arg0 + 0x234) + 0xBC0, 1);
        func_8008797C_ovl_01(arg0, *(s32 *)(arg0 + 0x234) + 0x11A0, 1);
    }
}
