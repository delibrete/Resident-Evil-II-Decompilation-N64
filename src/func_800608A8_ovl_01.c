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

s32 func_800608A8_ovl_01(s32 a, s32 b, s32 c, s16 *d) {
    s16 temp_a1;
    s16 var_v1;
    s32 temp_t0;

    temp_t0 = (c + (a - b)) & 0xFFF;
    temp_a1 = b - c;
    if (temp_t0 < ((s32) (c << 0x10) >> 0xF)) {
        *d = (s16) a;
        return 0;
    }
    var_v1 = temp_a1;
    if ((u32) temp_t0 < 0x801U) {
        var_v1 = temp_a1 + (c * 2);
    }
    *d = var_v1;
    return 1;
}
