extern u8 D_800C7650_overlay_001[];
extern u8 D_800E9128_overlay_001[];

void func_800275F8_ovl_01(s32 arg0, s16 arg1, s32 arg2, void *arg3) {
    volatile s32 off = 0x18000;
    u8 *temp_a0;
    u8 idx;

    temp_a0 = D_800E9128_overlay_001 + arg0 * 0x2C;
    *(s16 *)temp_a0 = arg1;
    idx = D_800C7650_overlay_001[off + 0x538];
    *(s32 *)(temp_a0 + idx * 16 + 0x10) = arg2 | (temp_a0[0x13] << 24);
    if (arg3 != NULL) {
        *(u16 *)(temp_a0 + 0x14) = ((u16 *)arg3)[0];
        *(u16 *)(temp_a0 + 0x16) = ((u16 *)arg3)[1];
        *(u16 *)(temp_a0 + 0x18) = ((u16 *)arg3)[2];
        *(u16 *)(temp_a0 + 0x1A) = ((u16 *)arg3)[3];
        return;
    }
    *(s32 *)(temp_a0 + 0x14) = 0;
    *(s32 *)(temp_a0 + 0x18) = 0x014000F0;
}
