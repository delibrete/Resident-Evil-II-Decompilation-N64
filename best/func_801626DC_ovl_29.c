extern u8 D_800C7650_ovl_01[];
extern s32 func_80032EA4_ovl_01(s32, s32, s32, s32);

void func_801626DC_ovl_29(void *arg0) {
    union { u64 q; struct { u32 lo; u32 hi; } w; } b;
    u32 off = 0x18000;
    u32 base;

    b.w.lo = (u32)D_800C7650_ovl_01;
    base = off + b.w.lo;
    func_80032EA4_ovl_01((s32)arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x400);
    func_80032EA4_ovl_01((s32)arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x320);
    *(u8 *)((u8 *)arg0 + 5) = 1;
}
