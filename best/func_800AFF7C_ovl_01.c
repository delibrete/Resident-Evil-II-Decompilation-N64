extern s16 D_80147F50[];
s32 func_800AFF7C_ovl_01(s16 *arg0, u8 *arg1, s32 arg2) {
    s32 left;
    s32 right;
    s32 result;
    s32 index;

    if (arg1[0] != 0) {
        left = func_800AC9A8_overlay_001(arg0, arg1[7]);
    } else {
        index = arg1[7] & 0x1F;
        if (index < 0x10) left = arg0[0x180 / 2 + index];
        else left = ((s16 *)D_80147F50)[index - 0x10];
    }

    if ((arg2 & 0xFF) == 4) {
        right = *(s32 *)(arg1 + 4) >> 8;
    } else if (((*(u32 *)(arg1 + 4) >> 8) & 0xFF) != 0) {
        right = func_800AC9A8_overlay_001(arg0, (*(u32 *)(arg1 + 4) >> 16) & 0xFF);
    } else {
        index = (*(u32 *)(arg1 + 4) >> 16) & 0x1F;
        if (index < 0x10) right = arg0[0x180 / 2 + index];
        else right = ((s16 *)D_80147F50)[index - 0x10];
    }

    switch (arg2 & 0xFF) {
    case 0: result = (s16)left + (s16)right; break;
    case 1: result = (s16)left - (s16)right; break;
    case 2: result = (s16)left * (s16)right; break;
    case 3: result = (s16)right == 0 ? 0 : (s16)left / (s16)right; break;
    default: result = 0; break;
    }

    {
        u32 packed = *(u32 *)arg1;
        s32 value = result;
        if (value < -0x8000) value = -0x8000;
        else if (value > 0x7FFF) value = 0x7FFF;
        if (((packed >> 8) & 0xFF) != 0) {
            func_800ACA84_overlay_001(arg0, (packed >> 16) & 0xFF, (s16)value);
        } else {
            index = (packed >> 16) & 0x1F;
            if (index < 0x10) arg0[0x180 / 2 + index] = value;
            else ((s16 *)D_80147F50)[index - 0x10] = value;
        }
    }
    return 0;
}
