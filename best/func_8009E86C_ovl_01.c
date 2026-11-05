extern s16 D_801326D8_ovl_01;
extern u32 D_801326E0_ovl_01;
extern void *D_801326E8_ovl_01;

void func_8009E86C_ovl_01(s8 arg0, s32 arg1) {
    u32 var_a2;
    void *var_v1;

    var_v1 = D_801326E8_ovl_01;
    var_a2 = 0;
    do {
        if (((u32) D_801326E0_ovl_01 >> var_a2) & 1) {
            *(s8 *)var_v1 = arg0;
        } else if (arg1 & 0xFF) {
            *(s8 *)var_v1 = 0;
        }
        if (*((u8 *)var_v1 + 1) & 0x10) {
            *(s8 *)var_v1 = 0;
        }
        var_a2 += 1;
        var_v1 = (u8 *)var_v1 + 0xC;
    } while (var_a2 < (u32) D_801326D8_ovl_01);
}
