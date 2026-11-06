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


extern int (*D_801708AC_overlay_055[])();
M2C_UNK func_8017026C_overlay_055(void *, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_8016ECA0_overlay_055(void *arg0) {
    M2C_UNK *var_v0;

    D_801708AC_overlay_055[M2C_FIELD(arg0, u8 *, 6)]();
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x250), u8 *, 0x2B4) != 0) {
        var_v0 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
    } else {
        var_v0 = &D_800E10D0;
    }
    if (M2C_FIELD(var_v0, u8 *, 0x26F) & 0x80) {
        M2C_FIELD(arg0, s8 *, 0x2C5) = 1;
    }
    func_8017026C_overlay_055(arg0, 0);
}
