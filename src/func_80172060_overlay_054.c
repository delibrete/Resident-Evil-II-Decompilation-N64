typedef void (*Fn26)(void *);
extern Fn26 volatile D_80173E54_overlay_054[];
s32 func_800347E0_ovl_01(void *arg0, s32 arg1);
void func_80035AAC_ovl_01_108(void *arg0);
void func_80172060_overlay_054(void *arg0) {
    u8 *p = (u8 *)arg0;
    u32 j = p[5] - 1;
    D_80173E54_overlay_054[j](arg0);
    func_800347E0_ovl_01(arg0, (s16)(*(u16 *)(p + 0x66) + (p[0x2CD] << 11)));
    func_80035AAC_ovl_01_108(arg0);
}
