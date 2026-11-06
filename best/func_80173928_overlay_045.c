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

s32 D_8006A8B0(s32);                                /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

s32 func_80173928_overlay_045(void *arg0, s32 arg2) {
    M2C_UNK *var_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    if (M2C_FIELD(arg0, u8 *, 0x2D3) == 0) {
        var_s0 = &D_800E10D0;
        var_a0 = arg2 << 0x10;
    } else {
        var_s0 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
        var_a0 = arg2 << 0x10;
    }
    temp_v1 = D_8006A8B0(var_a0 >> 0x10);
    if (arg2 & 1) {
        var_v0_2 = M2C_FIELD(var_s0, s32 *, 0x30) - temp_v1;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 0xBB8) {
            return 1;
        }
        goto block_11;
    }
    var_v1 = M2C_FIELD(var_s0, s32 *, 0x28) - temp_v1;
    if (var_v1 < 0) {
        var_v1 = -var_v1;
    }
    var_v0 = 1;
    if (var_v1 >= 0xBB8) {
block_11:
        var_v0 = 0;
    }
    return var_v0;
}
