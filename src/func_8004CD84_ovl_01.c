extern u8 D_8010B2C8_overlay_001[];

void func_8004CD84_ovl_01(s32 arg0, s32 *arg1) {
    u8 *base = D_8010B2C8_overlay_001;
    u8 *p = base + arg0 * 0x1C8;
    *(s32 **)(p + 0x1B8) = arg1;
    *(s16 *)p = 2;
}
