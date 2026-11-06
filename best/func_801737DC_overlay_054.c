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

s32 func_801737DC_overlay_054(s32 arg0, s8 arg1) {
    void *temp_a2;

    temp_a2 = arg0 + 0x2B4;
    if (!(((s32) M2C_FIELD(temp_a2, u8 *, 0xE) >> arg1) & 1)) {
        return 1;
    }
    M2C_FIELD(temp_a2, u8 *, 0xD) = 0xC2;
    M2C_FIELD(temp_a2, s8 *, 0xF) = arg1;
    M2C_FIELD(temp_a2, u8 *, 0xE) &= ~(1 << arg1);
    return 0;
}
