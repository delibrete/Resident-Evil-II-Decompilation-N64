/* identical to func_8016FB70_overlay_040 (matched), with its names changed by decompdecomp */
/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

s32 func_80032C08_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8016687C_ovl_12();

s32 func_80162FE0_ovl_12(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s1;

    func_80032C08_ovl_01(arg0, 0, 0);
    M2C_FIELD(arg0, u16 *, 0x1E2) += 0x28;
    var_s1 = func_8016687C_ovl_12(arg0) == 1;
    if (((s16) M2C_FIELD(arg0, u16 *, 0x1E2) >= 0) && (var_s1 == 0)) {
        var_s1 = -1;
    } else if (M2C_FIELD(arg0, u8 *, 0x1E9) != 0) {
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    }
    return var_s1;
}
