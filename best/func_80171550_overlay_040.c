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

s32 func_80032C08_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();

void func_80171550_overlay_040(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_a2;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        func_80032C08_ovl_01(arg0, 0x800, 0);
        M2C_FIELD(arg0, u16 *, 0x1E2) += 0x28;
        if (M2C_FIELD(arg0, s32 *, 0x2C) >= M2C_FIELD(arg0, s16 *, 0x25E)) {
            temp_a2 = M2C_FIELD(arg0, s16 *, 0x25E);
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a2;
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xEFFFFFFF) | 0x04000000);
            func_80077D48_ovl_01(0xA, arg0, temp_a2);
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0x11U) {
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        } else {
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
        }
    } else if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        M2C_FIELD(arg0, s8 *, 5) = 0xD;
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
        M2C_FIELD(arg0, u8 *, 0x26F) &= 0x7F;
    }
    if (M2C_FIELD(arg0, s16 *, 0x1F4) < 0x400) {
        M2C_FIELD(arg0, u16 *, 0x66) += 0x100;
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) + 0x100);
    }
}
