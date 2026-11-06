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

extern int D_800E8AD0;
extern int D_800DFB84;
extern int D_800E10AC;
s32 func_8006BB3C_ovl_01();
s32 func_800837DC_ovl_01();
s32 func_80170748_overlay_007();
extern char D_800C7650[];
extern char D_80171744_overlay_007[];
extern s32 D_80171ADC_overlay_007;
extern s32 D_80171AE8_overlay_007;
extern s32 D_80171AF4_overlay_007;
extern u16 D_80171D2C_overlay_007;
extern u8 D_80171D2E_overlay_007;
extern u8 D_80171D2F_overlay_007;
extern u8 D_80171D30_overlay_007;
extern u8 D_80171D31_overlay_007;
extern char D_80171D32_overlay_007[];
extern u8 D_80171D34_overlay_007;
extern u16 D_80171D44_overlay_007;
extern char D_80171DD0_overlay_007[];
extern u8 D_80171DF1_overlay_007;
extern s32 D_80171FE8_overlay_007;
extern s32 D_80172158_overlay_007;
extern char D_801722BC_overlay_007[];

void func_80170074_overlay_007(void) {
    u16 sp10;
    s32 sp14;
    s16 sp18;
    s32 temp_v1;
    s8 var_v1;
    char *var_v1_2;
    u16 temp_a0;
    u16 var_a2_2;
    u16 var_v0;
    u32 temp_hi;
    u32 temp_t1;
    u32 temp_v0_2;
    u32 var_a1;
    u32 var_a2;
    short temp_v0;

    sp10 = M2C_UNALIGNED32(*(s32 *)(D_80171744_overlay_007 + 0));
    sp14 = M2C_UNALIGNED32(*(s32 *)(D_80171744_overlay_007 + 4));
    sp18 = *(s16 *)(D_80171744_overlay_007 + 8);
    temp_v1 = D_800E8AD0 + func_8006BB3C_ovl_01(-1);
    temp_t1 = temp_v1 - D_800DFB84;
    temp_v0 = (temp_v1 - D_800DFB84) / 216000;
    D_80171D31_overlay_007 = temp_v0;
    temp_v0_2 = temp_v0 & 0xFF;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 >= 0x63U) {
            var_v1 = 0x20;
            goto block_5;
        }
        *(s8 *)(D_801722BC_overlay_007 + 0) = (s8) ((D_80171D31_overlay_007 / 10) + 0x17);
        *(s8 *)(D_801722BC_overlay_007 + 1) = (s8) ((D_80171D31_overlay_007 % 10) + 0x17);
    } else {
        var_v1 = 0x17;
block_5:
        *(s8 *)(D_801722BC_overlay_007 + 0) = var_v1;
        *(s8 *)(D_801722BC_overlay_007 + 1) = var_v1;
    }
    *(s8 *)(D_801722BC_overlay_007 + 2) = 0x24;
    *(s8 *)(D_801722BC_overlay_007 + 5) = 0x24;
    *(u8 *)(D_80171D32_overlay_007 + 0) = (u8) (((temp_v1 - D_800DFB84) % 216000) / 3600);
    temp_hi = MULTU_HI(((temp_v1 - D_800DFB84) % 3600));
    D_80171D34_overlay_007 = D_80171DF1_overlay_007;
    *(u8 *)(D_80171D32_overlay_007 + 1) = (u8) (((temp_v1 - D_800DFB84) % 3600) / 60);
    *(s8 *)(D_801722BC_overlay_007 + 3) = (s8) ((*(u8 *)(D_80171D32_overlay_007 + 0) / 10) + 0x17);
    *(s8 *)(D_801722BC_overlay_007 + 4) = (s8) ((*(u8 *)(D_80171D32_overlay_007 + 0) % 10) + 0x17);
    *(s8 *)(D_801722BC_overlay_007 + 6) = (s8) ((*(u8 *)(D_80171D32_overlay_007 + 1) / 10) + 0x17);
    *(s8 *)(D_801722BC_overlay_007 + 7) = (s8) ((*(u8 *)(D_80171D32_overlay_007 + 1) % 10) + 0x17);
    if ((u32) (D_80171DF1_overlay_007 & 0xFF) >= 0x63U) {
        *(s8 *)(D_801722BC_overlay_007 + 8) = 0x20;
        *(s8 *)(D_801722BC_overlay_007 + 9) = 0x20;
    } else {
        *(s8 *)(D_801722BC_overlay_007 + 8) = (s8) ((D_80171D34_overlay_007 / 10) + 0x17);
        *(s8 *)(D_801722BC_overlay_007 + 9) = (s8) ((D_80171D34_overlay_007 % 10) + 0x17);
    }
    var_a1 = 0x83D60;
    var_a2 = 0;
    if (temp_t1 > 0x83D60U) {
loop_12:
        var_a2 += 1;
        var_a1 += 0x34BC0;
        if (var_a2 < 0xAU) {
            if (var_a1 < temp_t1) {
                goto loop_12;
            }
        } else {
            var_a2 = 0xA;
        }
    }
    D_80171D2E_overlay_007 = 0x64 - (var_a2 * 0xA);
    if ((u16) *(u16 *)(D_80171DD0_overlay_007 + 0x20) >= 0x14U) {
        D_80171D2F_overlay_007 = 0;
    } else {
        D_80171D2F_overlay_007 = 0x64 - (*(u16 *)(D_80171DD0_overlay_007 + 0x20) * 5);
    }
    if ((u16) *(u16 *)(D_80171DD0_overlay_007 + 0x1E) >= 6U) {
        D_80171D30_overlay_007 = 0;
    } else {
        D_80171D30_overlay_007 = 0x64 - (*(u16 *)(D_80171DD0_overlay_007 + 0x1E) * 0xF);
    }
    temp_a0 = D_80171D30_overlay_007 + (D_80171D2E_overlay_007 + D_80171D2F_overlay_007);
    D_80171D2C_overlay_007 = temp_a0;
    if (D_800E10AC & 0x800000) {
        if (temp_a0 < 0x32U) {
            D_80171D2C_overlay_007 = 0;
        } else {
            D_80171D2C_overlay_007 = temp_a0 - 0x32;
        }
    }
    var_a2_2 = 0;
    if ((u16) D_80171D2C_overlay_007 < sp10) {
        var_v1_2 = &sp10;
        do {
            var_v1_2 += 2;
            var_a2_2 += 1;
        } while ((u16) D_80171D2C_overlay_007 < (u16) *(u16 *)var_v1_2);
    }
    D_80171D2C_overlay_007 = var_a2_2;
    if (!(D_800E10AC & 0x04000000)) {
        if ((D_80171D2E_overlay_007 == 0x64) && ((u32) (var_a2_2 & 0xFFFF) < 2U)) {
            if (func_80170748_overlay_007(0x11, &sp10, var_a2_2, temp_hi) == 0) {
                D_80171AE8_overlay_007 = 0x808080;
                D_80171D44_overlay_007 |= 0xA0;
            } else {
                goto block_34;
            }
        } else if (func_80170748_overlay_007(0x11, &sp10, var_a2_2, temp_hi) != 0) {
block_34:
            D_80171AE8_overlay_007 = 0;
            D_80171D44_overlay_007 |= 0x20;
        }
        if (D_800E10AC & 0x40000000) {
            if ((D_80171D30_overlay_007 == 0x64) && ((u16) D_80171D2C_overlay_007 < 2U)) {
                if (func_80170748_overlay_007(0xF) == 0) {
                    D_80171ADC_overlay_007 = 0x808080;
                    D_80171D44_overlay_007 |= 0x90;
                } else {
                    goto block_41;
                }
            } else if (func_80170748_overlay_007(0xF) != 0) {
block_41:
                D_80171ADC_overlay_007 = 0;
                D_80171D44_overlay_007 |= 0x10;
            }
            if ((D_80171D2F_overlay_007 == 0x64) && ((u16) D_80171D2C_overlay_007 < 2U)) {
                if (func_80170748_overlay_007(0x12) == 0) {
                    D_80171AF4_overlay_007 = 0x808080;
                    D_80171D44_overlay_007 |= 0xC0;
                } else {
                    goto block_47;
                }
            } else if (func_80170748_overlay_007(0x12) != 0) {
block_47:
                D_80171AF4_overlay_007 = 0;
                D_80171D44_overlay_007 |= 0x40;
            }
            if (func_800837DC_ovl_01(&D_80172158_overlay_007, 0x13) != 0) {
                if (func_800837DC_ovl_01(&D_80172158_overlay_007, 0x14) == 0) {
                    if ((u8) *(u8 *)(D_80172158_overlay_007 + 0x156) >= 2U) {
                        func_80083788_ovl_01(&D_80172158_overlay_007, 0x14U);
                        var_v0 = D_80171D44_overlay_007 | 0x200;
                        goto block_54;
                    }
                }
            } else if (D_80171D2C_overlay_007 == 0) {
                func_80083788_ovl_01(&D_80172158_overlay_007, 0x13U);
                var_v0 = D_80171D44_overlay_007 | 0x100;
block_54:
                D_80171D44_overlay_007 = var_v0;
            }
            if ((func_800837DC_ovl_01(&D_80171FE8_overlay_007, 0x9C) == 0) && (func_800837DC_ovl_01(D_80171FE8_overlay_007 + 0x170, 0x12) != 0)) {
                D_80171D44_overlay_007 |= 0x400;
            }
        } else {
            if (func_80170748_overlay_007(0xF) != 0) {
                D_80171ADC_overlay_007 = 0;
                D_80171D44_overlay_007 |= 0x10;
            }
            if (func_80170748_overlay_007(0x12) != 0) {
                D_80171AF4_overlay_007 = 0;
                D_80171D44_overlay_007 |= 0x40;
            }
            if (func_800837DC_ovl_01(&D_80171FE8_overlay_007, 0x9C) == 0) {
                func_80083788_ovl_01(D_80171FE8_overlay_007 + 0x170, 0x12U);
            }
        }
    }
}
