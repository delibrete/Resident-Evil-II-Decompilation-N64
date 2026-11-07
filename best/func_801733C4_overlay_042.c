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

M2C_UNK func_80036D44(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80036F94(void *, s32, M2C_UNK);        /* extern */

void func_801733C4_overlay_042(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s8 *, 0x1E8) = 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        M2C_FIELD(arg0, s8 *, 0x2CC) = 0;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F4) + 1);
        func_80036F94(arg0, M2C_FIELD(arg0, s32 *, 0x2C4) + 0x28, 0x40);
        func_80036D44(arg0, 0, 0xF, 0);
        if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x9C4U) || ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) >= 0x100)) {
            M2C_FIELD(arg0, s8 *, 0x2B5) = 2;
            M2C_FIELD(arg0, s32 *, 4) = 0x010B0000;
        }
        return;
    }
}
