extern void (*D_80178F10_overlay_059[])(void);
void func_8016F01C_overlay_059(void *a) {
    D_80178F10_overlay_059[(*(u16 *)((char *)a + 0x1aa)) & 0x3f]();
    if ((*(u16 *)((char *)a + 0x2b6) & 0x180) == 0x100)
        *(u32 *)((char *)a + 4) = 0x03000000;
}
