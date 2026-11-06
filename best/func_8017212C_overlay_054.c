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
extern M2C_UNK D_800E10D0;

void func_8017212C_overlay_054(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2DC) != 0) {
        M2C_FIELD(&D_800E10D0, s8 *, 5) = 2;
        M2C_FIELD(&D_800E10D0, s8 *, 6) = 0;
        M2C_FIELD(&D_800E10D0, s8 *, 7) = 0;
        M2C_FIELD(arg0, u8 *, 0x2DC) = 0U;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2D9) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        return;
    }
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 0xC) << 0x18) + 0x3F00);
    M2C_FIELD(&D_800C7650, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0xFFBF);
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
}
