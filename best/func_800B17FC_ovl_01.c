extern u8 D_801443E8[];
s32 func_800B17FC_ovl_01(u32 arg0, s16 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6, u16 arg7, u16 arg8, u8 arg9, u8 arg10) {
    u8 sp10;
    u8 sp11;
    u32 sp14;
    u16 sp18;
    u16 sp1A;
    u8 sp1C;
    u8 sp1D;
    s16 temp_v0_3;
    s32 temp_v0;
    s32 var_s4;
    s32 var_v0;
    s8 temp_v0_2;
    u32 temp_s5;
    u32 temp_s7;
    void *temp_s0;
    u8 temp_a0;
    var_s4 = arg2;
    sp14 = arg6;
    temp_s7 = arg0 >> 8;
    sp11 = arg4;
    temp_s5 = arg0 >> 0x10;
    sp18 = arg7;
    sp1A = arg8;
    sp1C = arg9;
    sp10 = arg3;
    sp1D = arg10;
    temp_v0 = func_800AD938_overlay_001(temp_s5);
    if (temp_v0 != 0) {
        temp_v0_2 = func_800AE654_overlay_001(temp_s7 & 0xFF, arg0 & 0xFF, arg1 & 0xFFFF, (u32)(var_s4 & 0xFF) >> 7);
        if (temp_v0_2 != -1) {
            temp_s0 = (void *)((u8 *)&D_801443E8 + temp_v0_2 * 0x1A0);
            func_800AE140_overlay_001(temp_s0);
            *(s32 *)((u8 *)temp_s0 + 0x24) = (*(s32 *)((u8 *)temp_s0 + 0x24) & 0x10) | 2;
            var_v0 = arg2 & 0x80;
            if (func_800A5830_overlay_001(temp_v0_2) & 0xFF) {
                *(s32 *)((u8 *)temp_s0 + 0x24) = *(s32 *)((u8 *)temp_s0 + 0x24) | 1;
                var_v0 = arg2 & 0x80;
            }
            *(s32 *)((u8 *)temp_s0 + 0x9C) = 0;
            if (var_v0 != 0) {
                var_s4 = arg2 & 0x7F;
                *(s8 *)((u8 *)temp_s0 + 0x4C) = 1;
                func_800ABA74_overlay_001(temp_v0_2 & 0xFF, 0xFF);
                *(s8 *)((u8 *)temp_s0 + 0x54) = temp_v0_2;
                *(u8 *)((u8 *)temp_s0 + 0x55) = 0xFF;
            } else {
                *(s8 *)((u8 *)temp_s0 + 0x4C) = 0;
                *(s8 *)((u8 *)temp_s0 + 0x54) = (s8)arg5;
                *(u8 *)((u8 *)temp_s0 + 0x55) = arg5 >> 8;
            }
            *(s32 *)((u8 *)temp_s0 + 0x28) = 0x75300000;
            *(s16 *)((u8 *)temp_s0 + 0x64) = (s16)temp_s5;
            *(s16 *)((u8 *)temp_s0 + 0xBA) = arg1;
            *(s16 *)((u8 *)temp_s0 + 0x2C) = 0x400;
            *(s32 *)((u8 *)temp_s0 + 0) = temp_v0;
            *(s8 *)((u8 *)temp_s0 + 0xC0) = 0;
            *(s32 *)((u8 *)temp_s0 + 4) = temp_v0 + (sp18 * 8);
            temp_v0_3 = var_s4 & 0xFF;
            *(s16 *)((u8 *)temp_s0 + 0x4E) = temp_v0_3;
            *(s16 *)((u8 *)temp_s0 + 0x50) = temp_v0_3;
            *(u8 *)((u8 *)temp_s0 + 0x52) = sp10;
            *(u8 *)((u8 *)temp_s0 + 0x53) = sp11;
            *(s32 *)((u8 *)temp_s0 + 0x10) = -1;
            *(s32 *)((u8 *)temp_s0 + 0x14) = -1;
            *(s32 *)((u8 *)temp_s0 + 8) = 0;
            *(u8 *)((u8 *)temp_s0 + 0x56) = arg8;
            *(u8 *)((u8 *)temp_s0 + 0xBF) = sp1D;
            *(s32 *)((u8 *)temp_s0 + 0x60) = (temp_s5 << 16) | ((var_s4 & 0xFF) << 8) | temp_v0_2;
            func_800AE478_overlay_001(temp_s0, temp_s7 & 0xFF);
            if (sp1C != 0) return func_800AE2A0_overlay_001(temp_s0);
            return *(s32 *)((u8 *)temp_s0 + 0x60);
        }
    }
    return -1;
}
