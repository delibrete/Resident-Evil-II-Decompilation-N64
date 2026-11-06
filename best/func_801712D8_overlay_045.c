/* identical to func_801649F8_ovl_17 (matched), with its names changed by decompdecomp */
extern volatile u32 D_80167E70_ovl_17[];
void func_801712D8_overlay_045(void *arg0) {
    volatile u32 *base = D_80167E70_ovl_17;
    u32 i = *((u8 *)arg0 + 0x2BE);
    ((void (*)(void))base[i])();
}
