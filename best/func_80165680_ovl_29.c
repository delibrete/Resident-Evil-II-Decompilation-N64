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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01(s32);                      /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, void *, s16 *); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *, void *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *, void *); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_80169720_overlay_029;
extern s8 D_8016976A_overlay_029;
extern s8 D_8016976B_overlay_029;

void func_80165680_ovl_29(void) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK temp_s2;
    M2C_UNK temp_s3;
    s16 temp_v0_5;
    s16 temp_v1_11;
    s16 temp_v1_7;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_v1_10;
    s32 temp_v1_17;
    s32 temp_v1_18;
    u16 temp_v0_3;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v0_8;
    u8 temp_v0;
    u8 temp_v0_4;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_14;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a2;
    void *temp_a2_10;
    void *temp_a2_11;
    void *temp_a2_12;
    void *temp_a2_13;
    void *temp_a2_14;
    void *temp_a2_15;
    void *temp_a2_16;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a2_7;
    void *temp_a2_8;
    void *temp_a2_9;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0_2;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_s0 = M2C_ERROR(/* Read from unset register $a0 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $a1 */);
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 6);
    temp_s3 = M2C_ERROR(/* Read from unset register $a2 */);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x13000000;
        M2C_FIELD(temp_s0, u8 *, 6) = 1U;
        temp_v1_2 = M2C_FIELD(temp_s0, void **, 0x234);
        M2C_FIELD(temp_s0, u8 *, 0x207) = 0U;
        M2C_FIELD(temp_s0, u8 *, 0x25C) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x25C) | 2);
        temp_a2 = temp_v1_2 + 0x2F0;
        M2C_FIELD(temp_v1_2, s32 *, 0x2F0) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x2F0) | 0xC00);
        M2C_FIELD(temp_a2, s16 *, 0x124) = 0x1000;
        M2C_FIELD(temp_a2, s16 *, 0x126) = 0x1000;
        M2C_FIELD(temp_a2, s16 *, 0x128) = 0x1000;
        temp_v1_3 = M2C_FIELD(temp_s0, void **, 0x234);
        M2C_FIELD(temp_v1_3, s32 *, 0x5E0) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x5E0) | 0x800);
        temp_v1_4 = M2C_FIELD(temp_s0, void **, 0x234);
        M2C_FIELD(temp_v1_4, s32 *, 0x468) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x468) | 0x4800);
        temp_v1_5 = M2C_FIELD(temp_s0, void **, 0x234);
        M2C_FIELD(temp_v1_5, s32 *, 0xD38) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0xD38) | 0x800);
        temp_v1_6 = M2C_FIELD(temp_s0, void **, 0x234);
        temp_a2_2 = temp_v1_6 + 0x178;
        M2C_FIELD(temp_v1_6, s32 *, 0x178) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0x178) | 0xC00);
        M2C_FIELD(temp_a2_2, s16 *, 0x124) = 0x1000;
        M2C_FIELD(temp_a2_2, s16 *, 0x126) = 0x1000;
        M2C_FIELD(temp_a2_2, s16 *, 0x128) = 0x1000;
        temp_a2_3 = M2C_FIELD(temp_s0, void **, 0x234);
        M2C_FIELD(temp_a2_3, s16 *, 0x124) = 0x1000;
        M2C_FIELD(temp_a2_3, s16 *, 0x126) = 0x1000;
        M2C_FIELD(temp_a2_3, s16 *, 0x128) = 0x1000;
        M2C_FIELD(temp_a2_3, s32 *, 0) = (s32) (M2C_FIELD(temp_a2_3, s32 *, 0) | 0x400);
        M2C_FIELD(temp_s0, s16 *, 0x1F4) = 0x96;
        M2C_FIELD(temp_s0, s8 *, 0x206) = 0;
        /* fallthrough */
    case 1:
        if (M2C_FIELD(temp_s0, u16 *, 0x270) & 1) {
            M2C_FIELD(temp_s0, u8 *, 6) = 2U;
        }
    default:
        break;
    case 2:
        temp_a2_4 = M2C_FIELD(temp_s0, void **, 0x234) + 0x2F0;
        if ((u32) (M2C_FIELD(temp_s0, u8 *, 0x1E9) - 6) < 0x1DU) {
            temp_a0 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0, u16 *, 0xC) - ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0xA) * 8));
            temp_a0_2 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_2, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x10) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0xA) * 8));
        }
        if ((u32) (M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x24) < 0x18U) {
            temp_a0_3 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_3, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0_3, u16 *, 0xC) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x23) * 4));
            temp_a0_4 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_4, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0_4, u16 *, 0x10) - ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x23) * 4));
        }
        if ((u32) (M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x3D) < 0xEU) {
            temp_a0_5 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_5, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0_5, u16 *, 0xC) - ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x3C) * 8));
            temp_a0_6 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_6, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0_6, u16 *, 0x10) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x3C) * 8));
        }
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x1E9) >= 0x4CU) {
            temp_a0_7 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_7, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0_7, u16 *, 0xC) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x4B) * 2));
            temp_a0_8 = M2C_FIELD(temp_a2_4, void **, 0x120);
            M2C_FIELD(temp_a0_8, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0_8, u16 *, 0x10) - ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x4B) * 2));
        }
        temp_a1 = M2C_FIELD(temp_a2_4, void **, 0x120);
        M2C_FIELD(temp_a1, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a1, u16 *, 0xC) - ((((M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) * 2) - 1) * 0x3C));
        temp_a2_5 = M2C_FIELD(temp_a2_4, void **, 0x120);
        M2C_FIELD(temp_a2_5, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a2_5, u16 *, 0x10) + ((((M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) * 2) - 1) * 0x3C));
        func_800662B8_ovl_01(temp_s0, temp_a2_4, temp_a2_5);
        func_800334F8_ovl_01(temp_s0, temp_s2, temp_s3, 0);
        if (func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x100) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x14000F00;
            M2C_FIELD(temp_s0, u8 *, 6) = 3U;
            M2C_FIELD(temp_s0, u8 *, 0x207) = 0U;
            M2C_FIELD(temp_s0, s16 *, 0x1F4) = 0;
        }
block_87:
        func_80032B8C_ovl_01(temp_s0, 0);
        break;
    case 3:
        func_800334F8_ovl_01(temp_s0, temp_s2, temp_s3, 0);
        temp_v0 = M2C_FIELD(temp_s0, u8 *, 0x1E9);
        if (temp_v0 == 0) {
            M2C_FIELD(temp_s0, u8 *, 0x1E9) = (u8) (temp_v0 + 1);
            func_800334F8_ovl_01(temp_s0, temp_s2, temp_s3, 0);
            M2C_FIELD(temp_s0, s8 *, 0x1EA) = 0xF;
            M2C_FIELD(temp_s0, u8 *, 0x1E9) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x1E9) - 1);
        }
        func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x100);
        func_80032B8C_ovl_01(temp_s0, 0);
        temp_v1_7 = M2C_FIELD(temp_s0, s16 *, 0x1F4);
        temp_a2_6 = M2C_FIELD(temp_s0, void **, 0x234) + 0x2F0;
        if (temp_v1_7 >= 0x1F) {
            if (!(M2C_FIELD(temp_s0, u8 *, 0x207) & 1)) {
                temp_a0_9 = M2C_FIELD(temp_a2_6, void **, 0x120);
                M2C_FIELD(temp_a0_9, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0_9, u16 *, 0xC) - ((temp_v1_7 - 0x1E) * 4));
                temp_a0_10 = M2C_FIELD(temp_a2_6, void **, 0x120);
                M2C_FIELD(temp_a0_10, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a0_10, u16 *, 0x10) + ((M2C_FIELD(temp_s0, s16 *, 0x1F4) - 0x1E) * 4));
                temp_v1_8 = M2C_FIELD(temp_a2_6, void **, 0x120);
                if ((s16) M2C_FIELD(temp_v1_8, u16 *, 0x10) >= 0x1001) {
                    M2C_FIELD(temp_v1_8, u16 *, 0x10) = 0x1000U;
                    M2C_FIELD(M2C_FIELD(temp_a2_6, void **, 0x120), u16 *, 0xC) = 0U;
                    M2C_FIELD(temp_s0, u8 *, 0x207) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x207) | 1);
                }
                goto block_21;
            }
            goto block_22;
        }
block_21:
        if (M2C_FIELD(temp_s0, u8 *, 0x207) & 1) {
block_22:
            if (!(M2C_FIELD(temp_s0, u8 *, 0x207) & 4)) {
                temp_v0_2 = M2C_FIELD(temp_a2_6, void **, 0x120);
                M2C_FIELD(temp_v0_2, u16 *, 0x10) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x10) - 0x80);
                temp_v1_9 = M2C_FIELD(temp_a2_6, void **, 0x120);
                if ((s16) M2C_FIELD(temp_v1_9, u16 *, 0x10) < 0) {
                    M2C_FIELD(temp_v1_9, u16 *, 0x10) = 0U;
                    M2C_FIELD(temp_s0, u8 *, 0x207) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x207) | 4);
                }
            }
        }
        temp_a1_2 = M2C_FIELD(temp_a2_6, void **, 0x120);
        M2C_FIELD(temp_a1_2, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a1_2, u16 *, 0xC) + ((((M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) * 2) - 1) * 0x78));
        temp_a2_7 = M2C_FIELD(temp_a2_6, void **, 0x120);
        M2C_FIELD(temp_a2_7, u16 *, 0x10) = (u16) (M2C_FIELD(temp_a2_7, u16 *, 0x10) - ((((M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) * 2) - 1) * 0x78));
        func_800662B8_ovl_01(temp_s0, temp_a2_6, temp_a2_7);
        if (M2C_FIELD(temp_s0, s16 *, 0x1F4) == 0x29) {
            func_800377B0_ovl_01(0x31FA0, M2C_FIELD(temp_s0, s16 *, 0x66), M2C_FIELD(temp_s0, void **, 0x234) + 0x4A0, NULL);
        }
        if (M2C_FIELD(temp_s0, s16 *, 0x1F4) >= 0x2E) {
            temp_a1_3 = M2C_FIELD(temp_s0, void **, 0x234);
            temp_v1_10 = M2C_FIELD(temp_a1_3, s32 *, 0x468);
            temp_a2_8 = temp_a1_3 + 0x468;
            if (temp_v1_10 & 0x400) {
                M2C_FIELD(temp_a1_3, s32 *, 0x468) = (s32) (temp_v1_10 & ~0x4000);
                temp_v0_3 = M2C_FIELD(temp_a2_8, u16 *, 0x126) + ((M2C_FIELD(temp_s0, s16 *, 0x1F4) - 0x2D) * 2);
                M2C_FIELD(temp_a2_8, u16 *, 0x126) = temp_v0_3;
                if ((s16) temp_v0_3 >= 0x1000) {
                    M2C_FIELD(temp_a1_3, s32 *, 0x468) = (s32) (M2C_FIELD(temp_a1_3, s32 *, 0x468) & ~0x400);
                    M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x15000F00;
                    M2C_FIELD(temp_s0, u8 *, 6) = 4U;
                    M2C_FIELD(temp_s0, u8 *, 0x207) = 0U;
                }
            }
        }
        M2C_FIELD(temp_s0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x1F4) + 1);
        break;
    case 4:
        func_800334F8_ovl_01(temp_s0, temp_s2, temp_s3, 0);
        temp_v0_4 = M2C_FIELD(temp_s0, u8 *, 0x1E9);
        if (temp_v0_4 == 0) {
            M2C_FIELD(temp_s0, u8 *, 0x1E9) = (u8) (temp_v0_4 + 1);
            func_800334F8_ovl_01(temp_s0, temp_s2, temp_s3, 0);
            M2C_FIELD(temp_s0, u8 *, 0x1E9) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x1E9) - 1);
        }
        if (func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x100) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x16000F00;
            M2C_FIELD(temp_s0, u8 *, 6) = 5U;
            M2C_FIELD(temp_s0, u8 *, 0x207) = 0U;
            M2C_FIELD(temp_s0, s16 *, 0x1F4) = 0;
            M2C_FIELD(temp_s0, u8 *, 0x25C) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x25C) & 0xFD);
        }
        goto block_87;
    case 5:
        temp_v0_5 = (u16) M2C_FIELD(temp_s0, s16 *, 0x1F4) + 1;
        M2C_FIELD(temp_s0, s16 *, 0x1F4) = temp_v0_5;
        if (temp_v0_5 == 0x2E) {
            M2C_FIELD(temp_s0, u8 *, 0x207) = 0U;
            M2C_FIELD(temp_s0, u8 *, 6) = 6U;
            M2C_FIELD(temp_s0, u8 *, 0x25C) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x25C) | 2);
            D_8016976A_overlay_029 = 0;
            D_8016976B_overlay_029 = 0;
        }
        if (M2C_FIELD(temp_s0, s16 *, 0x1F4) == 0x14) {
            D_8016976A_overlay_029 = -7;
            D_8016976B_overlay_029 = 0;
        }
        if (M2C_FIELD(temp_s0, s16 *, 0x1F4) == 0x1E) {
            D_8016976A_overlay_029 = -7;
            D_8016976B_overlay_029 = 7;
        }
        temp_v1_11 = M2C_FIELD(temp_s0, s16 *, 0x1F4);
        temp_a2_9 = M2C_FIELD(temp_s0, void **, 0x234) + 0x5E0;
        if (temp_v1_11 > 0) {
            if (!(M2C_FIELD(temp_s0, u8 *, 0x207) & 1)) {
                temp_a0_11 = M2C_FIELD(temp_a2_9, void **, 0x120);
                M2C_FIELD(temp_a0_11, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0_11, u16 *, 0xC) - (temp_v1_11 * 0x10));
                temp_v1_12 = M2C_FIELD(temp_a2_9, void **, 0x120);
                if ((s16) M2C_FIELD(temp_v1_12, u16 *, 0xC) < 0) {
                    M2C_FIELD(temp_v1_12, u16 *, 0xC) = 0U;
                    M2C_FIELD(temp_s0, u8 *, 0x207) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x207) | 1);
                }
            }
        }
        func_800662B8_ovl_01(temp_s0, temp_a2_9, temp_a2_9);
        break;
    case 6:
        sp10 = -0x64;
        sp12 = 0x64;
        sp14 = 0;
        temp_s1 = M2C_FIELD(temp_s0, void **, 0x234);
        temp_a2_10 = temp_s1 + 0xBC0;
        if (((u8) M2C_FIELD(temp_s0, u8 *, 0x1E9) >= 0x10U) && (M2C_FIELD(temp_s1, s32 *, 0xBC0) & 0x400)) {
            temp_v0_6 = M2C_FIELD(temp_a2_10, u16 *, 0x126) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0xF) << 5);
            M2C_FIELD(temp_a2_10, u16 *, 0x126) = temp_v0_6;
            if ((s16) temp_v0_6 >= 0x1000) {
                M2C_FIELD(temp_s1, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_s1, s32 *, 0xBC0) & ~0x400);
            }
            temp_a0_12 = (s16) M2C_FIELD(temp_a2_10, u16 *, 0x126) < 0x1000;
            M2C_FIELD(temp_a2_10, u16 *, 0x124) = (u16) (M2C_FIELD(temp_a2_10, u16 *, 0x124) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0xF) << 5));
            M2C_FIELD(temp_a2_10, u16 *, 0x128) = (u16) (M2C_FIELD(temp_a2_10, u16 *, 0x128) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0xF) << 5));
            if (temp_a0_12 == 0) {
                M2C_FIELD(temp_a2_10, u16 *, 0x124) = 0x1000U;
                M2C_FIELD(temp_a2_10, u16 *, 0x128) = 0x1000U;
            }
            if (M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) {
                func_800377B0_ovl_01(((func_80033634_ovl_01(temp_a0_12) & 0xFF) * 8) | 0x140800, 0, temp_s1 + 0xBF8, &sp10);
            }
        }
        temp_a2_11 = M2C_FIELD(temp_s0, void **, 0x234) + 0x8D0;
        if (((u8) M2C_FIELD(temp_s0, u8 *, 0x1E9) >= 0x15U) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x234), s32 *, 0x8D0) & 0x400)) {
            temp_v0_7 = M2C_FIELD(temp_a2_11, u16 *, 0x126) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x14) << 5);
            M2C_FIELD(temp_a2_11, u16 *, 0x126) = temp_v0_7;
            if ((s16) temp_v0_7 >= 0x1000) {
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x234), s32 *, 0x8D0) = (s32) (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x234), s32 *, 0x8D0) & ~0x400);
            }
            temp_a0_13 = (s16) M2C_FIELD(temp_a2_11, u16 *, 0x126) < 0x1000;
            M2C_FIELD(temp_a2_11, u16 *, 0x124) = (u16) (M2C_FIELD(temp_a2_11, u16 *, 0x124) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x14) << 5));
            M2C_FIELD(temp_a2_11, u16 *, 0x128) = (u16) (M2C_FIELD(temp_a2_11, u16 *, 0x128) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x14) << 5));
            if (temp_a0_13 == 0) {
                M2C_FIELD(temp_a2_11, u16 *, 0x124) = 0x1000U;
                M2C_FIELD(temp_a2_11, u16 *, 0x128) = 0x1000U;
            }
            if (M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) {
                func_800377B0_ovl_01(((func_80033634_ovl_01(temp_a0_13) & 0xFF) * 8) | 0x140800, 0, M2C_FIELD(temp_s0, void **, 0x234) + 0x908, &sp10);
            }
        }
        temp_s1_2 = M2C_FIELD(temp_s0, void **, 0x234);
        temp_a2_12 = temp_s1_2 + 0xA48;
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x1E9) >= 0x29U) {
            if (M2C_FIELD(temp_s1_2, s32 *, 0xA48) & 0x400) {
                temp_v0_8 = M2C_FIELD(temp_a2_12, u16 *, 0x126) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x28) << 5);
                M2C_FIELD(temp_a2_12, u16 *, 0x126) = temp_v0_8;
                if ((s16) temp_v0_8 >= 0x1000) {
                    M2C_FIELD(temp_s1_2, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_s1_2, s32 *, 0xA48) & ~0x400);
                }
                M2C_FIELD(temp_a2_12, u16 *, 0x124) = (u16) (M2C_FIELD(temp_a2_12, u16 *, 0x124) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x28) << 5));
                M2C_FIELD(temp_a2_12, u16 *, 0x128) = (u16) (M2C_FIELD(temp_a2_12, u16 *, 0x128) + ((M2C_FIELD(temp_s0, u8 *, 0x1E9) - 0x28) << 5));
                if ((s16) M2C_FIELD(temp_a2_12, u16 *, 0x126) >= 0x1000) {
                    M2C_FIELD(temp_a2_12, u16 *, 0x124) = 0x1000U;
                    M2C_FIELD(temp_a2_12, u16 *, 0x128) = 0x1000U;
                }
                if (M2C_FIELD(temp_s0, u8 *, 0x1E9) & 1) {
                    func_800377B0_ovl_01(((func_80033634_ovl_01((s32) temp_s0) & 0xFF) * 8) | 0x140800, 0, temp_s1_2 + 0xA80, &sp10);
                }
            }
        }
        func_800334F8_ovl_01(temp_s0, temp_s2, temp_s3, 0);
        if (func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x100) != 0) {
            M2C_FIELD(temp_s0, u8 *, 6) = 7U;
            M2C_FIELD(temp_s0, s16 *, 0x1F4) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0xFF00;
            M2C_FIELD(temp_s0, u16 *, 0x270) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x270) | 2);
        }
        goto block_87;
    case 7:
        if (M2C_FIELD(temp_s0, s16 *, 0x1F4) >= 0x1F) {
            func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x10);
        }
        M2C_FIELD(temp_s0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x1F4) + 1);
        if (M2C_FIELD(temp_s0, u16 *, 0x270) & 4) {
            M2C_FIELD(temp_s0, u8 *, 6) = 8U;
            M2C_FIELD(temp_s0, s16 *, 0x1E0) = 0xC8;
            M2C_FIELD(temp_s0, s16 *, 0x1E2) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x1E4) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x1F4) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x0F000000;
            func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x100);
            temp_v1_13 = M2C_FIELD(temp_s0, void **, 0x234);
            M2C_FIELD(temp_v1_13, s32 *, 0x2F0) = (s32) (M2C_FIELD(temp_v1_13, s32 *, 0x2F0) & ~0xC00);
            temp_v1_14 = M2C_FIELD(temp_s0, void **, 0x234);
            M2C_FIELD(temp_v1_14, s32 *, 0x5E0) = (s32) (M2C_FIELD(temp_v1_14, s32 *, 0x5E0) & ~0x800);
            temp_a0_14 = M2C_FIELD(temp_s0, void **, 0x234);
            M2C_FIELD(temp_a0_14, s32 *, 0x468) = (s32) (M2C_FIELD(temp_a0_14, s32 *, 0x468) & ~0x4800);
            temp_v1_15 = M2C_FIELD(temp_s0, void **, 0x234);
            M2C_FIELD(temp_v1_15, s32 *, 0xD38) = (s32) (M2C_FIELD(temp_v1_15, s32 *, 0xD38) & ~0x800);
            temp_v1_16 = M2C_FIELD(temp_s0, void **, 0x234);
            M2C_FIELD(temp_v1_16, s32 *, 0x178) = (s32) (M2C_FIELD(temp_v1_16, s32 *, 0x178) & ~0xC00);
            temp_a2_13 = M2C_FIELD(temp_s0, void **, 0x234);
            M2C_FIELD(temp_a2_13, s32 *, 0) = (s32) (M2C_FIELD(temp_a2_13, s32 *, 0) & ~0x400);
            func_80077D48_ovl_01(9, temp_s0, temp_a2_13);
        }
        break;
    case 8:
        temp_v1_17 = M2C_FIELD(temp_s0, s32 *, 0x2C) + (M2C_FIELD(temp_s0, s16 *, 0x1F4) * 0x1E);
        M2C_FIELD(temp_s0, s32 *, 0x2C) = temp_v1_17;
        M2C_FIELD(temp_s0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x1F4) + 1);
        if (temp_v1_17 >= -0x7CF) {
            M2C_FIELD(temp_s0, u8 *, 6) = 9U;
        }
        goto block_87;
    case 9:
        if (func_80089D34_ovl_01(temp_s0, temp_s2, temp_s3, 0x100) != 0) {
            M2C_FIELD(temp_s0, u8 *, 6) = 0xAU;
            M2C_FIELD(temp_s0, u8 *, 0x25C) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x25C) & 0xFD);
        }
        temp_v1_18 = M2C_FIELD(temp_s0, s32 *, 0x2C) + (M2C_FIELD(temp_s0, s16 *, 0x1F4) * 0x1E);
        M2C_FIELD(temp_s0, s32 *, 0x2C) = temp_v1_18;
        M2C_FIELD(temp_s0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x1F4) + 1);
        if (temp_v1_18 >= -0x18F) {
            M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
        }
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x1E9) < 0xCU) {
            {
        func_80032B8C_ovl_01(temp_s0, 0);break;}
        }
        break;
    case 10:
        M2C_FIELD(temp_s0, s32 *, 4) = 0x01010000;
        M2C_FIELD(temp_s0, s8 *, 0x2B6) = 0xA;
        M2C_FIELD(temp_s0, u8 *, 0x25C) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x25C) & 0xFD);
        break;
    }
    temp_a2_14 = M2C_FIELD(temp_s0, void **, 0x234) + 0x2F0;
    M2C_FIELD(temp_a2_14, s16 *, 0x124) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_a2_14, s16 *, 0x126) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_a2_14, s16 *, 0x128) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    temp_a2_15 = M2C_FIELD(temp_s0, void **, 0x234) + 0x178;
    M2C_FIELD(temp_a2_15, s16 *, 0x124) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_a2_15, s16 *, 0x126) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_a2_15, s16 *, 0x128) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    temp_a2_16 = M2C_FIELD(temp_s0, void **, 0x234);
    M2C_FIELD(temp_a2_16, s16 *, 0x124) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_a2_16, s16 *, 0x126) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_a2_16, s16 *, 0x128) = (s16) (0x1000 - (s8) *(M2C_FIELD(temp_s0, s8 *, 0x206) + &D_80169720_overlay_029));
    M2C_FIELD(temp_s0, s8 *, 0x206) = (s8) (((u8) M2C_FIELD(temp_s0, s8 *, 0x206) + 1) & 0x3F);
}
