extern s32 func_80040BE4_ovl_01(s32);
extern s32 func_80060984_ovl_01(s32, s32);
typedef struct { s16 x; s16 y; s16 z; } V3;
void func_800608F4_ovl_01(V3 *a, V3 *b) {
    s32 s2;
    s32 d;
    s32 t;
    s2 = func_80060984_ovl_01(a->x, a->z);
    d = func_80040BE4_ovl_01(a->x * a->x + a->z * a->z);
    t = func_80060984_ovl_01(d, -a->y);
    b->x = 0;
    b->y = s2;
    b->z = (t - 0x400) & 0xfff;
}
