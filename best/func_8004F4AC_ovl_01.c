extern s32 func_8004F57C_ovl_01(void *, void *);

void func_8004F4AC_ovl_01(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3)
{
    s32 old;
    s32 v;
    u8 *t0;

    t0 = arg0 + 0x120;
    old = *(s32 *)(arg0 + 0x28);
    v = *arg1 - *(s16 *)(t0 + 0x10);
    if (arg2 >= 0) {
        v = v - arg3;
    } else {
        v = v + arg3;
    }
    *(s32 *)(arg0 + 0x28) = v;
    *(s32 *)t0 = *(s32 *)t0 + (v - old);
    *(s32 *)(arg0 + 0x280) = func_8004F57C_ovl_01(arg0, t0);
}
