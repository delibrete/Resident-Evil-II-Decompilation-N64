extern u8 D_80148C20;
extern u8 D_8014CF20;

void func_800AC5B4_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *var_a1;
    s32 temp_a2;
    s32 var_a0;
    s32 var_v0;

    temp_a2 = arg2 & 0xFF;
    if (temp_a2 != 0xFF) {
        var_a1 = &D_80148C20;
        var_a0 = (arg0 & 0xFF) + ((arg1 & 0xFF) * 0x86);
        var_v0 = temp_a2 * 0x860;
    } else {
        var_a1 = &D_8014CF20;
        var_a0 = arg0 & 0xFF;
        var_v0 = (arg1 & 0xFF) * 0x86;
    }
    *(u8 *)(var_a0 + var_v0 + var_a1) = arg3 & 0x7F;
}
