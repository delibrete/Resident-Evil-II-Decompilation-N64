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

s32 func_80089D34_ovl_01();
s32 func_80173B4C_overlay_045();

void func_801722D8_overlay_045(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_v1;
    void *temp_s2;

    temp_s2 = (char *)(arg0); temp_s2 += (s32)(0x2B4);
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0C000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        if (M2C_FIELD(arg0, u8 *, 0x2D8) != 1) {
            func_80173B4C_overlay_045(arg0, NULL, 0);
        }
        M2C_FIELD(arg0, s32 *, 0) |= 0x42;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x80000) {
        M2C_FIELD(arg0, s32 *, 0) &= 0xE3FFFFFF;
        if (M2C_FIELD(arg0, s16 *, 0x1A8) != 0) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x2D8);
            if (((s32) temp_v1 >= 9) && (((s32) temp_v1 < 0xB) || (temp_v1 == 0x10))) {
                func_80173B4C_overlay_045(arg0, 0, 7);
            }
            M2C_FIELD(arg0, s8 *, 0x2D6) = -1;
            if (M2C_FIELD(arg0, u8 *, 0x2DA) == 0) {
                M2C_FIELD(arg0, u8 *, 0x2DA) = 3U;
                M2C_FIELD(arg0, s8 *, 0x2DB) = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        if (M2C_FIELD(temp_s2, u8 *, 0x21) == 0) {
            M2C_FIELD(arg0, s16 *, 0x1F2) = 1;
            M2C_FIELD(temp_s2, s8 *, 0xC) = 1;
        }
    }
}
