/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

f32 func_80083E90_ovl_01(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_fa0;
    f32 temp_fv0;

    temp_fa0 = arg2 - arg0;
    temp_fv0 = arg3 - arg1;
    return (temp_fa0 * temp_fa0) + (temp_fv0 * temp_fv0);
}
