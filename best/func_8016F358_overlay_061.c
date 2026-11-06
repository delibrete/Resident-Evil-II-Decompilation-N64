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

extern unsigned char D_800E133F;
s32 func_80032DEC_ovl_01();
s32 func_80033634_ovl_01();
s32 func_8004279C_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80173020_overlay_061();
s32 func_801730A8_overlay_061();
extern char D_800C7650[];
extern s32 D_800E10D4;

void func_8016F358_overlay_061(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    u16 sp12;                                       /* compiler-managed */
    u16 sp14;                                       /* compiler-managed */
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_v0;
    u16 temp_v0_4;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_v1;
    void *temp_a0_3;
    void *temp_a0_6;
    void *temp_s0;
    void *temp_s0_2;
    
    void *temp_s0_4;
    void *var_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    var_s0 = M2C_FIELD(arg0, void **, 0x234);
    switch (temp_v1) {
    case 0:
        var_s0 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u8 *, 0x25C) &= 0xFD;
        M2C_FIELD(var_s0, s32 *, 0) |= 1;
        func_80032DEC_ovl_01(arg0, M2C_FIELD(*(void * *)(D_800C7650 + 0x19CB4), s32 *, 0x4C), M2C_FIELD(*(void * *)(D_800C7650 + 0x19CB4), s32 *, 0x54));
        M2C_FIELD(arg0, u16 *, 0x68) = -0x40U;
        M2C_FIELD(arg0, u16 *, 0x1F6) = 0x28U;
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        M2C_FIELD(arg0, s16 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        M2C_FIELD(var_s0, u16 *, 0x124) += M2C_FIELD(arg0, u16 *, 0x1F4);
        M2C_FIELD(arg0, u16 *, 0x1F4) += 2;
        if ((s16) M2C_FIELD(var_s0, u16 *, 0x124) >= 0xDDD) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01003F00;
        }
        if (((s16) M2C_FIELD(var_s0, u16 *, 0x124) >= 0x801) && (M2C_FIELD(arg0, s8 *, 0x207) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09003F00;
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
        }
        if (M2C_FIELD(arg0, s8 *, 0x206) == 0) {
            temp_a0 = M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(arg0, u16 *, 0x68) -= temp_a0;
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_a0 - 1);
            return;
        }
    default:
        return;
    case 2:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        temp_v0 = M2C_FIELD(var_s0, u16 *, 0x124) + M2C_FIELD(arg0, u16 *, 0x1F4);
        M2C_FIELD(var_s0, u16 *, 0x124) = temp_v0;
        if ((s16) temp_v0 >= 0x1001) {
            M2C_FIELD(var_s0, u16 *, 0x124) = 0x1000U;
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0xF) + 0xA);
        }
        if (M2C_FIELD(arg0, s8 *, 0x206) == 0) {
            temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(arg0, u16 *, 0x68) -= temp_a0_2;
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_a0_2 - 8);
        }
        func_80173020_overlay_061(arg0, M2C_FIELD(arg0, void **, 0x234));
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x234);
        sp10 = 0x5DC;
        sp12 = 0;
        sp14 = 0;
        temp_s0 = temp_a0_3 + 0x468;
        func_8004279C_ovl_01(temp_a0_3 + 0x4A0, &sp10, &sp10);
        temp_v0_2 = sp12 + M2C_FIELD(temp_s0, u16 *, 0x52);
        sp12 = temp_v0_2;
        temp_a0_4 = M2C_FIELD(temp_s0, u16 *, 0x56);
        sp14 += temp_a0_4;
        if ((temp_v0_2 >= -0x18F) && (M2C_FIELD(arg0, s8 *, 0x206) == 0)) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01(temp_a0_4) & 0xF) + 0x1E);
            M2C_FIELD(arg0, s8 *, 0x206) = 1;
            M2C_FIELD(arg0, u16 *, 0x1F6) = 0x40U;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2BC) & 2) {
            temp_a2 = D_800E133F;
            if (temp_a2 == 0) {
                D_800E10D4 = 0x02020000;
                D_800E133F = (u8) (temp_a2 | 0x80);
                *(void * *)(D_800C7650 + 0x19CD0) = arg0;
                func_80052C00_ovl_01(3, 0, temp_a2, D_800C7650 + 0x18000);
                func_80052C9C_ovl_01(0xA, 0xFA, 0);
            }
        }
        if ((s16) sp14 < -0x6978) {
            M2C_FIELD(arg0, u16 *, 0x66) -= 0x20;
        }
        if ((s16) sp14 >= -0x4D57) {
            M2C_FIELD(arg0, u16 *, 0x66) += 0x20;
            return;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s8 *, 0x206) == 0) {
            temp_a0_5 = M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(arg0, u16 *, 0x68) -= temp_a0_5;
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_a0_5 - 8);
        }
        func_80173020_overlay_061(arg0, M2C_FIELD(arg0, void **, 0x234));
        temp_a0_6 = M2C_FIELD(arg0, void **, 0x234);
        sp10 = 0x5DC;
        sp12 = 0;
        sp14 = 0;
        temp_s0_2 = temp_a0_6 + 0x468;
        func_8004279C_ovl_01(temp_a0_6 + 0x4A0, &sp10, &sp10);
        sp12 += M2C_FIELD(temp_s0_2, u16 *, 0x52);
        temp_v0_3 = sp14 + M2C_FIELD(temp_s0_2, u16 *, 0x56);
        sp14 = temp_v0_3;
        if (temp_v0_3 < -0x6978) {
            M2C_FIELD(arg0, u16 *, 0x66) -= 0x20;
        }
        if (sp14 >= -0x4D57) {
            M2C_FIELD(arg0, u16 *, 0x66) += 0x20;
        }
        if (((s16) sp12 >= -0x18F) && (M2C_FIELD(arg0, s8 *, 0x206) == 0)) {
            M2C_FIELD(arg0, s8 *, 0x206) = 1;
            M2C_FIELD(arg0, u16 *, 0x1F6) = 0x40U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0xF) + 0x14);
            M2C_FIELD(arg0, u8 *, 6) = 4U;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2BC) & 2) {
            temp_a2_2 = D_800E133F;
            if (temp_a2_2 == 0) {
                D_800E10D4 = 0x02020000;
                D_800E133F = (u8) (temp_a2_2 | 0x80);
                *(void * *)(D_800C7650 + 0x19CD0) = arg0;
                func_80052C00_ovl_01(3, 0, temp_a2_2, D_800C7650 + 0x18000);
                func_80052C9C_ovl_01(0xA, 0xFA, 0);
                return;
            }
        }
        break;
    case 4:
        temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_4;
        if ((s16) temp_v0_4 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 5U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x3F00;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 8U;
        }
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_a0_3, u16 *, 0x5C) += M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(temp_a0_3, u16 *, 0x1D4) -= M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(temp_a0_3, u16 *, 0x34C) -= M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(temp_a0_3, u16 *, 0x4C4) -= ((s32) (M2C_FIELD(arg0, u16 *, 0x1F6) << 0x10) >> 0x11);
        M2C_FIELD(arg0, u16 *, 0x1F6) -= (M2C_FIELD(arg0, s8 *, 0x206) * 2);
        func_801730A8_overlay_061(arg0, M2C_FIELD(arg0, void **, 0x234));
        temp_s0_4 = M2C_FIELD(arg0, void **, 0x234);
        if ((u32) ((((s16) M2C_FIELD(arg0, u16 *, 0x68) + (s16) M2C_FIELD(temp_s0_4, u16 *, 0x5C) + (s16) M2C_FIELD(temp_s0_4, u16 *, 0x1D4) + (s16) M2C_FIELD(temp_s0_4, u16 *, 0x34C) + (s16) M2C_FIELD(temp_s0_4, u16 *, 0x4C4)) & 0xFFF) - 0x801) < 0x7FFU) {
            M2C_FIELD(temp_s0_4, u16 *, 0x5C) -= M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(temp_s0_4, u16 *, 0x1D4) += M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(temp_s0_4, u16 *, 0x34C) += M2C_FIELD(arg0, u16 *, 0x1F6);
            M2C_FIELD(temp_s0_4, u16 *, 0x4C4) += ((s32) (M2C_FIELD(arg0, u16 *, 0x1F6) << 0x10) >> 0x11);
            func_801730A8_overlay_061(arg0, M2C_FIELD(arg0, void **, 0x234));
            M2C_FIELD(arg0, u16 *, 0x1F6) = 0U;
            M2C_FIELD(arg0, s8 *, 0x206) = 0;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 5U;
            return;
        }
        break;
    case 5:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        M2C_FIELD(var_s0, u16 *, 0x124) -= M2C_FIELD(arg0, u16 *, 0x1F4);
        M2C_FIELD(arg0, u16 *, 0x1F4) += 8;
        M2C_FIELD(arg0, u16 *, 0x68) += 4;
        if ((s16) M2C_FIELD(var_s0, u16 *, 0x124) < 0) {
            M2C_FIELD(var_s0, u16 *, 0x124) = 0U;
            M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        }
        break;
    }
}
