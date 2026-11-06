/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_8004789C_overlay_001(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_overlay_001(s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800478E8_overlay_001(s32, u16, u16);   /* extern */
M2C_UNK func_800479EC_overlay_001(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800479F8_overlay_001(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80047B34_overlay_001(s32, M2C_UNK);    /* extern */
extern s32 D_800C527C_overlay_001;
extern M2C_UNK D_8012F940_overlay_001;
extern M2C_UNK D_8012F9F4_overlay_001;

void func_80090B1C_ovl_01(void) {
    s32 var_a1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    u32 temp_a0;
    u32 var_v1;
    void *var_s1;
    void *var_s2;

    func_800479F8_overlay_001((D_800C527C_overlay_001 + 0x4D007) & ~7, &D_8012F9F4_overlay_001, 0x15C3, 1);
    var_v1 = D_800C527C_overlay_001 + 0x3BB64;
    temp_a0 = D_800C527C_overlay_001 + 0x3C004;
    if (var_v1 < temp_a0) {
        var_v1 = temp_a0;
    }
    var_s0 = var_v1 + 0xA64;
    var_s4 = 0xE;
    var_s1 = (&D_8012F940_overlay_001 + 0x70) - 8;
    do {
        var_s4 -= 1;
        
        var_s2 = var_s0 + 3;
loop_4:
        func_80047B34_overlay_001((var_s3 = 2, var_s0), 0);
        func_8004789C_overlay_001(var_s0, 0x80, 0x80, 0x80);
        if (M2C_FIELD(var_s1, u8 *, 3) != 0) {
            var_a1 = (M2C_FIELD(var_s1, u8 *, 2) & 3) * 8;
        } else {
            var_a1 = ((M2C_FIELD(var_s1, u8 *, 2) & 3) * 8) | 0x20;
        }
        var_s3 -= 1;
        func_800478DC_overlay_001(var_s0, var_a1, 0);
        func_800478E8_overlay_001(var_s0, M2C_FIELD(var_s1, u16 *, 4), M2C_FIELD(var_s1, u16 *, 6));
        func_800479EC_overlay_001(var_s0, 8, 8);
        M2C_FIELD(var_s2, M2C_UNK **, 9) = &D_8012F9F4_overlay_001;
        M2C_FIELD(var_s2, s16 *, 7) = 0;
        M2C_FIELD(var_s2, s8 *, 0) = 0;
        var_s2 += 0x14;
        var_s0 += 0x14;
        if (var_s3 != 0) {
            goto loop_4;
        }
        var_s1 -= 8;
    } while (var_s4 != 0);
}
