/* machine draft (m2c) for sn-n64-272-0006 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

extern s16 D_800F9DE0;

void func_8016FAF4_overlay_051(void) {
    char *var_a0;
    u32 var_a1;

    var_a1 = 0;
    var_a0 = &D_800F9DE0;
    do {
        var_a1 += 1;
        *(s16 *)var_a0 *= 6;
        var_a0 += 2;
    } while (var_a1 < 0x1EU);
}
