/* identical to func_801726C4_overlay_040 (matched), with its names changed by decompdecomp */
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

s32 func_80032B8C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_801664DC_ovl_12();

void func_80165B34_overlay_012(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 0x2BC) == 0) {
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x1F4));
        func_801664DC_ovl_12(arg0, 0xA, 0);
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, M2C_FIELD(arg0, s16 *, 0x1F6)) != 0) {
        if (M2C_FIELD(arg0, u8 *, 7) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x1EA) << 8) + 0x12000000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
    }
}
