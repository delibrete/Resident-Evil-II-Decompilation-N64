/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern s32 (*D_80143FA4)();

s32 func_800A5C38_ovl_01(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0 & 0xFF000000;
    if ((temp_v1 != 0x80000000) && (temp_v1 != 0xB0000000)) {
        var_a0 = D_80143FA4();
    }
    return var_a0;
}
