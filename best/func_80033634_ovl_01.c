extern u8 D_800C7650_overlay_001[];

u8 func_80033634_ovl_01(void)
{
    volatile s32 off = 0x18000;
    u8 *p = D_800C7650_overlay_001 + off;
    u32 hi;
    u32 lo;
    u32 v;

    v = *(u16 *)(p + 0x272);
    hi = (v >> 7) & 0xFF;
    lo = (v + hi) & 0xFF;
    *(u32 *)(p + 0x270) = lo | (hi << 8);
    return lo;
}
