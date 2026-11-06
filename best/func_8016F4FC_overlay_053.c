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

s32 func_80032B8C_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8016F89C_overlay_053();

void func_8016F4FC_overlay_053(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u8 *, 0x26F) |= 0x80;
        func_80077D48_ovl_01(6, arg0);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((func_80033634_ovl_01(arg0) & 0x1F) + 0x1E);
            func_8016F89C_overlay_053(arg0, M2C_FIELD(arg0, u8 *, 0x1AB) & 1);
            M2C_FIELD(arg0, s32 *, 4) = 0x01070000;
            M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
            M2C_FIELD(arg0, u8 *, 0x26F) |= 0x80;
        }
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x1E;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        func_80032B8C_ovl_01(arg0, 0x800);
        return;
    }
}
