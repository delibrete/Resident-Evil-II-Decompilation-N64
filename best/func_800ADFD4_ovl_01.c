extern s32 D_80157DB0_ovl_01;
extern u8 D_80157DC0_ovl_01[];
extern s16 D_8014E100_ovl_01;
extern u8 D_800AE124_ovl_01[];
s32 func_800AB3DC_ovl_01(s16 *a0, s32 a1, s32 a2, s32 a3, void *a4);

s32 func_800ADFD4_ovl_01(s16 arg0) {
    s32 i;
    u8 *s0;
    s32 *cnt;
    s16 *g;

    i = 0;
    cnt = &D_80157DB0_ovl_01;
    g = &D_8014E100_ovl_01;
    if (*cnt > 0) {
        *g = arg0;
        s0 = D_80157DC0_ovl_01;
        do {
            if (func_800AB3DC_ovl_01(g, *(s32 *)(s0 + 4), *(u16 *)(s0 + 2), 0xC, D_800AE124_ovl_01) != 0) {
                return 1;
            }
            i++;
            s0 += 8;
        } while (i < *cnt);
    }
    return 0;
}
