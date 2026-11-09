s32 func_800AC71C_overlay_001(s32 a, s32 b);
s32 func_800A6260_overlay_001(s32 a, s32 b, s32 c);

s32 func_800A85AC_ovl_01(s32 a0, s32 a1, s32 a2) {
    s32 s0 = a1 & 0xFF;
    s32 s1;
    s32 r;
    if (s0 == 0xFF) {
        return -1;
    }
    s1 = a2 & 0xFF;
    if (func_800AC71C_overlay_001(s0, s1) & 0xFF) {
        r = func_800A6260_overlay_001(a0 & 0x7F, s0, s1);
        if (r != -1) {
            return r;
        }
    }
    return -1;
}
