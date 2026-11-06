extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(s32, s32, s32, s32);

void func_801626F4_ovl_28(void *p) {
    union { u64 q; struct { u32 lo; u32 hi; } w; } b;
    u32 off = 0x18000;
    u32 base;

    b.w.lo = (u32)D_800C7650_ovl_01;
    base = off + b.w.lo;
    do { func_80032EA4_ovl_01((s32)p, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x400); } while (0);
    func_80032EA4_ovl_01((s32)p, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x320);
}
