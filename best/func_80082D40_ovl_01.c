extern u8 D_801314F0_ovl_01[];
void func_80082D40_ovl_01(s32 *a, s32 *b) {
    volatile s32 *p = (volatile s32 *)(D_801314F0_ovl_01 + 0x80);
    a[0] = p[0];
    a[1] = p[1];
    a[2] = p[2];
    b[0] = p[3];
    b[1] = p[4];
    b[2] = p[5];
}
