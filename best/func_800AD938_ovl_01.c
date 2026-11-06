typedef struct { u16 a; u16 b; } Ent8;
typedef struct { u16 a; u16 b; } Ent4;

extern Ent4 D_801535B0_ovl_01[];
extern Ent8 D_80153DB0_ovl_01[];
extern s32 D_8014E080_ovl_01;
extern u32 D_8014E084_ovl_01;
extern u8 D_8014E088_ovl_01[];
extern s32 *D_8014E090_ovl_01;
extern s32 D_800AE0E4_ovl_01(void);
extern s32 *func_800AB3DC_ovl_01(void *a, void *base, u16 n, s32 stride, s32 cmp);

s32 func_800AD938_ovl_01(s16 arg0) {
    Ent4 *e;
    s32 *r;
    u32 idx = (u16)arg0 >> 6;

    D_8014E084_ovl_01 = idx;
    e = &D_801535B0_ovl_01[idx];
    if (e->a != 0) {
        *(s16 *)(D_8014E088_ovl_01 + 4) = arg0;
        D_8014E080_ovl_01 = e->b;
        r = func_800AB3DC_ovl_01(D_8014E088_ovl_01, &D_80153DB0_ovl_01[e->b], e->a, 8, (s32)D_800AE0E4_ovl_01);
        D_8014E090_ovl_01 = r;
        if (r != NULL) {
            return *r;
        }
    }
    return 0;
}
