/* identical to func_8015E408_overlay_033 in Resident Evil II (local match library) (matched), with its names changed by decompdecomp */
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

s32 func_80040E88_ovl_01();

void func_801730A8_overlay_061(s32 arg0, s32 arg1) {
    func_80040E88_ovl_01(arg1 + 0x58, arg1 + 8);
    func_80040E88_ovl_01(arg1 + 0x1D0, arg1 + 0x180);
    func_80040E88_ovl_01(arg1 + 0x348, arg1 + 0x2F8);
    func_80040E88_ovl_01(arg1 + 0x4C0, arg1 + 0x470);
}
