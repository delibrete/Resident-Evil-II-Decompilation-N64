/* identical to func_801721D0_overlay_054 (matched), with its names changed by decompdecomp */
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

s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033678();
s32 func_80089D34_ovl_01();

void func_80165640_ovl_26(void *arg0, s32 arg1, s32 arg2) {
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
    }
    func_80032B8C_ovl_01(arg0, 0);
    func_80033678(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x2D9) == 0) {
        M2C_FIELD(arg0, s8 *, 0x2C1) = 6;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
    }
    if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) {
        M2C_FIELD(arg0, s8 *, 0x2C1) = 0x41;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
    }
}
