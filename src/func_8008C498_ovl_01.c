extern u8 D_800C7650_ovl_01[];
extern u8 D_800E7650_ovl_01[];

s32 func_8008C498_ovl_01(s32 arg0) {
    s32 v1 = 0;
    s32 a2 = v1;
    u32 t0 = 0x20000;
    u8 *a3 = D_800E7650_ovl_01;
    u8 *a1 = D_800C7650_ovl_01;

    for (;;) {
        if ((a1 + t0)[0x1818] == 0) {
            a2++;
            if (arg0 == 0) {
                return v1;
            }
        }
        v1++;
        if ((u32)v1 >= a3[0x1488]) {
            break;
        }
        a1 += 4;
    }
    if (arg0 == 0) {
        return -1;
    }
    return a2;
}
