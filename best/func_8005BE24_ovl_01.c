extern s8 D_80110EA4_ovl_01[];
extern s16 D_80110E1C_ovl_01[];

void func_8005BE24_ovl_01(u8 *arg0, s32 arg1, s16 arg2) {
    s32 t0;
    s32 t1;
    s32 r;
    s32 off;
    s32 k;
    u8 *tab;
    s32 flag;

    t1 = arg1;
    tab = (u8 *)D_80110E1C_ovl_01;
    off = ((s32)arg2 << 3) - 8;
    t0 = *(s32 *)arg0 & 0x1FFFFFFF;
    k = D_80110EA4_ovl_01[arg0[8]];
    *(s32 *)arg0 = t0;
    r = ((*(s16 *)(tab + (k + 2) * 2 + off) + *(s32 *)(arg0 + 0x2C)) * *(s16 *)(arg0 + 0x27A)) >> 12;
    if (t1 < r + *(s16 *)(tab + off)) {
        flag = 0x80000000;
    } else if (r + *(s16 *)(tab + off + 2) < t1) {
        flag = 0x20000000;
    } else {
        flag = 0x40000000;
    }
    *(s32 *)arg0 = t0 | flag;
}
