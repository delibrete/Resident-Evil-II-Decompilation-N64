extern u16 func_800B6408_ovl_01[];

void func_800B6354_ovl_01(s16 *arg0, s32 arg1, s32 arg2, s16 *arg3) {
    s32 t3;
    u16 scale;
    s32 i;
    u16 *p;
    s16 *src;
    s16 *dst;

    t3 = arg0[0xB3];
    if (arg1 >= 0x28 && arg1 <= 0x78) {
        t3 = arg1;
    }
    arg0[0xB3] = t3;

    scale = func_800B6408_ovl_01[arg2];

    p = (u16 *)arg0;
    for (i = 0x77; i >= 0; i--) {
        *p = *(u16 *)((u8 *)p + 0x50);
        p++;
    }

    dst = arg0 + 0x78;
    src = arg0 - t3 + 0x78;
    for (i = 0x27; i > 0; i--) {
        *dst = (s16)(((*src * scale) + 0x4000) >> 15) + *arg3;
        arg3++;
        dst++;
        src++;
    }
}
