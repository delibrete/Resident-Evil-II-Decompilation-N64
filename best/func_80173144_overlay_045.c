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

s32 func_8017228C_overlay_045();
s32 func_80173B4C_overlay_045();
s32 func_801744D8_overlay_045();

void func_80173144_overlay_045(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 0x2C0) == 0) {
        func_801744D8_overlay_045(arg0, 0x3F3F3F);
        M2C_FIELD(arg0, s8 *, 0x2D7) = 0x1E;
        func_80173B4C_overlay_045(arg0, 0x13, 0xA);
        func_80173B4C_overlay_045(arg0, 0, 0xA);
    }
    M2C_FIELD(arg0, s8 *, 5) = 2;
    func_8017228C_overlay_045(arg0, arg1, arg2);
}
