/* identical to func_80166458_overlay_012 (matched), with its names changed by decompdecomp */
/* identical to func_80172FE8_overlay_040 (matched), with its names changed by decompdecomp */
/* identical to func_80172FE8_overlay_040 (matched), with its names changed by decompdecomp */
extern s32 func_800347E0_ovl_01(void *, s32);
void func_80172FE8_overlay_040(u8 *p) {
    u8 mode = 2;
    *(u8 *)(p + 0x25D) = mode;
    func_800347E0_ovl_01(p, *(s16 *)(p + 0x66));
    *(u8 *)(p + 0x25D) = 3;
    func_800347E0_ovl_01(p, *(s16 *)(p + 0x66));
    *(u8 *)(p + 0x25D) = mode;
}
