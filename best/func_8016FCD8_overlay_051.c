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

extern M2C_UNK D_800C7650;

void func_8016FCD8_overlay_051(void *arg0) {
    s16 var_v0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x1827C), s32 *, 0x2C) + (M2C_FIELD(&D_800C7650, s16 *, 0x215FC) * 0x28);
    if (M2C_FIELD(&D_800C7650, u8 *, 0x18538) != 0) {
        M2C_FIELD(temp_a0, s8 *, 0xA) = 0xC8;
        M2C_FIELD(temp_a0, s8 *, 0xB) = 0x5F;
        var_v0 = 0x2710;
    } else {
        M2C_FIELD(temp_a0, s8 *, 0xA) = 0xAA;
        M2C_FIELD(temp_a0, s8 *, 0xB) = 0x46;
        var_v0 = 0x1B58;
    }
    M2C_FIELD(temp_a0, s8 *, 0xC) = 0;
    M2C_FIELD(temp_a0, s16 *, 0x26) = var_v0;
    M2C_FIELD(temp_a0, s8 *, 3) = 0;
    M2C_FIELD(temp_a0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
    M2C_FIELD(temp_a0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, u16 *, 0x2E) - 0x1194);
    M2C_FIELD(temp_a0, u16 *, 0x20) = (u16) M2C_FIELD(arg0, u16 *, 0x32);
}
