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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8017212C_overlay_054();
s32 func_801721D0_overlay_054();
s32 func_80172280_overlay_054();
s32 func_801736A8_overlay_054();

void func_80172320_overlay_054(void *arg0) {
    s32 var_s2;
    s32 var_s1;
    u8 temp_s3;

    temp_s3 = M2C_FIELD(arg0, u8 *, 5);
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_8017212C_overlay_054();
        M2C_FIELD(arg0, u8 *, 0x25C) |= 1;
        var_s1 = 0xC;
        if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
            if (M2C_FIELD(arg0, u8 *, 0x2D9) == 0) {
                var_s1 = 6;
                var_s2 = 9;
            } else {
                goto block_5;
            }
        } else {
block_5:
            var_s2 = 0xE;
        }
        func_801736A8_overlay_054(arg0, (var_s1 - 1) & 0xFF, 0, MULTU_HI(M2C_FIELD(arg0, u8 *, 0x26E)));
        if (((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U) || (temp_s3 == 6) || (temp_s3 == 8)) {
            func_80172280_overlay_054(arg0);
        }
    } else {
        func_801721D0_overlay_054(arg0);
    }
}
