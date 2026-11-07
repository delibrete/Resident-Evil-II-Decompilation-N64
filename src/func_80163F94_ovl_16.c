/* identical to func_80164020_ovl_14 (matched), with its names changed by decompdecomp */
s32 func_8008A974_ovl_01(void *, s32, s32, s32);
s32 func_80162820_overlay_014(void *);

void func_80163F94_ovl_16(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp;

    switch (arg0[6]) {
    case 0:
        *(s32 *)(arg0 + 0x1E8) = 0x04000F00;
        *(u8 *)(arg0 + 0x2CE) = 3;
        *(s16 *)(arg0 + 6) = 0x100;
        *(s16 *)(arg0 + 0x1F4) = 0;
        *(u16 *)(arg0 + 0x2C8) &= 0xFFFD;
        /* fallthrough */
    case 1:
        if (func_8008A974_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            *(s32 *)(arg0 + 0x1E8) = 0x04000300;
            arg0[6]++;
        }
        break;
    case 2:
        if (func_8008A974_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            *(s32 *)(arg0 + 4) = 0x01040000;
        }
        break;
    }

    arg0[7]++;
    if (arg0[7] >= 11) {
        temp = func_80162820_overlay_014(arg0);
        *(s32 *)(arg0 + 0x2C4) = temp;
        if (temp != 0) {
            *(s32 *)(arg0 + 4) = 0x010F0000;
        }
    }
}
