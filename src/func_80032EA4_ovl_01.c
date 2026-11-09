s32 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80032EA4_ovl_01(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    s32 diff;
    s32 d;
    s16 c;
    diff = func_80032D44_ovl_01(*(s16 *)(arg0 + 0x2A), *(s16 *)(arg0 + 0x32), arg1, arg2) - *(u16 *)(arg0 + 0x66);
    d = (arg3 + diff) & 0xFFF;
    c = arg3;
    if (d < c * 2) return 0;
    if ((u32)d < 0x801) return c;
    return -c;
}
