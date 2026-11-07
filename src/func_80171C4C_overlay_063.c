typedef void (*Fn)(void);
extern volatile Fn D_801732F4_overlay_063[];
extern void func_80035AAC_ovl_01_108(void *);
void func_80171C4C_overlay_063(void *p) {
    u8 *a = p;
    s32 i = a[5] - 1;
    *(s16 *)(a + 0x64) = 0;
    D_801732F4_overlay_063[i]();
    func_80035AAC_ovl_01_108(p);
}
