extern u8 D_8017487A_overlay_058;
s32 func_80173CDC_overlay_058(s32 arg0){
    u8 *p = &D_8017487A_overlay_058;
    s32 v = *p + arg0;
    *p = v;
    if ((s8)v >= 9) {
        *p = 8;
        return 1;
    }
    if ((s8)v < -8) {
        *(s8 *)p = -8;
        return -1;
    }
    return 0;
}
