extern s32 func_800439B8_ovl_01(s32 arg0, void *arg1, s32 arg2, s32 arg3);

typedef struct { s32 w[5]; } Blk;

s32 func_80043960_ovl_01(s32 arg0, s32 *arg1) {
    Blk buf;
    u16 *h;

    buf = *(Blk *)arg1;
    h = (u16 *)&buf.w[4];
    h[1] = 8;
    h[0] = 8;
    return func_800439B8_ovl_01(arg0, &buf, 0, 0);
}
