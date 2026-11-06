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

extern short D_800E10FA;
extern short D_800E1102;
s16 func_80032D44_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_80040E88_ovl_01();
s32 func_8004279C_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089C1C_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
extern char D_800E8FC8[];

void func_801752F4_overlay_039(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s16 sp30;
    u16 sp32;
    s16 sp34;
    s32 var_a0;
    s16 temp_s0;
    u16 temp_a0;
    u16 temp_a0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0_2;
    
    
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s1_7;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        temp_a0_2 = M2C_FIELD(arg0, void **, 0x29C);
        M2C_FIELD(arg0, u8 *, 0x206) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x131);
        temp_v1_2 = M2C_FIELD(temp_a0_2, u8 *, 0x131);
        if ((temp_v1_2 == 3) || (temp_v1_2 == 6)) {
            M2C_FIELD(arg0, s8 *, 0x26E) = 3;
            return;
        }
        temp_a0 = M2C_FIELD(temp_a0_2, u16 *, 0x132);
        temp_a0_2 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_a0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2B4) << 0x18) + 0xF00);
        M2C_FIELD(temp_a0_2, s32 *, 0) &= ~0x40;
        if (M2C_FIELD(arg0, u8 *, 0x2D5) == 0) {
            var_a0 = 0xD;
            if (func_80033634_ovl_01(temp_a0) & 1) {
                var_a0 = 0xC;
            }
            func_80077D48_ovl_01(var_a0, arg0);
            M2C_FIELD(arg0, u8 *, 0x2D5) = 0x96U;
        }
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0x12CU;
        M2C_FIELD(arg0, u8 *, 0x207) = 0x32U;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, u16 *, 0x1F6) = 0U;
        temp_s0 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), D_800E10FA, D_800E1102);
        temp_a0_2 = M2C_FIELD(arg0, void **, 0x234);
        temp_s1_3 = temp_a0_2 + ((s8) M2C_FIELD(arg0, u8 *, 0x206) * 0x178);
        func_800377B0_ovl_01(((func_80033634_ovl_01((u16) temp_a0_2) & 0xFF) * 8) + 0x1770, temp_s0, temp_s1_3 + 0x38, 0);
    case 1:
        sp30 = 0;
        sp34 = 0;
        sp32 = M2C_FIELD(arg0, u16 *, 0x1F4);
        func_80040E88_ovl_01(&sp30, &sp10);
        do { func_8004279C_ovl_01(&sp10, arg0 + 0x1E0, &sp30); } while (0);
        func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x100);
        temp_a0_3 = M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(arg0, s32 *, 0x28) += sp30;
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_a0_3 + (s8) M2C_FIELD(arg0, u8 *, 0x207));
        M2C_FIELD(arg0, u16 *, 0x1E0) -= temp_a0_3;
        M2C_FIELD(arg0, s32 *, 0x30) += sp34;
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1E0) < 0) {
            M2C_FIELD(arg0, u8 *, 6) = 6U;
            return;
        }
    default:
        return;
    case 2:
        temp_s1_4 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        M2C_FIELD(arg0, u8 *, 0x207) = (u8) ((func_80033634_ovl_01() & 0x3F) + 0x1E);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1000U;
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) M2C_FIELD(temp_s1_4, u16 *, 0x22);
        /* fallthrough */
    case 3:
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x207) - 1;
        M2C_FIELD(arg0, u8 *, 0x207) = temp_v0;
        if ((s8) temp_v0 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
        }
        func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x100);
        temp_s1_5 = M2C_FIELD(arg0, void **, 0x234);
        sp10 = M2C_FIELD(temp_s1_5, s32 *, 8);
        sp14 = M2C_FIELD(temp_s1_5, s32 *, 0xC);
        sp18 = M2C_FIELD(temp_s1_5, s32 *, 0x10);
        sp1C = M2C_FIELD(temp_s1_5, s32 *, 0x14);
        sp20 = M2C_FIELD(temp_s1_5, s32 *, 0x18);
        sp24 = M2C_FIELD(temp_s1_5, s32 *, 0x1C);
        sp28 = M2C_FIELD(temp_s1_5, s32 *, 0x20);
        sp2C = M2C_FIELD(temp_s1_5, s32 *, 0x24);
        func_80089C1C_ovl_01(&D_800E8FC8, &sp10, temp_s1_5 + 8, (s16) M2C_FIELD(arg0, u16 *, 0x1F4));
        M2C_FIELD(temp_s1_5, s32 *, 0x20) = (s32) (s16) M2C_FIELD(arg0, u16 *, 0x1F6);
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) >= 0x401) {
            M2C_FIELD(arg0, u16 *, 0x1F4) -= 0x200;
            return;
        }
        break;
    case 4:
        M2C_FIELD(arg0, u8 *, 6) = 5U;
        M2C_FIELD(arg0, u8 *, 0x207) = 0x14U;
        /* fallthrough */
    case 5:
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x207) - 1;
        M2C_FIELD(arg0, u8 *, 0x207) = temp_v0_2;
        if ((s8) temp_v0_2 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 6U;
        }
        func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x100);
        temp_s1_6 = M2C_FIELD(arg0, void **, 0x234);
        sp10 = M2C_FIELD(temp_s1_6, s32 *, 8);
        sp14 = M2C_FIELD(temp_s1_6, s32 *, 0xC);
        sp18 = M2C_FIELD(temp_s1_6, s32 *, 0x10);
        sp1C = M2C_FIELD(temp_s1_6, s32 *, 0x14);
        sp20 = M2C_FIELD(temp_s1_6, s32 *, 0x18);
        sp24 = M2C_FIELD(temp_s1_6, s32 *, 0x1C);
        sp28 = M2C_FIELD(temp_s1_6, s32 *, 0x20);
        sp2C = M2C_FIELD(temp_s1_6, s32 *, 0x24);
        func_80089C1C_ovl_01(&D_800E8FC8, &sp10, temp_s1_6 + 8, (s16) M2C_FIELD(arg0, u16 *, 0x1F4));
        M2C_FIELD(temp_s1_6, s32 *, 0x20) = (s32) (s16) M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(arg0, u16 *, 0x1F4) += 0x99;
        return;
    case 6:
        temp_s1_7 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_s1_7, s32 *, 0) &= ~0x40;
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        if (func_80033634_ovl_01() & 1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
        }
        break;
    }
}
