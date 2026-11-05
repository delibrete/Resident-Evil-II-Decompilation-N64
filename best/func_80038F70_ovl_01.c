extern u8 D_800EEB4C_ovl_01[];

s32 func_80038F70_ovl_01(s32 arg0) {
    u8 *a2 = D_800EEB4C_ovl_01;
    u8 *a1 = D_800EEB4C_ovl_01 - 0x2E80 + 0x7C;
    u8 *v1 = D_800EEB4C_ovl_01 - 0x2E68 + 0x7C;
    s32 a0;

    do {
        if (v1[5] == arg0) {
            v1[-0x17] = 0;
            a1[0] = 0;
            *(u16 *)v1 = 0;
        }
        a1 += 0x7C;
        v1 += 0x7C;
    } while (a1 != a2);

    a2 = D_800EEB4C_ovl_01 - 0x2E80 + 0x7C;
    a1 = D_800EEB4C_ovl_01 - 0x2E68 + 0x7C;
    do {
        a0 = 1;
        if (a1[4] == 0) {
            a0 = 1;
        } else if (a1[4] != 5) {
            a0 = 1;
        } else if (a1[6] == 2) {
            a0 = 0;
        } else if (a1[6] == 3) {
            a0 = 0;
        }
        if (a0 != 0) {
            a1[-0x17] = 0;
            a2[0] = 0;
            *(u16 *)a1 = 0;
        }
        a2 += 0x7C;
        a1 += 0x7C;
    } while (a2 != D_800EEB4C_ovl_01);
    return 0;
}
