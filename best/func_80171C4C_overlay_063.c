/* identical to func_801650BC_ovl_35 (matched), with its names changed by decompdecomp */
extern volatile u32 D_80166764_ovl_35[];
extern void func_80035AAC_ovl_01_108(void *);

void func_80171C4C_overlay_063(void *p) {
    u8 *a = p;
    s32 i = a[5] - 1;
    ((s16 *)(a + 0x64))[0] = 0;
    ((void (*)(void))D_80166764_ovl_35[i])();
    func_80035AAC_ovl_01_108(p);
}
