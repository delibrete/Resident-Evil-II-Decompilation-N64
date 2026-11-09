extern u8 *D_8010D8E0_ovl_01;

void func_80053D68_ovl_01(void) {
    u8 *p = D_8010D8E0_ovl_01;
    u8 *pa = p + 4;
    u8 *pv = p + 0x16C;
    u32 i = 0;

    do {
        *pa = 0x20;
        pa++;
        *pv = 0;
        pv++;
        i++;
    } while (i < 0x168);
    p[0x2D7] = 0;
    p[1] = 0;
    p[0] = 0;
}
