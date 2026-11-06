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

M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80135C4C_overlay_001;
extern M2C_UNK D_80143F50;

s32 func_800A5618_ovl_01(void) {
    s32 temp_v0;

    if (D_80135C4C_overlay_001 == 0) {
        func_8000C9E0(&D_80143F50, 0, 1);
    }
    temp_v0 = D_80135C4C_overlay_001 + 1;
    D_80135C4C_overlay_001 = temp_v0;
    return temp_v0;
}
