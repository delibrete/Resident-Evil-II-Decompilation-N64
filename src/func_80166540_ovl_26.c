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

void func_80166540_ovl_26(s32 arg0, void *arg1) {
    u16 temp_v0;

    if (M2C_FIELD(arg1, u8 *, 0x13) == 0) {
        M2C_FIELD(arg1, s8 *, 4) = 1;
        temp_v0 = M2C_FIELD(arg1, u16 *, 6) + M2C_FIELD(arg1, u8 *, 0x14);
        M2C_FIELD(arg1, u16 *, 6) = temp_v0;
        if ((s16) temp_v0 >= 0x100) {
            M2C_FIELD(arg1, u8 *, 0x13) = 1U;
            M2C_FIELD(arg1, u16 *, 6) = 0x100U;
        }
    }
}
