/* identical to func_80163C10_ovl_27 (matched), with its names changed by decompdecomp */
extern u8 D_80163DE8_ovl_27[];
extern u8 D_80163E54_ovl_27[];
s32 func_800362C0_ovl_01(void *arg0, void *arg1, void *arg2);
void func_800366C4_ovl_01(void *arg0);

void func_801707A0_overlay_055(void *arg0) {
    u8 *p = (u8 *)arg0;

    if (p[0x2CC] == 0) {
        void *q = *(void **)(p + 0x234);
        func_800362C0_ovl_01(arg0, q, D_80163DE8_ovl_27);
        func_800362C0_ovl_01(arg0, q, D_80163E54_ovl_27);
        do { func_800366C4_ovl_01(arg0); } while (0);
    }
}
