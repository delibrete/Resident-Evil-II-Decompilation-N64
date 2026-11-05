extern u8 D_800C7650_ovl_01[];
extern s32 *D_800E1388_ovl_01[];
s32 func_8004D3D0_ovl_01(s32 *arg0, void *arg1);
void func_8004DA70_ovl_01(void *arg0);

void func_8004DC28_ovl_01(u8 *arg0) {
    s32 **var_s0;
    s32 *temp_a0_2;
    u32 var_s1;
    s16 var_s2;
    u8 *temp_a0;

    func_8004DA70_ovl_01(arg0 + 0x28);
    var_s1 = 0x8000;
    arg0[0xD] = 0xFF;
    temp_a0 = D_800C7650_ovl_01 + 0x18000;
    var_s0 = D_800E1388_ovl_01;
    var_s2 = 0;
    if (*(s32 ***)(temp_a0 + 0x28C) != D_800E1388_ovl_01) {
        do {
            temp_a0_2 = *var_s0;
            if (((s32 *)arg0 != temp_a0_2) && (*temp_a0_2 & 1) && (func_8004D3D0_ovl_01(temp_a0_2, arg0) != 0)) {
                var_s2 |= var_s1;
            }
            var_s0 += 1;
            var_s1 >>= 1;
        } while (var_s0 != *(s32 ***)(temp_a0 + 0x28C));
    }
    *(s16 *)(arg0 + 0xE) = var_s2;
}
