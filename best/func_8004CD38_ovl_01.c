extern u8 D_8010B280_ovl_01[];
s32 func_80001180(s32 a);
s32 func_8004CC24_ovl_01(s32 a);
void func_8004CE70_ovl_01(s32 a);

void func_8004CD38_ovl_01(s32 arg0) {
    u8 *base;
    u8 *s0;

    base = D_8010B280_ovl_01;
    s0 = base + arg0 * 8;
    func_8004CC24_ovl_01(func_80001180(s0[0]));
    func_8004CE70_ovl_01(*(s32 *)(s0 + 4));
}
