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

extern int D_800E108C;
extern unsigned char D_800E8FB2;
extern int D_800DF8DC;
extern int D_800E10D0;
s32 func_80040BE4_ovl_01();
extern char D_800C7650[];
extern s32 D_800E10F8;
extern s32 *D_800E138C;
extern char D_8017E680_overlay_010[];
extern u8 D_8017E6B4_overlay_010;
extern u8 D_8017E6D8_overlay_010;

void func_8017BDEC_ovl_10(void) {
    s32 **var_s1;
    
    s32 *temp_a0;
    
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;

    if (!(D_800E108C & 4) && (((u32) (D_800E8FB2 & 0xC) >> 3) != 0)) {
        if (D_8017E6D8_overlay_010 == 0xF) {
            goto block_4;
        }
        var_s1 = &D_800E138C;
        if (D_800DF8DC != &D_800E138C) {
            do {
                temp_s0 = *var_s1;
                temp_v1 = M2C_FIELD(temp_s0, s32 *, 0);
                if (temp_v1 & 1) {
                    var_v0 = temp_v1 | 0x80000;
                    if (!(M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xC400)) {
                        if (!(*(u8 *)(D_8017E680_overlay_010 + 0x34) & 1)) {
                            temp_v0 = D_800E10F8 - M2C_FIELD(temp_s0, s32 *, 0x28);
                            temp_v0_2 = M2C_FIELD((&D_800E138C - 0x294), s32 *, 8) - M2C_FIELD(temp_s0, s32 *, 0x30);
                            if (func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) >= 0x1C21) {
                                if (M2C_FIELD(temp_s0, u8 *, 8) != 0x29) {
                                    var_v0 = M2C_FIELD(temp_s0, s32 *, 0) | 0x80000;
                                    goto block_22;
                                }
                            } else {
                                goto block_21;
                            }
                        } else {
                            temp_v0_2 = M2C_FIELD(*(void * *)(D_800C7650 + 0x19D3C), s32 *, 0x28) - M2C_FIELD(temp_s0, s32 *, 0x28);
                            temp_lo = temp_v0_2 * temp_v0_2;
                            temp_v0_4 = M2C_FIELD(*(void * *)(D_800C7650 + 0x19D3C), s32 *, 0x30) - M2C_FIELD(temp_s0, s32 *, 0x30);
                            if (func_80040BE4_ovl_01(temp_lo + (temp_v0_4 * temp_v0_4), temp_lo) >= 0x1C21) {
                                if (M2C_FIELD(temp_s0, u8 *, 8) != 0x29) {
                                    var_v0 = M2C_FIELD(temp_s0, s32 *, 0) | 0x80000;
                                    goto block_22;
                                }
                            } else {
block_21:
                                var_v0 = M2C_FIELD(temp_s0, s32 *, 0) | 8;
                                goto block_22;
                            }
                        }
                    } else {
block_22:
                        M2C_FIELD(temp_s0, s32 *, 0) = var_v0;
                    }
                }
                var_s1 += 4;
            } while (var_s1 != D_800DF8DC);
        }
        if (!(D_8017E6B4_overlay_010 & 1)) {
            **(s32 * *)(D_800C7650 + 0x19CD0) &= 0xFFF7FFFF;
            **(s32 * *)(D_800C7650 + 0x19CD0) |= 8;
            return;
        }
        temp_a0 = M2C_FIELD(*(void * *)(D_800C7650 + 0x19D3C), s32 **, 0x250);
        *temp_a0 &= 0xFFF7FFFF;
        temp_a0 = M2C_FIELD(*(void * *)(D_800C7650 + 0x19D3C), s32 **, 0x250);
        *temp_a0 |= 8;
        D_800E10D0 = (s32) (D_800E10D0 | 0x80000);
        M2C_FIELD(*(void * *)(D_800C7650 + 0x19D3C), s32 *, 0) &= 0xFFF7FFFF;
        return;
    }
block_4:
    var_s1 = &D_800E138C;
    if (D_800DF8DC != &D_800E138C) {
        do {
            temp_s0_2 = *var_s1;
            temp_v1_2 = *temp_s0_2;
            if (temp_v1_2 & 1) {
                *temp_s0_2 = temp_v1_2 | 0x80000;
            }
            var_s1 += 4;
        } while (var_s1 != D_800DF8DC);
    }
    D_800E10D0 = (s32) (D_800E10D0 | 0x80000);
}
