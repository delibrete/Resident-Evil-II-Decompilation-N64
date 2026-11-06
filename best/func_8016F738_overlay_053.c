/* identical to func_80162BA8_ovl_25 (matched), with its names changed by decompdecomp */
extern u32 D_8016FC0C_overlay_053[];
void func_8016F738_overlay_053(void *arg0) {
    u32 *t = D_8016FC0C_overlay_053;
    u8 idx = ((u8*)arg0)[0x26e];
    u32 *u = t + idx;
    ((void(*)(void))*(volatile u32*)u)();
}
