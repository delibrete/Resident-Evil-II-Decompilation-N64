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

s32 func_8004DD80_overlay_001();
s32 func_8004E130_overlay_001();
s32 func_8004E2FC_overlay_001();
s32 func_8004EDB4_overlay_001();
s32 func_8004F9EC_overlay_001();
s32 func_8004FC74_overlay_001();
s32 func_80050994_overlay_001();
s32 func_80050E4C_overlay_001();
s32 func_80050EE8_overlay_001();
s32 func_80066C70_overlay_001();
extern char D_800C7650_overlay_001[];
extern s32 D_800E10D0_overlay_001;
extern char D_800E7650_overlay_001[];

void func_8004FEDC_ovl_01(void) {
    s32 **var_s0;
    s32 **var_s0_2;
    s32 *temp_a0;
    s32 *temp_a0_2;
    s32 *var_fp;
    char *var_s0_3;
    char *var_s1;
    char *var_s1_2;
    s32 temp_v1;
    
    
    u16 temp_s3;
    u16 temp_s6;
    u8 temp_v0;
    void *var_s0_4;
    void *var_s2;

    temp_v1 = 0;
    if (!(*(s32 *)(D_800C7650_overlay_001 + 0x19A60) & 0x08000000)) {
        var_fp = NULL;
        *(s32 *)(D_800C7650_overlay_001 + 0x19A5C) = (s32) (*(s32 *)(D_800C7650_overlay_001 + 0x19A5C) & ~0x2000);
        func_8004FC74_overlay_001();
        func_8004F9EC_overlay_001(&D_800E10D0_overlay_001);
        var_s1 = D_800C7650_overlay_001 + 0x1A248;
        if (*(s32 *)(D_800C7650_overlay_001 + 0x20F48) != var_s1) {
            var_s2 = var_s1 + 0x1A8;
            do {
                if (*(s32 *)var_s1 & 1) {
                    if (M2C_FIELD(var_s2, u8 *, -0x1A0) == 2) {
                        func_80050994_overlay_001(var_s1);
                    }
                    func_80050EE8_overlay_001(var_s1);
                    M2C_FIELD(var_s2, u8 *, -6) = (u8) (M2C_FIELD(var_s2, s32 *, -0x17C) / -1800);
                    if ((*(u8 *)(D_800C7650_overlay_001 + 0x19A85) != 1) && (*(u8 *)(D_800C7650_overlay_001 + 0x19A85) != 0xA) && (*(u8 *)(D_800C7650_overlay_001 + 0x19A85) != 2)) {
                        M2C_FIELD(var_s2, s8 *, 0x38) = 0;
                    }
                    var_s0 = D_800C7650_overlay_001 + 0x19D3C;
                    if (var_s0 != *(s32 *)(D_800C7650_overlay_001 + 0x1828C)) {
                        do {
                            temp_a0 = *var_s0;
                            if (*temp_a0 & 1) {
                                func_8004DD80_overlay_001(temp_a0, var_s1, 0);
                            }
                            var_s0 += 4;
                        } while (var_s0 != *(s32 *)(D_800C7650_overlay_001 + 0x1828C));
                    }
                    if (*(s32 *)var_s1 & 0x200) {
                        func_8004DD80_overlay_001(D_800C7650_overlay_001 + 0x19A80, var_s1, 1);
                    } else if (var_s1 != *(s32 *)(D_800C7650_overlay_001 + 0x19D00)) {
                        if (func_8004DD80_overlay_001(&D_800E10D0_overlay_001, var_s1, 2) != 0) {
                            temp_v1 += 1;
                            if (*(u8 *)(D_800C7650_overlay_001 + 0x19C22) == M2C_FIELD(var_s2, u8 *, -6)) {
                                if (func_8004E2FC_overlay_001(&D_800E10D0_overlay_001, var_s1) != 0) {
                                    var_fp = var_s1;
                                }
                            }
                        }
                    } else {
                        func_8004EDB4_overlay_001(D_800C7650_overlay_001 + 0x19A80, var_s1);
                    }
                    if ((M2C_FIELD(var_s2, u8 *, -0x1A0) == 2) && (M2C_FIELD(var_s2, u8 *, -0x1A4) == 0) && (func_80066C70_overlay_001(var_s1, 0x4000, 0x100, 2) & 4)) {
                        func_80050E4C_overlay_001(var_s1);
                        M2C_FIELD(var_s2, u8 *, -0x1A4) = 1U;
                    }
                }
                M2C_FIELD(var_s2, s16 *, 0) = 0;
                var_s1 += 0x368;
                var_s2 += 0x368;
            } while (var_s1 != *(s32 *)(D_800E7650_overlay_001 + 0xF48));
        }
        if ((temp_v1 == 1) && (var_fp != NULL)) {
            temp_v1 = M2C_FIELD(var_fp, s32 *, 0);
            if (!(temp_v1 & 2) && (temp_v1 & 0x80)) {
                temp_s3 = M2C_FIELD(var_fp, u16 *, 0x2A);
                temp_s6 = M2C_FIELD(var_fp, u16 *, 0x32);
                temp_v0 = M2C_FIELD(var_fp, u8 *, 0x1E0) + 1;
                M2C_FIELD(var_fp, u8 *, 0x1E0) = temp_v0;
                if ((u32) (temp_v0 & 0xFF) >= 6U) {
                    func_8004DD80_overlay_001(D_800C7650_overlay_001 + 0x19A80, var_fp, 1);
                    if (func_80066C70_overlay_001(var_fp, 0x4000, 0) & 1) {
                        M2C_FIELD(var_fp, u8 *, 0x1E0) = 0U;
                        goto block_55;
                    }
                    var_s0_2 = D_800C7650_overlay_001 + 0x19D3C;
                    temp_v1 = 0;
                    if (var_s0_2 != *(s32 *)(D_800C7650_overlay_001 + 0x1828C)) {
                        do {
                            temp_a0_2 = *var_s0_2;
                            if (*temp_a0_2 & 1) {
                                temp_v1 += func_8004DD80_overlay_001(temp_a0_2, var_fp, 1);
                            }
                            var_s0_2 += 4;
                        } while (var_s0_2 != *(s32 *)(D_800C7650_overlay_001 + 0x1828C));
                    }
                    var_s0_3 = D_800C7650_overlay_001 + 0x1A248;
                    if (var_s0_3 != *(s32 *)(D_800C7650_overlay_001 + 0x20F48)) {
                        do {
                            if ((var_fp != var_s0_3) && (*(s32 *)var_s0_3 & 1)) {
                                temp_v1 += func_8004E130_overlay_001(var_s0_3, var_fp);
                            }
                            var_s0_3 += 0x368;
                        } while (var_s0_3 != *(s32 *)(D_800C7650_overlay_001 + 0x20F48));
                    }
                    if (temp_v1 != 0) {
                        M2C_FIELD(var_fp, u8 *, 0x1E0) = 0U;
                        goto block_55;
                    }
                    *(s32 *)(D_800C7650_overlay_001 + 0x19A5C) = (s32) (*(s32 *)(D_800C7650_overlay_001 + 0x19A5C) | 0x2000);
                    if (M2C_FIELD(var_fp, u8 *, 0x1E0) != 6) {
                        M2C_FIELD(var_fp, u8 *, 0x1E0) = 7U;
                    } else {
block_55:
                        goto block_56;
                    }
                } else {
block_56:
                    M2C_FIELD(var_fp, s32 *, 0x28) = (s32) (s16) temp_s3;
                    M2C_FIELD(var_fp, s32 *, 0x30) = (s32) (s16) temp_s6;
                    func_80050EE8_overlay_001(var_fp);
                    func_80066C70_overlay_001(var_fp, 0x4000, 0);
                }
            }
        }
        var_s1_2 = D_800C7650_overlay_001 + 0x1A248;
        if (var_s1_2 != *(s32 *)(D_800C7650_overlay_001 + 0x20F48)) {
            var_s0_4 = var_s1_2 + 0x1B6;
            do {
                if (*(s32 *)var_s1_2 & 1) {
                    func_8004DD80_overlay_001(D_800C7650_overlay_001 + 0x19A80, var_s1_2, 0);
                }
                var_s1_2 += 0x368;
                M2C_FIELD(var_s0_4, u16 *, -2) = (u16) M2C_FIELD(var_s0_4, u16 *, -0x94);
                M2C_FIELD(var_s0_4, u16 *, 0) = (u16) M2C_FIELD(var_s0_4, u16 *, -0x8C);
                var_s0_4 += 0x368;
            } while (var_s1_2 != *(s32 *)(D_800C7650_overlay_001 + 0x20F48));
        }
        if (*(s32 *)(D_800C7650_overlay_001 + 0x19D00) == 0) {
            *(u16 *)(D_800C7650_overlay_001 + 0x19C70) = (u16) (*(u16 *)(D_800C7650_overlay_001 + 0x19C70) & 0xF9FF);
        }
    }
}
