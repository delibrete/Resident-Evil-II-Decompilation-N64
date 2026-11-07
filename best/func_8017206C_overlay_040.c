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

s32 func_80032B8C_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8017306C_overlay_040();

void func_8017206C_overlay_040(void *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(temp_s1, u8 *, 8) == 0) {
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x1F4));
        func_8017306C_overlay_040(arg0, 0xA, 0);
        if (M2C_FIELD(arg0, u8 *, 7) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, u16 *, 0x66) += ((func_80033634_ovl_01(arg0) & 0xFF) + 0xFF80);
        }
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, M2C_FIELD(arg0, s16 *, 0x1F6)) != 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x300;
        M2C_FIELD(temp_s1, u8 *, 0xB) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xB) & 0xC0) | 2);
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x1EA) << 8) + 0x12000000);
    }
}
