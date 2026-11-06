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

M2C_UNK func_8017212C_overlay_054();                /* extern */
M2C_UNK func_801721D0_overlay_054(void *);          /* extern */
M2C_UNK func_801736A8_overlay_054(void *, M2C_UNK, M2C_UNK); /* extern */

void func_801720CC_overlay_054(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_8017212C_overlay_054();
        if (M2C_FIELD(arg0, u8 *, 5) != 1) {
            func_801736A8_overlay_054(arg0, 0xA, 1);
        }
    } else {
        func_801721D0_overlay_054(arg0);
    }
}
