s32 *func_800AB3DC_overlay_001(void *, void *, u16, s32, void *);
extern s32 D_800AE0E4_overlay_001;
extern s32 D_8014E080;
extern u32 D_8014E084;
extern s32 D_8014E088;
extern s32 *D_8014E090;
extern u16 D_801535B0[];
extern u8 D_80153DB0[];

s32 func_800AD938_ovl_01(s16 arg0)
{
    s32 *temp_v0;
    u16 temp_v1;
    u32 temp_a0;
    char *buf;

    temp_a0 = (u32) (arg0 & 0xFFFF) >> 6;
    D_8014E084 = temp_a0;
    if (D_801535B0[temp_a0 * 2] != 0) {
        temp_v1 = D_801535B0[temp_a0 * 2 + 1];
        buf = (char *) &D_8014E088;
        *((s16 *) (buf + 4)) = arg0;
        D_8014E080 = (s32) temp_v1;
        temp_v0 = func_800AB3DC_overlay_001(buf, &D_80153DB0[temp_v1 * 8], D_801535B0[temp_a0 * 2], 8, &D_800AE0E4_overlay_001);
        D_8014E090 = temp_v0;
        if (temp_v0 != NULL) {
            return *temp_v0;
        }
    }
    return 0;
}
