typedef void (*fn_s16)(s16);
extern fn_s16 D_fn_ptr;

void func_800B6728_ovl_01(u8 *a0) {
    s16 *t0;
    s16 *t1;
    if (*(s16 *)(a0 + 0x188) != 0) {
        t0 = (s16 *)(a0 + 0x178);
        t1 = (s16 *)(a0 + 0x168);
        do { D_fn_ptr(t1[0]); } while (0);
        D_fn_ptr(t1[1]);
    }
}
