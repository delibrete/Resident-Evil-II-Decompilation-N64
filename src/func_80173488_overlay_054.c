/* identical to func_801668F8_ovl_26 (matched), with its names changed by decompdecomp */
static __inline__ u32 __repair_inline(u32 a) { return a; }
s32 func_80040E88_ovl_01(void *, void *);
void func_80173488_overlay_054(u8 *obj) {
    u8 *base;
    u32 amount;
    s32 neg;
    s16 *p;

    if (*(u8 *)(obj + 0x2B8) != 0) {
        base = *(u8 **)(obj + 0x234);
        amount = __repair_inline(*(u16 *)(obj + 0x2BA));
        neg = -amount;
        *(s16 *)(base + 0x1084) = neg;
        func_80040E88_ovl_01(base + 0x1080, base + 0x1030);
        p = (s16 *)(base + 0x11A0);
        p[0x2D] = amount;{ u32 __repair_value; __repair_value = amount * 2; amount = __repair_value; }
        p[0x2E] = amount;
        func_80040E88_ovl_01(base + 0x11F8, base + 0x11A8);
        p = (s16 *)(base + 0x1318);
        p[0x2D] = neg;
        p[0x2E] = amount;
        func_80040E88_ovl_01(base + 0x1370, base + 0x1320);
    }
}
