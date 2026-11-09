extern u8 D_800C7650_ovl_01[];

s32 func_800656BC_ovl_01(s32 arg0, s32 arg1)
{
    u16 *tbl;
    u8 *t0;
    u8 *a2;
    u16 n;
    u16 lo;
    u16 lo2;

    tbl = *(u16 **)(*(u8 **)(D_800C7650_ovl_01 + 0x1827C) + 0x38);
    n = tbl[0];
    t0 = (u8 *)tbl + n * 12 + 4;
    a2 = (u8 *)tbl + n * 12 + 6 - 12;

    for (;;) {
        t0 -= 12;
        lo = *(u16 *)t0;
        n--;
        if ((u16)(arg0 - lo) < (u16)(*(u16 *)(a2 + 2) - lo)) {
            lo2 = *(u16 *)a2;
            if ((u16)(arg1 - lo2) < (u16)(*(u16 *)(a2 + 4) - lo2)) {
                return n;
            }
        }
        a2 -= 12;
        if (n == 0) {
            return 0xFF;
        }
    }
}
