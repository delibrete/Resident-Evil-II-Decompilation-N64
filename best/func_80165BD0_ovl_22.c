extern volatile u32 D_80166814_overlay_022[];

void func_80165BD0_ovl_22(u8 *p) {
    *(u32 *)(p + 4) = *(u32 *)(p + 0x298);
    if (*(u8 *)(p + 4) == 1) {
        ((void (*)(void))D_80166814_overlay_022[p[5]])();
    } else {
        *(u32 *)(p + 4) = 0x01010000;
    }
}
