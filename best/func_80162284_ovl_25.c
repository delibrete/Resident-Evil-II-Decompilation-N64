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

void func_80162284_ovl_25(void *arg0) {
    s32 temp_a3;
    u16 temp_a2;
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
        func_80089D34_ovl_01(arg0, 0x100);
        temp_a2 = M2C_FIELD(arg0, u16 *, 0x2B4);
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x2B8);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x190;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, u16 *, 0x66) = temp_a2;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_a3;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x2BC);
        M2C_FIELD(arg0, u8 *, 0x26F) |= 0x80;
        do { func_80032B8C_ovl_01(arg0, 0x800, temp_a2, temp_a3); } while (0);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            return;
        }
    case 2:
        return;
    case 3:
        if (func_80089D34_ovl_01(arg0, 0x100) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x2B8);
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x2BC);
            return;
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0xBU) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x32;
            M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            func_80032B8C_ovl_01(arg0, 0);
        }
        break;
    }
}
