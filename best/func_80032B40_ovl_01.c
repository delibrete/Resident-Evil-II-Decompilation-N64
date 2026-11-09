s32 func_80032B40_ovl_01(s32 *arg0, s16 *arg1) {
    if ((u32)arg1[2] < (u32)(arg0[0] - arg1[0])) return 0;
    if ((u32)arg1[3] < (u32)(arg0[2] - arg1[1])) return 1;
    return 0;
}
