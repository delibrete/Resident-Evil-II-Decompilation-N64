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

s32 func_80036C14();
s32 func_80036D44();

void func_8017347C_overlay_042(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0) |= 8;
        func_80036C14(arg0, 0xE, 0);
        M2C_FIELD(arg0, s8 *, 0x1E8) = 0;
        M2C_FIELD(arg0, u8 *, 0x1E9) = 0U;
        if (M2C_FIELD(arg0, s16 *, 0x270) != 0) {
            M2C_FIELD(arg0, u8 *, 6) += 1;
            return;
        }
        return;
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >= 5U) {
            func_80036764_ovl_01_510_24(arg0 + 0x2C, 0, 0x64, arg3);
        }
        if (func_80036D44(arg0, 0xE, 0, 0) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01050000;
            M2C_FIELD(arg0, s32 *, 0) &= ~8;
            M2C_FIELD(arg0, u16 *, 0x1AA) &= 0xFFF;
        }
        break;
    }
}
