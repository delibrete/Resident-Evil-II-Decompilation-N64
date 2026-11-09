s32 func_8004F7A4_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 dx;
    s32 dy;
    s32 x;
    s32 y;
    s32 d;
    s32 n;

    dx = *(s32 *)((u8 *)arg0 + 0x0) - *(s32 *)((u8 *)arg1 + 0x120);
    dy = *(s32 *)((u8 *)arg0 + 0x8) - *(s32 *)((u8 *)arg1 + 0x128);
    x = *(u16 *)((u8 *)arg1 + 0x12C) + arg2;
    y = *(u16 *)((u8 *)arg1 + 0x12E) + arg2;
    if ((u32)(x * 2) < (u32)(dx + x)) {
        return 0;
    }
    if ((u32)(y * 2) < (u32)(dy + y)) {
        return 0;
    }
    if (arg3 == 0) {
        return 1;
    }
    d = *(s32 *)((u8 *)arg0 + 0x4) - *(s32 *)((u8 *)arg1 + 0x124);
    n = *(u16 *)((u8 *)arg1 + 0x13A) - 1;
    if (n < 0) {
        return 0;
    }
    if ((u32)(n * 2 + 1) < (u32)(d + n)) {
        return 0;
    }
    return 1;
}
