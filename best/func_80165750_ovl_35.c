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


extern int (*D_801667B0_overlay_035[])();
s32 func_80165140_overlay_035();
s32 func_801661F0_overlay_035();

void func_80165750_ovl_35(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;
    u32 var_a0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_801661F0_overlay_035(arg0, 2, 0xB);
        M2C_FIELD(arg0, s8 *, 0x2CF) = 0x2D;
        var_a0 = 0;
        var_v1 = 0;
        do {
            var_a0 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + var_v1), s32 *, 0x60) = 0x3F3F4F;
            var_v1 += 0x178;
        } while (var_a0 < 0xDU);
        func_80165140_overlay_035(arg0, arg1, arg2);
        return;
    }
    D_801667B0_overlay_035[M2C_FIELD(arg0, u8 *, 6)](arg0, arg1, arg2);
}
