extern u8 D_80162FA0_overlay_025[];
extern u8 D_800E10F8[];
extern s32 func_80033054_ovl_01(void *, void *, s32);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_801623B8_ovl_25(void *arg0) {
    u8 *p = (u8 *)arg0;
    U64 b;
    u8 *tbl;
    s32 r;
    s32 t;
    s32 *pad = &t;
    (void)pad;
    b.w.lo = (u32)D_80162FA0_overlay_025;
    tbl = (u8 *)b.w.lo;
    r = func_80033054_ovl_01((void*)0x384,
             (u8 *)*(u32 *)(p + 0x234) + tbl[(*(u16 *)(p + 0x1AA) & 1) * 7 + 2] * 0x178 + 0x4C,
             (s32)D_800E10F8);
    if ((r << 16) != 0)
        *(u32 *)(p + 4) = 0x01030000;
}
