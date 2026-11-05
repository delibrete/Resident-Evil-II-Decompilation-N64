void func_80047B34_ovl_01(void *, s32);
void func_8004789C_ovl_01(void *, s32, s32, s32);
void func_800479EC_ovl_01(void *, s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_8012F524_ovl_01;

void func_80095B70_ovl_01(void) {
    s32 var_s1;
    u32 temp_v1;
    u32 var_s0;

    var_s0 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_s0 < temp_v1) {
        var_s0 = temp_v1;
    }
    var_s1 = 0x50;
    do {
        var_s1 -= 1;
        func_80047B34_ovl_01((void *) var_s0, 0);
        func_8004789C_ovl_01((void *) var_s0, 0x80, 0x80, 0x80);
        func_800479EC_ovl_01((void *) var_s0, 8, 9);
        *(s32 *)(var_s0 + 0xC) = (s32) &D_8012F524_ovl_01;
        var_s0 += 0x14;
    } while (var_s1 != 0);
}
