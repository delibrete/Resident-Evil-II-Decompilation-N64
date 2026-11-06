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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_801736A8_overlay_054(s32, u8, s32);    /* extern */
extern M2C_UNK D_80173D40_overlay_054;

void func_80171E20_overlay_054(s32 arg0, u8 arg1, u32 arg2) {
    s32 temp_s2;
    s32 var_v0;
    u32 var_s0;

    var_s0 = 0;
    temp_s2 = func_80033634_ovl_01() & 7;
    if (arg2 != 0) {
        var_v0 = temp_s2;
        do {
            var_s0 += 1;
            func_801736A8_overlay_054(arg0, *(var_v0 + &D_80173D40_overlay_054), arg1 & 0xFF);
            var_v0 = temp_s2 + var_s0;
        } while (var_s0 < arg2);
    }
}
