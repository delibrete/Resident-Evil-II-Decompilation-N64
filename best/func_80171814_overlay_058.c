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

s32 func_800656BC_ovl_01(s16, s16);                 /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_80174968_overlay_058;
extern M2C_UNK D_801749E1_overlay_058;

s8 func_80171814_overlay_058(void *arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = func_800656BC_ovl_01(M2C_FIELD(&D_800C7650, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650, s16 *, 0x19AB2)) & 0xFF;
    temp_v1 = func_800656BC_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32)) & 0xFF;
    if (arg1 == 0) {
        var_a0 = &D_80174968_overlay_058;
    } else {
        var_a0 = &D_801749E1_overlay_058;
    }
    return *((temp_v1 * 0xB) + var_a0 + temp_s0);
}
