extern u8 D_800C7650_ovl_01;
typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
void func_80166AE0_ovl_12(void *arg0) {
    U64 b;
    u32 off;
    u8 *base;
    u8 *p = (u8 *)arg0;
    off = 0x18000;
    b.w.lo = (u32)&D_800C7650_ovl_01;
    base = (u8 *)(off + b.w.lo);
    if (base[0x1C22] != p[0x1A2]) {
        p[5] = 9;
        *(u16 *)(p + 6) = 0;
        *(u16 *)(base + 0x1A78) &= (u16)~0x20;
    }
}
