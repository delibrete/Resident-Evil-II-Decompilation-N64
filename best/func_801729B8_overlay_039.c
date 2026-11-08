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

s32 func_80032FDC(void *, M2C_UNK *, s16, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10F8;

void func_801729B8_overlay_039(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 6) == 3) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x514U) && !(M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) & 0x80) && ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0xBU) && (M2C_FIELD(arg0, u8 *, 0x1A2) == M2C_FIELD(&D_800C7650, u8 *, 0x19C22)) && (M2C_FIELD(&D_800C7650, u8 *, 0x19A88) != 0xF)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x20) && (func_80032FDC(arg0 + 0x28, &D_800E10F8, (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x100), 0x100) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
            M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) | 0x80);
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x40) && (func_80032FDC(arg0 + 0x28, &D_800E10F8, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - 0x100), 0x100) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
            M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) | 0x80);
        }
    }
}
