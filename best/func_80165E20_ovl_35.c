void func_80165E20_ovl_35(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_v0;
    u8 temp_v1;
    temp_v1 = *(u8 *)((s8 *)arg1 + 7);
    switch (temp_v1) {
    case 0:
        *(u8 *)((s8 *)arg1 + 7) = 1U;
        *(u16 *)((s8 *)arg1 + 2) = -0x100U;
        *(u16 *)((s8 *)arg1 + 4) = -0x100U;
    case 1:
        temp_v0 = *(u16 *)((s8 *)arg1 + 2) + 0x200;
        *(u16 *)((s8 *)arg1 + 2) = temp_v0;
        if ((s16)temp_v0 >= 0x300) {
            *(u8 *)((s8 *)arg1 + 7) = 2U;
            var_v0 = 0x300;
            *(u16 *)((s8 *)arg1 + 2) = var_v0;
        }
        break;
    case 2:
        temp_v0_2 = *(u16 *)((s8 *)arg1 + 2) - 0x200;
        *(u16 *)((s8 *)arg1 + 2) = temp_v0_2;
        var_v0 = -0x100U;
        if ((s16)temp_v0_2 < -0xFF) {
            *(u8 *)((s8 *)arg1 + 7) = 1U;
            *(u16 *)((s8 *)arg1 + 2) = var_v0;
        }
        break;
    }
    *(u16 *)((s8 *)arg1 + 4) = *(u16 *)((s8 *)arg1 + 2);
}
