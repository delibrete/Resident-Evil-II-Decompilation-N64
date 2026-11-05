extern u8 D_8010B280_ovl_01[];
s32 func_80001180(s32 a);
s32 func_8004CC24_ovl_01(s32 a);

void func_8004CC8C_ovl_01(s32 arg0) {
    u8 *base;
    u8 *s0;
    s32 b;
    void (*fp)(void);

    base = D_8010B280_ovl_01;
    s0 = base + arg0 * 8;
    b = s0[0];
    func_8004CC24_ovl_01(func_80001180(b));
    fp = *(void (**)(void))(s0 + 4);
    fp();
}
