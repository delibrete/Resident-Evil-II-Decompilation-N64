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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_8016E800_overlay_050(void *, s32);         /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;
extern u16 D_80172D04_overlay_050;
extern u16 D_80172D06_overlay_050;
extern u16 D_80172D08_overlay_050;
extern u16 D_80172D0A_overlay_050;
extern u16 D_80172D0C_overlay_050;
extern u16 D_80172D0E_overlay_050;
extern u16 D_80172D10_overlay_050;
extern u16 D_80172D12_overlay_050;
extern u16 D_80172D14_overlay_050;
extern u16 D_80172D16_overlay_050;
extern u16 D_80172D18_overlay_050;
extern u16 D_80172D1A_overlay_050;
extern u16 D_80172D1C_overlay_050;
extern u16 D_80172D1E_overlay_050;
extern u16 D_80172D20_overlay_050;
extern u16 D_80172D22_overlay_050;
extern u16 D_80172D24_overlay_050;
extern u16 D_80172D26_overlay_050;
extern u16 D_80172D28_overlay_050;
extern u16 D_80172D2A_overlay_050;
extern M2C_UNK D_80173334_overlay_050;
extern M2C_UNK func_8016F87C_overlay_050;
extern M2C_UNK func_80172834_overlay_050;

void func_8016F898_overlay_050(void *arg0, s32 arg1, s32 arg2) {
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s16 var_v0_7;
    s16 var_v0_8;
    s32 *temp_s3;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    u16 temp_v1_2;
    u32 temp_v1_3;
    void *temp_v1_4;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_s3 = M2C_FIELD(arg0, s32 **, 0x234);
    if ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xF) != 7) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x21C);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x1A4);
        var_a1 = temp_a2;
        M2C_FIELD(arg0, s32 *, 0x1A4) = temp_a2;
        var_a2 = M2C_FIELD(arg0, s32 *, 0x220);
        M2C_FIELD(arg0, s32 *, 0x21C) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x220) = (s32) M2C_FIELD(arg0, s32 *, 0x218);
        M2C_FIELD(arg0, s32 *, 0x218) = var_a2;
    }
    M2C_FIELD(&D_800C7650, M2C_UNK **, 0x18300) = &func_80172834_overlay_050;
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1AA);
    M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    M2C_FIELD(arg0, u16 *, 0x2C0) = 0U;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0xFF000000;
    if (temp_v1_2 & 0x4000) {
        M2C_FIELD(arg0, u8 *, 5) = (u8) *((temp_v1_2 & 0xF) + &D_80173334_overlay_050);
    }
    temp_v1_3 = (u32) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0x300) >> 8;
    switch (temp_v1_3) {                            /* irregular */
    case 0:
        var_v0 = 0x4F1A;
block_21:
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0;
        break;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x2C0) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C0) | 6);
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0 = D_80172D18_overlay_050 + 0x4E20;
        } else {
            var_v0 = D_80172D04_overlay_050 + 0x4E20;
        }
        goto block_21;
    case 2:
        M2C_FIELD(arg0, u16 *, 0x2C0) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C0) | 0x4B);
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0 = D_80172D1A_overlay_050 + 0x4E20;
        } else {
            var_v0 = D_80172D06_overlay_050 + 0x4E20;
        }
        goto block_21;
    case 3:
        M2C_FIELD(arg0, u16 *, 0x2C0) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C0) | 0x1A);
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0 = D_80172D1C_overlay_050 + 0x4E20;
        } else {
            var_v0 = D_80172D08_overlay_050 + 0x4E20;
        }
        goto block_21;
    }
    temp_a0 = ((M2C_FIELD(&D_800C7650, s16 *, 0x215F8) + 1) << 8) + M2C_FIELD(&D_800C7650, s16 *, 0x215FA);
    if (temp_a0 == 0x117) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_2 = D_80172D1E_overlay_050 + 0x4E20;
        } else {
            var_v0_2 = D_80172D0A_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_2;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x100);
    }
    if (temp_a0 == 0x10D) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_3 = D_80172D20_overlay_050 + 0x4E20;
        } else {
            var_v0_3 = D_80172D0C_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_3;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x100);
    }
    if (temp_a0 == 0x507) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_4 = D_80172D22_overlay_050 + 0x4E20;
        } else {
            var_v0_4 = D_80172D0E_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_4;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x100);
    }
    if (temp_a0 == 0x109) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_5 = D_80172D24_overlay_050 + 0x4E20;
        } else {
            var_v0_5 = D_80172D10_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_5;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x100);
    }
    if (temp_a0 == 0x20D) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_6 = D_80172D26_overlay_050 + 0x4E20;
        } else {
            var_v0_6 = D_80172D12_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_6;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x100);
    }
    if (temp_a0 == 0x20C) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_7 = D_80172D28_overlay_050 + 0x4E20;
        } else {
            var_v0_7 = D_80172D14_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_7;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x200);
    }
    if (temp_a0 == 0x602) {
        if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
            var_v0_8 = D_80172D2A_overlay_050 + 0x4E20;
        } else {
            var_v0_8 = D_80172D16_overlay_050 + 0x4E20;
        }
        M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0_8;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFCFF) | 0x200);
    }
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s16 *, 0x2BA) = 0;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C7) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C9) = 0;
    M2C_FIELD(&D_800C7650, s32 *, 0x19CA4) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
    M2C_FIELD(&D_800C7650, s32 *, 0x19CA8) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
    M2C_FIELD(arg0, s8 *, 0x25D) = 9;
    M2C_FIELD(arg0, M2C_UNK **, 0x254) = &D_800E10D0;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_v1_4 = M2C_FIELD(arg0, s32 **, 0x234) + 0xD38;
    M2C_FIELD(temp_v1_4, s16 *, 0x134) = 0x14;
    M2C_FIELD(temp_v1_4, s16 *, 0x136) = 0x14;
    M2C_FIELD(temp_v1_4, s16 *, 0x138) = 0x230;
    M2C_FIELD(temp_v1_4, s16 *, 0x13A) = 0x138;
    M2C_FIELD(temp_v1_4, s16 *, 0x130) = 0;
    M2C_FIELD(temp_v1_4, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000000;
    do { func_80089D34_ovl_01(arg0, var_a1, var_a2, 0x100); } while (0);
    *temp_s3 |= 0x4000;
    M2C_FIELD(arg0, M2C_UNK **, 0x2A4) = &func_8016F87C_overlay_050;
    M2C_FIELD(&D_800C7650, s32 *, 0x18284) = func_8016E800_overlay_050(arg0, M2C_FIELD(&D_800C7650, s32 *, 0x18284));
    M2C_FIELD(arg0, s16 *, 0x134) = -0x6A4;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x6A4;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x2BC;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1C000000);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x02EE0226, 0, arg0 + 0x28);
}
