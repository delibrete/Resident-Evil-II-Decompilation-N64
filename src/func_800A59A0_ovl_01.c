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

extern s32 D_80143EAC;

void func_800A59A0_ovl_01(s32 arg0, s16 arg1) {
    if ((u32) (arg1 & 0xFFFF) < 0x2001U) {
        M2C_FIELD(((arg0 * 0x68) + D_80143EAC), s16 *, 4) = arg1;
        return;
    }
    M2C_FIELD(((arg0 * 0x68) + D_80143EAC), s16 *, 4) = 0x2000;
}
