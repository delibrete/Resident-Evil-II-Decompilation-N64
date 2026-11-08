void func_800826A4_ovl_01(void *arg0, void *arg1, s32 arg2) {
    s16 *var_s2;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s6;
    s32 var_v1;
    void *temp_s0;
    void *var_a0;
    void *var_a1;
    void *var_s5;

    *(s32 *)((u8 *)arg1 + 0xB8) = *(s32 *)((u8 *)arg0 + 0xB8);
    *(s32 *)((u8 *)arg1 + 0xBC) = *(s32 *)((u8 *)arg0 + 0xBC);
    *(u16 *)((u8 *)arg1 + 0xD4) = *(u16 *)((u8 *)arg0 + 0xD4);
    *(u16 *)((u8 *)arg1 + 0xD6) = *(u16 *)((u8 *)arg0 + 0xD6);
    *(s32 *)((u8 *)arg1 + 0xDC) = *(s32 *)((u8 *)arg0 + 0xDC);
    *(s32 *)((u8 *)arg1 + 0xD8) = *(s32 *)((u8 *)arg0 + 0xD8);
    temp_s0 = *(void **)((u8 *)arg0 + 0xC4);
    var_a1 = *(void **)((u8 *)temp_s0 + 8);
    var_s4 = *(s32 *)((u8 *)temp_s0 + 4) - 1;
    var_v1 = 0;
    if (var_s4 != -1) {
        do {
            if (*(s32 *)((u8 *)var_a1 + 0xC) != 0) var_v1 += 1;
            var_s4 -= 1;
            var_a1 = (u8 *)var_a1 + 0x10;
        } while (var_s4 != -1);
    }
    if (var_v1 == 0) {
        var_a1_2 = arg2;
        var_a0 = (u8 *)arg1 + 0x78;
        *(void **)((u8 *)arg1 + 0xC4) = *(void **)((u8 *)arg0 + 0xC4);
    } else {
        temp_s1 = (arg2 + 7) & ~7;
        *(s32 *)(long)temp_s1 = *(s32 *)temp_s0;
        *(s32 *)(long)(temp_s1 + 4) = *(s32 *)((u8 *)temp_s0 + 4);
        *(void **)(long)(temp_s1 + 8) = *(void **)((u8 *)temp_s0 + 8);
        *(s32 *)(long)(temp_s1 + 0xC) = *(s32 *)((u8 *)temp_s0 + 0xC);
        *(s32 *)(long)(temp_s1 + 0x10) = *(s32 *)((u8 *)temp_s0 + 0x10);
        *(s32 *)(long)(temp_s1 + 0x14) = *(s32 *)((u8 *)temp_s0 + 0x14);
        temp_s1_2 = (temp_s1 + 0x1F) & ~7;
        var_s6 = temp_s1_2;
        func_8000DE9C((u8 *)(long)temp_s1_2, *(u8 **)((u8 *)temp_s0 + 8), *(s32 *)((u8 *)temp_s0 + 4) * 0x10);
        var_s4_2 = *(s32 *)(long)(temp_s1 + 4);
        var_s5 = (void *)(long)(var_s6 + 4);
        *(void **)(long)(temp_s1 + 8) = (void *)(long)var_s6;
        var_s1 = temp_s1_2 + *(s32 *)((u8 *)temp_s0 + 4) * 0x10;
loop_8:
        var_s4_2 -= 1;
        var_a1_2 = var_s1;
        if (var_s4_2 != -1) {
            if (*(s32 *)((u8 *)var_s5 + 8) != 0) {
                temp_s1_3 = (var_s1 + 7) & ~7;
                var_s3 = temp_s1_3;
                temp_s0_2 = *(s32 *)(long)var_s6;
                temp_a1 = *(s32 *)var_s5;
                *(s32 *)var_s5 = temp_s1_3;
                temp_a2 = temp_s0_2 * 0x10;
                var_s1 = temp_s1_3 + temp_a2;
                func_8000DE9C((u8 *)(long)var_s3, (u8 *)(long)temp_a1, temp_a2);
                var_s0 = temp_s0_2 - 1;
                if (var_s0 != -1) {
                    var_s2 = (s16 *)(long)(var_s3 + 0xE);
                    do {
                        temp_s1_4 = (var_s1 + 7) & ~7;
                        var_s0 -= 1;
                        func_8000DE9C((u8 *)(long)temp_s1_4, (u8 *)(long)*(s32 *)(long)var_s3, *var_s2 * 0x10);
                        *(s32 *)(long)var_s3 = temp_s1_4;
                        temp_s1_2 = (s16)(*var_s2);
                        var_s2 = (s16 *)((u8 *)var_s2 + 0x10);
                        var_s3 += 0x10;
                        var_s1 = temp_s1_4 + temp_s1_2 * 0x10;
                    } while (var_s0 != -1);
                }
            }
            var_s5 = (u8 *)var_s5 + 0x10;
            var_s6 += 0x10;
            goto loop_8;
        }
        *(void **)((u8 *)arg1 + 0xC4) = (void *)(long)temp_s1;
        var_a0 = (u8 *)arg1 + 0x78;
    }
    func_80031BB0_overlay_001(var_a0, var_a1_2);
}
