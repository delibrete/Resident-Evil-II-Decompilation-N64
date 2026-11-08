typedef s32 (*Callback)(void *, void *);
extern Callback D_80113838_overlay_001[];
s32 func_8006E1EC_ovl_01(void *arg0, u8 *arg1, s32 arg2) {
    s32 temp_a2;
    u8 *temp_s3;
    s32 var_s1;
    u16 temp_s0;
    u8 *temp_a1;
    s32 temp_v0;
    Callback *temp_s4;
    temp_a2 = arg2 & 0xFF;
    temp_s4 = D_80113838_overlay_001;
    temp_s3 = arg1 + temp_a2;
    var_s1 = temp_s4[*arg1](arg0, temp_s3);
    if (*(u8 **)((s8 *)arg0 + 0x1C) != temp_s3) {
        do {
            temp_s0 = **(u16 **)((s8 *)arg0 + 0x1C);
            temp_a1 = *(u8 **)((s8 *)arg0 + 0x1C) + 2;
            *(u8 **)((s8 *)arg0 + 0x1C) = temp_a1;
            temp_v0 = temp_s4[*temp_a1](arg0, temp_a1);
            if (temp_s0 == 0) var_s1 &= temp_v0;
            else var_s1 |= temp_v0;
        } while (*(u8 **)((s8 *)arg0 + 0x1C) != temp_s3);
    }
    return var_s1;
}
