extern u8 D_80173A88_overlay_040[];

void func_801730A0_overlay_040(void *arg0, s16 arg1) {
    u8 *base;
    s32 idx;
    u8 temp_v1;

    base = D_80173A88_overlay_040;
    if (arg1 != 0) {
        idx = (arg1 > 0) * 2;
    } else {
        idx = 1;
    }
    temp_v1 = base[idx];
    if (*(u8 *)((u8 *)arg0 + 0x1E8) != temp_v1) {
        *(u8 *)((u8 *)arg0 + 0x1E8) = temp_v1;
        if (*(u8 *)((u8 *)arg0 + 0x1EA) < 7) {
            *(u8 *)((u8 *)arg0 + 0x1EA) = 0xF;
        }
    }
}
