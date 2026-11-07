extern volatile u32 jtbl_801749E8_overlay_048[];
void func_801712D8_overlay_045(void *arg0) {
    volatile u32 *base = jtbl_801749E8_overlay_048;
    u32 i = *((u8 *)arg0 + 0x2BE);
    ((void (*)(void))base[i])();
}
