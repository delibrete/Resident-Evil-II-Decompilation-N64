extern u8 D_80168FC0_overlay_028[];

void func_8016585C_ovl_28(void *a) {
    volatile u32 *base = (volatile u32 *)D_80168FC0_overlay_028;
    u8 index = ((u8 *)a)[0x2B4];
    u32 address = base[index];
    ((void (*)(void))address)();
}
