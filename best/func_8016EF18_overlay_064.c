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

M2C_UNK func_80037C80_ovl_01(M2C_UNK, s16, s32, s16 *, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_8016EF18_overlay_064(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp20;
    s16 sp22;
    s16 sp24;
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01003F00;
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1EU;
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, u8 *, 7) = 3U;
        sp18 = 0;
        sp1A = 0;
        sp1C = 0;
        sp20 = 0;
        sp22 = 0;
        sp24 = 0;
        func_80037C80_ovl_01(0x2B001000, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x234) + 0x328, &sp18, &sp20);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x3F00;
        func_80077D48_ovl_01(0, arg0);
        /* fallthrough */
    case 3:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        if (M2C_FIELD(arg0, u8 *, 0x1EA) == 0) {
            M2C_FIELD(arg0, s16 *, 6) = 0;
        }
        break;
    }
}
