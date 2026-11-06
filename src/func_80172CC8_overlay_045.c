/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172D58_overlay_045();
s32 func_80173B4C_overlay_045();
s32 func_80174198_overlay_045();

void func_80172CC8_overlay_045(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000700;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    func_80174198_overlay_045(arg0, 0x2002, (func_80033634_ovl_01() & 3) + 6);
    func_80173B4C_overlay_045(arg0, 0x13, 1);
    func_80172D58_overlay_045(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
    M2C_FIELD(arg0, s32 *, 0) |= 0x42;
    if (M2C_FIELD(arg0, s8 *, 0x2D6) < 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s16 *, 0x1A8) + 0x46);
    }
}
