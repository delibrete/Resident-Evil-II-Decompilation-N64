extern u8 D_8010B2C8_ovl_01[];
extern u8 D_801479F8_ovl_01;
extern u8 D_80148180_ovl_01[];

void func_8004CEF4_ovl_01(s32 a0) {
    u8 *base;
    u16 *p;

    base = D_8010B2C8_ovl_01;
    p = (u16 *)(base + a0 * 456);
    *p = *p & 0xFFBF;
}

void func_800A94E0_ovl_01(void) {
    u8 *cnt;
    s32 i;
    u8 *p;

    cnt = &D_801479F8_ovl_01;
    if (*cnt != 0) {
        i = 0;
        p = D_80148180_ovl_01;
        do {
            *p = 0;
            i++;
            p += 0x18;
        } while (i < *cnt);
    }
}
