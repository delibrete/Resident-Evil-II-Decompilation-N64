/* identical to func_80162094_overlay_022 (matched), with its names changed by decompdecomp */
s32 func_80059E30_ovl_01(s32, s32);
extern u8 D_800E10D4_ovl_01[];
void func_80162614_overlay_023(s32 arg0) {
    s32 r = func_80059E30_ovl_01(arg0, 0);
    if (r & 2) *(s32 *)(D_800E10D4_ovl_01) = 0x03000000;
}
