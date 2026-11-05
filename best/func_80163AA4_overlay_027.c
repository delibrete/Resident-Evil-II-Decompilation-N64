void func_80163AA4_overlay_027(u8 *arg0, s32 arg1) {
    if (!(arg1 & 0x40)) {
        arg0[5] = arg1;
        *(u16 *)(arg0 + 6) = 0;
        return;
    }
    *(u32 *)(arg0 + 4) = 0x2000000 + ((arg1 & 0xF) << 16);
}
