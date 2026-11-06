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

void func_80173000_overlay_058(void *arg0) {
    s16 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2C4) = 1;
        M2C_FIELD(arg0, s8 *, 0x2C5) = 1;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x10130F00;
        M2C_FIELD(arg0, s16 *, 0x272) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
    }
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x270);
    if (temp_v1 == 1) {
        M2C_FIELD(arg0, s8 *, 5) = (s8) temp_v1;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
}
