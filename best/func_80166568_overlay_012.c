s32 func_80033174_ovl_01(void *, void *);
s32 func_80032FDC(void *, void *, s32, s32);
extern u8 D_800C7650[];
extern u8 D_800E10D0[];
s32 func_80166568_overlay_012(void *arg0) {
    u8 *state = (u8 *)arg0 + 0x2B4;
    u8 *other;
    s32 result;
    s32 value;
    if (state[0xF]) {
        other = *(u8 **)(D_800C7650 + 0x18000 + 0x1D3C);
    } else {
        other = D_800E10D0;
    }
    result = -2;
    if (*(s16 *)(other + 0x1F2) >= 0) {
        if (state[0xF]) {
            value = *(s32 *)((u8 *)arg0 + 0x290) & 0x3FFFFFFF;
        } else {
            value = *(s32 *)((u8 *)arg0 + 0x28C);
        }
        result = 0;
        if (value < 0xFA0) {
            if (other[0x1A2] == *((u8 *)arg0 + 0x1A2)) {
                if (func_80032FDC((u8 *)arg0 + 0x28, other + 0x28,
                                 *(s16 *)((u8 *)arg0 + 0x66), 0x100) == 0) {
                    result = -1;
                } else {
                    result = -4;
                    if (!(other[0x26F] & 0x80)) {
                        if (*(s16 *)(other + 0x1F2) >= 0x15) {
                            result = 1;
                        } else if ((func_80033174_ovl_01(arg0, other) & 0xFF) != 0) {
                            result = 1;
                            if (*(s16 *)(state + 2) >= 0x258) result = -2;
                        }
                    }
                }
            }
        }
    }
    return result;
}
