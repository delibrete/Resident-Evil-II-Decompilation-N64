/* identical to func_8016248C_ovl_31 (matched), with its names changed by decompdecomp */
extern s32 D_8016C380_ovl_31;
void func_8016F01C_overlay_059(void *a) {
    volatile s32 *base = &D_8016C380_ovl_31;
    u32 i = (*(u16 *)((char *)a + 0x1aa) & 0x3f);
    ((void (*)(void))base[i])();
    if ((*(u16 *)((char *)a + 0x2b6) & 0x180) == 0x100)
        *(s32 *)((char *)a + 4) = 0x3000000;
}
