void func_8006CC88_ovl_01(u8 *arg0, s32 arg1) {
    s32 a3;
    s32 a2;

    a3 = *(s32 *)(arg0 + 0x1C);
    a2 = ((u32)a3 >> 16) + arg1;
    a2 = a2 % 65535;
    a3 = (a3 & 0xFFFF) + arg1;
    a3 = a3 % 65535;
    *(s32 *)(arg0 + 0x1C) = (a2 << 16) | a3;
}
