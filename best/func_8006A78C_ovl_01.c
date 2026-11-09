typedef struct { s16 a, b, c, d; } Quad;
extern Quad D_800B92C8_overlay_001;
extern void func_8008386C_overlay_001(s32, s32, void *, void *);

s32 func_8006A78C_ovl_01(s32 arg0) {
    Quad v;
    s32 s = 0;
    s32 t;
    v = D_800B92C8_overlay_001;
    func_8008386C_overlay_001(0, arg0, &v, &v);
    t = v.a;
    if (t < 0) {
        t = -t;
    }
    if (t >= 0x4001) {
        s = 1;
    }
    t = v.c;
    if (t < 0) {
        t = -t;
    }
    if (t >= 0x4001) {
        s = 2;
    }
    return s;
}
