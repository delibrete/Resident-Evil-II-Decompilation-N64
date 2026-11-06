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
s32 func_80089D34_ovl_01();
s32 func_801730B0_overlay_063();

void func_8016FFA0_overlay_063(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000F00;
        func_801730B0_overlay_063(arg0, (void *)1);
        M2C_FIELD(arg0, s8 *, 0x2C5) = 1;
        M2C_FIELD(arg0, s16 *, 0x64) = 0;
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
        M2C_FIELD(arg0, s32 *, 0) |= 4;
        func_801730B0_overlay_063(arg0, 1);
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x30F;
        func_80032B8C_ovl_01(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000000;
        M2C_FIELD(arg0, u16 *, 0x68) -= 0x400;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    }
}
