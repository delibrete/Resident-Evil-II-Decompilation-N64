extern u32 D_8016307C_overlay_025[];
void func_80162BA8_ovl_25(void *arg0) {
    u32 *t = D_8016307C_overlay_025;
    u8 idx = ((u8*)arg0)[0x26e];
    u32 *u = t + idx;
    ((void(*)(void))*(volatile u32*)u)();
}
