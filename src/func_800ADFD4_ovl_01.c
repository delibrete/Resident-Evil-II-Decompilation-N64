s32 func_800AB3DC_overlay_001(s16 *, s32, u16, s32, void *);
extern u8 D_800AE124_overlay_001[];
extern s16 D_8014E100;
extern s32 D_80157DB0;
extern u8 D_80157DC0[];

s32 func_800ADFD4_ovl_01(s16 arg0) {
    s32 i;
    s32 ret;
    u8 *p;

    D_8014E100 = arg0;
    ret = 0;
    for (i = 0; i < D_80157DB0; i++) {
        p = D_80157DC0 + i * 8;
        ret = func_800AB3DC_overlay_001(&D_8014E100, *(s32 *)(p + 4), *(u16 *)(p + 2), 0xC, D_800AE124_overlay_001);
        if (ret != 0) {
            return ret;
        }
    }
    return 0;
}
