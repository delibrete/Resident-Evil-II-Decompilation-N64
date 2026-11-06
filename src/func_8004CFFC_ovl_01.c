/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 func_8004CF60_overlay_001();
s32 func_8008B028_overlay_001();
extern s32 D_8010B660_overlay_001;

s32 func_8004CFFC_ovl_01(s32 arg0) {
    char *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_8010B660_overlay_001;
    do {
        *(s32 *)var_s0 = func_8004CF60_overlay_001(func_8008B028_overlay_001(4));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
    return arg0;
}
