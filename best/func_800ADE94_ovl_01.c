s32 *func_800AB3DC_ovl_01(void *, void *, s32, s32, void *);
extern s8 D_800AE104_ovl_01;
extern s8 D_8014E0C8_ovl_01;
extern s32 *D_8014E0D0_ovl_01;
extern s32 D_8014E170_ovl_01;
extern s8 D_8014E180_ovl_01;

s32 func_800ADE94_ovl_01(s16 arg0)
{
    s8 *p = &D_8014E0C8_ovl_01;
    s32 *temp_v0;

    *(s16 *)(p + 4) = arg0;
    temp_v0 = func_800AB3DC_ovl_01(p, &D_8014E180_ovl_01, D_8014E170_ovl_01, 8, &D_800AE104_ovl_01);
    D_8014E0D0_ovl_01 = temp_v0;
    if (temp_v0 != NULL) {
        return *temp_v0;
    }
    return 0;
}
