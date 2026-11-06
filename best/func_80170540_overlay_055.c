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

extern int D_800E10AC;
s32 func_801703A8_overlay_055();
extern char D_800C7650[];

s32 func_80170540_overlay_055(s32 arg0, s16 arg1) {
    s32 var_v0;

    var_v0 = func_801703A8_overlay_055(arg0, 0, arg1);
    if ((var_v0 == 0) && (!(D_800E10AC & 0x10000000) || (var_v0 = func_801703A8_overlay_055(arg0, 1, arg1), (var_v0 == 0)))) {
        var_v0 = 0;
    }
    return var_v0;
}
