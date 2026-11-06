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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_8008A974_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016F4D0_overlay_042(void *);          /* extern */
M2C_UNK func_8016F6B4_overlay_042(void *, void *, M2C_UNK); /* extern */
M2C_UNK func_8017378C_overlay_042(void *);          /* extern */
extern M2C_UNK D_80175704_overlay_042;

void func_8017477C_overlay_042(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
int __repair_constant = 3;

    M2C_UNK var_a3;
    s16 temp_a0;
    s16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        func_80077D48_ovl_01(7, arg0);
        func_8016F6B4_overlay_042(arg0, (M2C_FIELD(arg0, u8 *, 0x2CB) * 8) + &D_80175704_overlay_042, 0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x19000000;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) | 2);
        M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 0x546);
        /* fallthrough */
    case 1:
        func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000);
        M2C_FIELD(arg0, s8 *, 0x1E9) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x2C) >= M2C_FIELD(arg0, s16 *, 0x2E0)) {
            M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
            func_8016F4D0_overlay_042(arg0);
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x19000000;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~8);
            M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + 1);
        case 2:
            var_a3 = 0x400;
block_10:
            M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + func_8008A974_ovl_01(arg0, arg1, arg2, var_a3));
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s16 *, 0x1F2) < 0) {
            M2C_FIELD(arg0, s8 *, 0x2CE) = __repair_constant;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0xC);
        } else {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x16000000;
            M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + 1);
        case 4:
            var_a3 = 0x1000;
            goto block_10;
        }
        break;
    case 5:
        M2C_FIELD(arg0, s8 *, 0x2CE) = __repair_constant;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0xC);
        func_8017378C_overlay_042(arg0);
        break;
    }
    temp_a0 = M2C_FIELD(arg0, s16 *, 0x2E0);
    temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x30;
    if ((M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x1E2) + 0x48) < temp_a0) {
        M2C_FIELD(arg0, s16 *, 0x1E2) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + temp_v0);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s16 *, 0x1E0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s16 *, 0x1E4));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0;
}
