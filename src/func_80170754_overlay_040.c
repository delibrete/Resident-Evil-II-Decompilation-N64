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
s32 func_800334F8_ovl_01();
s32 func_80033678();
s32 func_80089D34_ovl_01();

void func_80170754_overlay_040(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    u16 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        func_800334F8_ovl_01(arg0, arg1, arg2, NULL);
        temp_s0 = func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        func_80032B8C_ovl_01(arg0, 0);
        if (temp_s0 != 0) {
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 2U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x19001F00;
            func_800334F8_ovl_01(arg0, arg1, arg2, 0);
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        }
    } else {
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
            M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
            if ((temp_v0 << 0x10) == 0) {
                M2C_FIELD(arg0, s8 *, 5) = 0xC;
                M2C_FIELD(arg0, s16 *, 6) = 0;
            }
        }
    }
    func_80033678(arg0);
}
