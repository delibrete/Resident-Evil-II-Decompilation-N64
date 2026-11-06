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

extern M2C_UNK D_801763A4_overlay_057;

void func_80171960_overlay_057(void *arg0) {
    void *temp_v0;

    if (M2C_FIELD(arg0, u16 *, 0x270) & 0x10) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        temp_v0 = ((M2C_FIELD(arg0, u16 *, 0x270) & 0xF) * 4) + &D_801763A4_overlay_057;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(temp_v0, s16 *, 0);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_v0, s16 *, 2);
    }
}
