extern u8 D_801326C8_ovl_01;
extern u8 D_801326CA_ovl_01;
extern u8 D_801326CB_ovl_01;
s32 func_800276B4_ovl_01(s32 a);
void func_80027530_ovl_01(s32 a, s32 b, s32 c, s32 d);
void func_8002751C_ovl_01(s32 a, s32 b);

void func_8009CDFC_ovl_01(void) {
    u8 *p = &D_801326C8_ovl_01;
    if (p[0] & 1) {
        if (func_800276B4_ovl_01(D_801326CB_ovl_01)) {
            D_801326CA_ovl_01 = 1;
            p[0] ^= 1;
        }
    } else {
        func_80027530_ovl_01(D_801326CB_ovl_01 | 0x200, -0x100, 7, 1);
    }
    func_8002751C_ovl_01(5, 0);
    D_801326CA_ovl_01 = 0;
    p[0] |= 1;
}
