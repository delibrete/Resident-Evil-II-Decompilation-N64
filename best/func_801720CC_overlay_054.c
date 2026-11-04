/* identical to func_8016553C_ovl_26 (matched), with its names changed by decompdecomp */
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

s32 func_8016559C_overlay_026();
s32 func_80165640_overlay_026();
s32 func_80166B18_overlay_026();

void func_801720CC_overlay_054(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_8016559C_overlay_026();
        if (M2C_FIELD(arg0, u8 *, 5) != 1) {
            func_80166B18_overlay_026(arg0, 0xA, 1);
        }
    } else {
        func_80165640_overlay_026(arg0);
    }
}
