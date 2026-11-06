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

s32 D_8006A8B0(u8, s32);                            /* extern */
s32 func_80032C9C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80083800_ovl_01();
s32 func_8008A974_ovl_01();
s8 func_8016ECD4_overlay_042();
s32 func_8016F278_overlay_042();
extern char D_801756FC_overlay_042[];
extern char D_80175868_overlay_042[];

void func_80171C8C_overlay_042(void *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 4;

    s16 sp10;
    s16 sp14;
    s32 temp_v1_2;
    s8 temp_s0;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000F00;
        M2C_FIELD(arg0, s8 *, 0x2CE) = __repair_constant;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C8) |= 2;
        /* fallthrough */
    case 1:
        temp_s0 = func_8016ECD4_overlay_042(arg0, &D_801756FC_overlay_042);
        if ((func_8016F278_overlay_042(arg0) != 0) || (temp_s0 & 0x20000000)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x010D0000;
            return;
        }
        if (temp_s0 >= 0) {
            M2C_FIELD(arg0, s32 *, 0) |= __repair_constant;
            if (temp_s0 & 0x40000000) {
                M2C_FIELD(arg0, u8 *, 6) = 5U;
            case 5:
                M2C_FIELD(arg0, s32 *, 0x1E8) = 0x10000F00;
                M2C_FIELD(arg0, u8 *, 6) = 6U;
            case 6:
                if (func_8008A974_ovl_01(arg0, arg1, arg2) != 0) {
                    sp10 = 0x670;
                    sp14 = 0;
                    temp_a0 = (M2C_FIELD(arg0, u8 *, 0x206) - M2C_FIELD(arg0, u8 *, 0x207)) << 0xA;
                    *(u16 *)(D_80175868_overlay_042 + 2) = temp_a0;
                    func_80083800_ovl_01((s16) (temp_a0 + (M2C_FIELD(arg0, u8 *, 0x206) << 0xA)), &sp10, &sp10);
                    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x207) + ((s32) (*(u16 *)(D_80175868_overlay_042 + 2) << 0x10) >> 0x1A);
                    temp_v0 = temp_v1_2 & 3;
                    M2C_FIELD(arg0, u8 *, 0x207) = temp_v0;
                    if (temp_v1_2 & 1) {
                        M2C_FIELD(arg0, s32 *, 0x28) += sp10;
                        M2C_FIELD(arg0, s32 *, 0x30) = D_8006A8B0(temp_v0 & 0xFF, M2C_FIELD(arg0, s32 *, 0x2BC));
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x30) += sp14;
                        M2C_FIELD(arg0, s32 *, 0x28) = D_8006A8B0(M2C_FIELD(arg0, u8 *, 0x207), M2C_FIELD(arg0, s32 *, 0x2BC));
                    }
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                    goto block_23;
                }
            } else {
                M2C_FIELD(arg0, u8 *, 6) = 3U;
                M2C_FIELD(arg0, s8 *, 0x2B4) = temp_s0;
            case 3:
                M2C_FIELD(arg0, s32 *, 0x1E8) = 0x11000F00;
                M2C_FIELD(arg0, u8 *, 6) = 4U;
            case 4:
                if (func_8008A974_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
                    temp_a0_2 = (M2C_FIELD(arg0, u8 *, 0x206) - M2C_FIELD(arg0, u8 *, 0x207)) << 0xA;
                    *(u16 *)(D_80175868_overlay_042 + 2) = temp_a0_2;
                    temp_a3 = (u8) M2C_FIELD(arg0, s8 *, 0x2B4);
                    sp10 = 0x69D;
                    sp14 = 0;
                    temp_a0_3 = temp_a0_2 + ((M2C_FIELD(arg0, u8 *, 0x206) - temp_a3) << 0xA);
                    *(u16 *)(D_80175868_overlay_042 + 2) = temp_a0_3;
                    func_80083800_ovl_01((s16) (temp_a0_3 + (M2C_FIELD(arg0, u8 *, 0x206) << 0xA)), &sp10, &sp10, temp_a3);
                    if ((u8) M2C_FIELD(arg0, s8 *, 0x2B4) & 1) {
                        M2C_FIELD(arg0, s32 *, 0x28) += sp10;
                        M2C_FIELD(arg0, s32 *, 0x30) = D_8006A8B0((u8) M2C_FIELD(arg0, s8 *, 0x2B4), M2C_FIELD(arg0, s32 *, 0x2BC));
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x30) += sp14;
                        M2C_FIELD(arg0, s32 *, 0x28) = D_8006A8B0((u8) M2C_FIELD(arg0, s8 *, 0x2B4), M2C_FIELD(arg0, s32 *, 0x2BC));
                    }
                    M2C_FIELD(arg0, u16 *, 0x2C8) |= 0x100;
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                    M2C_FIELD(arg0, u8 *, 0x207) = (u8) M2C_FIELD(arg0, s8 *, 0x2B4);
block_23:
                    M2C_FIELD(arg0, s32 *, 0) &= ~4;
                }
            }
        default:
            return;
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_8008A974_ovl_01(arg0, arg1, arg2, 0x100);
        func_80032C9C_ovl_01(arg0, 0, 0);
        return;
    }
}
