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

s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();

void func_80173010_overlay_060(void *arg0, void *arg1) {
int __repair_literal;

    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 temp_a0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s4;
    u16 temp_v0_2;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2B5);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2B5) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2B8) = 0U;
        M2C_FIELD(arg0, u16 *, 0x2BA) = 0U;
        M2C_FIELD(arg0, s8 *, 0x2B7) = 0;
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg1, void **, 0x120);
        temp_v0 = M2C_FIELD(temp_v1_2, u16 *, 0x18) << 0x10;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v1_2, u16 *, 0x18) = (u16) (temp_v0 >> 0x11);
        }
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0, u16 *, 0xC) -= M2C_FIELD(arg0, u16 *, 0x2B8);
        if ((s16) M2C_FIELD(M2C_FIELD(arg1, void **, 0x120), u16 *, 0xC) < -0xFD0) {
            M2C_FIELD(arg0, u8 *, 0x2B5) = 2U;
        }
        M2C_FIELD(arg0, u16 *, 0x2B8) += 0x20;
        return;
    case 2:
        temp_v1_3 = M2C_FIELD(arg1, void **, 0x120);
__repair_literal = 4;

        M2C_FIELD(temp_v1_3, u16 *, 0xC) += 0x20 + ((func_80033634_ovl_01() & 0xFF) * __repair_literal * (1 - ((M2C_FIELD(arg0, u16 *, 0x2BA) & 1) * 2)));
        temp_v1_4 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_4, u16 *, 0xC) >= 0x1F41) {
            M2C_FIELD(temp_v1_4, u16 *, 0xC) = 0x1F40U;
        }
        temp_a1 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_a1, u16 *, 0xC) < -0x1388) {
            M2C_FIELD(temp_a1, u16 *, 0xC) = -0x1388U;
        }
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x2BA) + 1;
        M2C_FIELD(arg0, u16 *, 0x2BA) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x12D) {
            M2C_FIELD(arg0, u8 *, 0x2B5) = 3U;
        }
        temp_a0_2 = (s16) M2C_FIELD(arg0, u16 *, 0x2BA);
        var_s4 = 0x1FA0;
        if (temp_a0_2 >= 0x97) {
            var_s4 = 0x17D0;
        }
        if (temp_a0_2 >= 0xFB) {
            var_s4 = 0xFD0;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2BA) & 1) {
            temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
            sp10 = 0x80 - (func_80033634_ovl_01(temp_a0_2, temp_a1) & 0xFF);
            sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            temp_s0 = func_80033634_ovl_01();
            temp_s1 = func_80033634_ovl_01();
            func_800377B0_ovl_01((((temp_s0 & 1) + (temp_s1 & 0x10)) << 0x10) | (var_s4 + ((func_80033634_ovl_01() & 0xFF) * 4)), M2C_FIELD(arg0, s16 *, 0x66), temp_s2 + 0x618, &sp10);
            return;
        }
    default:
        return;
    case 3:
        temp_v1_5 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_5, u16 *, 0xC) += 0x40;
        if ((s16) M2C_FIELD(M2C_FIELD(arg1, void **, 0x120), u16 *, 0xC) >= 0x2EE1) {
            M2C_FIELD(arg0, u8 *, 0x2B5) = 4U;
            return;
        }
        break;
    case 4:
        temp_v1_6 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_6, u16 *, 0xC) -= 0x80;
        if ((s16) M2C_FIELD(M2C_FIELD(arg1, void **, 0x120), u16 *, 0xC) < 0) {
            M2C_FIELD(arg0, u8 *, 0x2B5) = 5U;
        }
        break;
    }
}
