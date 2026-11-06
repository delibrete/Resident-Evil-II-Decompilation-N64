/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_801726E0_overlay_063(s32, M2C_UNK, s16, M2C_UNK); /* extern */
M2C_UNK func_801729B0_overlay_063(s32, void *);     /* extern */

void func_80172820_overlay_063(s32 arg0, void *arg1) {
    u8 temp_v0;

    if (M2C_FIELD(arg1, u8 *, 7) == 0) {
        M2C_FIELD(arg1, u8 *, 1) = 0xCU;
    }
    func_801729B0_overlay_063(arg0, arg1);
    temp_v0 = M2C_FIELD(arg1, u8 *, 1) - 1;
    M2C_FIELD(arg1, u8 *, 1) = temp_v0;
    if ((temp_v0 << 0x18) == 0) {
        M2C_FIELD(arg1, u8 *, 9) = (u8) (M2C_FIELD(arg1, u8 *, 9) & 0x7F);
    }
    func_801726E0_overlay_063(arg0, 3, M2C_FIELD(arg1, s16 *, 2), 0);
    func_801726E0_overlay_063(arg0, 4, M2C_FIELD(arg1, s16 *, 4), 0);
}
