extern s32 D_80143EAC;

void func_800A5864_ovl_01(s32 arg0, s32 arg1) {
    s32 base;
    u8 *p;
    s16 x;

    base = D_80143EAC;
    p = (u8 *) (arg0 * 0x68 + base);
    x = 0x14;
    *(s16 *) (p + 0x28) = x;
    if (arg1 & 0xFF) {
        *(s8 *) (p + 0x5C) = 3;
        *(s32 *) (p + 0x54) = 0;
        *(s32 *) (p + 0x50) = 0;
        *(s16 *) (p + 0x48) = x;
        *(f32 *) (p + 0x58) = *(f32 *) (p + 0x4C);
    }
}
