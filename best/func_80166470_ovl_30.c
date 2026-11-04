void func_80166470_ovl_30(volatile u8 *p) {
    s32 flags;
    s32 value;
    u8 byte;
    if (p[6] == 0) {
        p[6] = 1;
        p[0x2C4] = 1;
        p[0x2C5] = 1;
        value = *(volatile s32 *)p;
        *(volatile u32 *)(p + 0x1E8) = 0x10130F00;
        byte = p[0x25C];
        *(volatile s16 *)(p + 0x272) = 0;
        value |= 0x400;
        byte |= 1;
        *(volatile s32 *)p = value;
        p[0x25C] = byte;
    }
    flags = *(volatile s16 *)(p + 0x270);
    if (flags == 1) {
        p[5] = flags;
        *(volatile s16 *)(p + 6) = 0;
    }
}
