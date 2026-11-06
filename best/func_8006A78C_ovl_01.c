extern u8 D_800B92C8_ovl_01[];
void func_8008386C_ovl_01(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3);

typedef struct { u8 b[8]; } Pack8;

s32 func_8006A78C_ovl_01(s32 arg0)
{
    Pack8 tmp;
    s32 x;
    s32 y;
    s32 r;

    r = 0;
    tmp = *(Pack8 *)D_800B92C8_ovl_01;
    func_8008386C_ovl_01(0, arg0, (s16 *)&tmp, (s16 *)&tmp);
    x = ((s16 *)&tmp)[0];
    y = ((s16 *)&tmp)[2];
    if (x < 0) {
        x = -x;
    }
    if (x >= 0x4001) {
        r = 1;
    }
    if (y < 0) {
        y = -y;
    }
    if (y >= 0x4001) {
        r = 2;
    }
    return r;
}
