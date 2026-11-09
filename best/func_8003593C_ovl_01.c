s32 func_80040A44_ovl_01(s32 arg0);

s32 func_8003593C_ovl_01(s32 arg0, s32 arg1)
{
    s32 a = (s16)arg0;
    s32 b = (s16)arg1;
    s32 d = -b;
    s32 f;
    s32 q;
    s32 r;
    u32 m = 0x80000000;
    f = !(a & m);
    f = (f << 11) | 0x400;
    if (d == 0) {
        return (s16)f;
    }
    a = a << 12;
    q = a / d;
    r = func_80040A44_ovl_01(q);
    if (d < 0) {
        r = -(s16)r;
    }
    return (s16)r;
}
