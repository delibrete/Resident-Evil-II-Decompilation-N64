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

s32 func_80173514_overlay_054(void *arg0) {
int __repair_literal;

    s16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x1F2);
__repair_literal = 0;

    if ((M2C_FIELD(arg0, s16 *, 0x2C4) >= temp_v1) && (temp_v1 >= __repair_literal) && (M2C_FIELD(arg0, u8 *, 0x2B8) == 0)) {
        M2C_FIELD(arg0, s8 *, 5) = 7;
        M2C_FIELD(arg0, s16 *, 6) = 0;
        return 1;
    }
    return 0;
}
