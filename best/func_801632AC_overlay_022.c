typedef void (*Fn)(void *, void *, void *);
extern Fn D_801667CC_overlay_022[];
extern Fn D_80166814_overlay_022[];
extern void func_80036C74_ovl_01(void *, s32);

void func_801632AC_overlay_022(u8 *arg0, void *arg1, void *arg2) {
    volatile Fn *t1 = D_801667CC_overlay_022;
    volatile Fn *t2 = D_80166814_overlay_022;
    t1[arg0[5]](arg0, arg1, arg2);
    t2[arg0[5]](arg0, arg1, arg2);
    func_80036C74_ovl_01(arg0, *(s32 *)(arg0 + 0x2B4));
    *(s32 *)(arg0 + 0x2B4) = *(s32 *)(arg0 + 4);
}
