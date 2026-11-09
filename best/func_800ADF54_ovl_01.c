extern u8 D_8014E0F0[];
extern u8 D_801529A0[];
extern u8 D_800AE114_ovl_01[];
extern s32 D_8014E0FC;
extern s32 D_80152990;
s32 func_800AB3DC_ovl_01(void *a, void *base, s32 n, s32 stride, void *cmp);

s32 func_800ADF54_ovl_01(s32 arg0, s16 *arg1) {
    u8 *p;
    s32 v;
    s32 buf[2];

    p = D_8014E0F0;
    *(s16 *)(p + 4) = arg0;
    v = func_800AB3DC_ovl_01(p, D_801529A0, D_80152990, 12, D_800AE114_ovl_01);
    D_8014E0FC = v;
    if (v != 0) {
        *arg1 = *(u16 *)(v + 6);
        return *(s32 *)D_8014E0FC;
    }
    return 0;
}
