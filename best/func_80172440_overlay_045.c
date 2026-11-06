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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80173B4C_overlay_045();

void func_80172440_overlay_045(void *arg0) {
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s16 *, 0x1E2) = 0x28;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0C090000;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s16 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) += 0x320;
    if (M2C_FIELD(arg0, u8 *, 0x2D8) != 1) {
        func_80173B4C_overlay_045(arg0, 0);
    }
}
