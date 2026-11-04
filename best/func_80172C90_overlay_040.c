/* identical to func_80166100_ovl_12 (matched), with its names changed by decompdecomp */
void func_80172648_overlay_040(void);
s32 func_80033634_ovl_01(void);
void func_80173490_overlay_040(void *, s32, s32);

void func_80172C90_overlay_040(void *arg0) {
    func_80172648_overlay_040();
    if (*(u8 *)((u8 *)arg0 + 0x26E) < 3) {
        u32 i = 0;
        u32 val = 0x3F2F;
        s32 off = i;
        do {
            i++;
            *(u32 *)(*(u8 **)((u8 *)arg0 + 0x234) + off + 0x60) = val;
            off += 0x178;
        } while (i < 0x11);
        *(u8 *)((u8 *)arg0 + 0x2BB) = 2;
        func_80173490_overlay_040(arg0, func_80033634_ovl_01() & 7, 9);
        func_80173490_overlay_040(arg0, (func_80033634_ovl_01() & 7) | 8, 0xA);
    }
}
