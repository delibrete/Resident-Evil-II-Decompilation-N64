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

M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80171054_overlay_063(void *);          /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_801712BC_overlay_063(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_a2;
    void *var_s1;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) == 0) {
        var_a2 = &D_800E10D0;
        var_s1 = arg0 + 0x2B4;
    } else {
        var_a2 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
        var_s1 = arg0 + 0x2B4;
    }
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E2) = (u16) M2C_FIELD(var_s1, u16 *, 0x1E);
    M2C_FIELD(arg0, u16 *, 0x1E4) = (u16) M2C_FIELD(var_s1, u16 *, 0x20);
    if ((s16) M2C_FIELD(arg0, u16 *, 0x1E2) < 0) {
        M2C_FIELD(arg0, u16 *, 0x1E2) = 0x28U;
    }
    M2C_FIELD(arg0, s16 *, 0x1F4) = 0x28;
    func_80032DEC_ovl_01(arg0, M2C_FIELD(var_a2, s32 *, 0x28), M2C_FIELD(var_a2, s32 *, 0x30), -0x100);
    M2C_FIELD(var_s1, s8 *, 0x13) = 0;
    M2C_FIELD(var_s1, s8 *, 0x12) = 0;
    M2C_FIELD(var_s1, s8 *, 0x10) = 0;
    func_80171054_overlay_063(arg0);
    M2C_FIELD(arg0, u8 *, 0x2D6) = (u8) M2C_FIELD(arg0, u8 *, 5);
    if (M2C_FIELD(arg0, u8 *, 0x1E8) != 4) {
        M2C_FIELD(arg0, u8 *, 0x1E8) = 0x04000F00;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    M2C_FIELD(arg0, s8 *, 0x2D7) = 0;
}
