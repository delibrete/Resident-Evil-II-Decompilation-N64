extern volatile s32 D_800C5268_ovl_01,D_800C7618_ovl_01,D_800C7620_ovl_01;
extern void func_800879D0_ovl_01(s32);
void func_80025EF0(void) {
    volatile s32 *p = &D_800C7618_ovl_01;
    volatile s32 *q = &D_800C7620_ovl_01;
    q[2] = 0;
    p[0] = 2;
    p[1] = (s32)q;
    q[0] = D_800C5268_ovl_01;
    func_800879D0_ovl_01((s32)p);
}
