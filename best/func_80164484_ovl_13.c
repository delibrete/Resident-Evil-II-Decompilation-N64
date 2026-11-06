/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_80165BD8_overlay_013(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166080_overlay_013(void *);          /* extern */
M2C_UNK func_80166158_overlay_013(void *, s32);     /* extern */
extern M2C_UNK D_800C7650;

void func_80164484_ovl_13(void *p, void *arg1, void *arg2) {
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s16 var_v0;
    s32 temp_s2;
    s8 temp_v0;
    s8 temp_v0_2;
    u16 temp_a0;
    u16 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v1;
    void *temp_s0;

    temp_v1 = M2C_FIELD(p, u8 *, 6);
    switch (temp_v1) {
    case 0:
        func_80077D48_ovl_01(3, p);
        M2C_FIELD(p, s32 *, 0x1E8) = 0x09000700;
        M2C_FIELD(p, s16 *, 0x1E2) = 0;
        M2C_FIELD(p, s16 *, 0x1E0) = 0;
        M2C_FIELD(p, s8 *, 0x2B9) = 0;
        M2C_FIELD(p, u16 *, 0x2C0) = 0U;
        M2C_FIELD(p, s16 *, 0x2C2) = (s16) (func_80032D44_ovl_01((s32) M2C_FIELD(&D_800C7650, s16 *, 0x19AAA), (s32) M2C_FIELD(&D_800C7650, s16 *, 0x19AB2), (s32) M2C_FIELD(p, s16 *, 0x2A), (s32) M2C_FIELD(p, s16 *, 0x32)) - M2C_FIELD(p, u16 *, 0x66));
        M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x18288), s16 *, 0x1E0) = 0x64;
        var_v0 = 0xC8;
        if (!(func_80033634_ovl_01() & 1)) {
            var_v0 = -0xC8;
        }
        M2C_FIELD(p, s16 *, 0x2C4) = var_v0;
        do { func_80166080_overlay_013(p); } while (0);
        func_80166158_overlay_013(p, (func_80033634_ovl_01() & 1) | 2);
        M2C_FIELD(p, u8 *, 0x2B5) = 3U;
        M2C_FIELD(p, u8 *, 0x2B6) = 3U;
        M2C_FIELD(p, u8 *, 6) = 1U;
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(p, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(p, u8 *, 6) = 2U;
        }
        /* fallthrough */
    case 2:
        temp_s0 = p + 0x2B4;
        temp_v0 = M2C_FIELD(p, u8 *, 0x2B5) - 1;
        M2C_FIELD(temp_s0, s8 *, 1) = temp_v0;
        if ((temp_v0 & 0xFF) == 0xFF) {
            func_80166158_overlay_013(p, 1);
        }
        temp_v0_2 = M2C_FIELD(p, u8 *, 0x2B6) - 1;
        M2C_FIELD(temp_s0, s8 *, 2) = temp_v0_2;
        if ((temp_v0_2 & 0xFF) == 0xFF) {
            func_80166158_overlay_013(p, 1);
        }
        temp_v0_3 = M2C_FIELD(p, u16 *, 0x2C0) + 0x14;
        M2C_FIELD(p, u16 *, 0x2C0) = temp_v0_3;
        M2C_FIELD(p, s32 *, 0x2C) = (s32) (M2C_FIELD(p, s32 *, 0x2C) + (s16) temp_v0_3);
        func_80032B8C_ovl_01((s32) M2C_FIELD(&D_800C7650, void **, 0x18288));
        temp_a0 = (u16) M2C_FIELD(p, s16 *, 0x2C4);
        if (M2C_FIELD(p, s16 *, 0x2C4) < 0) {
            if (M2C_FIELD(p, s16 *, 0x68) >= -0x7FF) {
                M2C_FIELD(p, s16 *, 0x68) = (s16) ((u16) M2C_FIELD(p, s16 *, 0x68) + temp_a0);
            }
        } else if (M2C_FIELD(p, s16 *, 0x68) < 0x800) {
            M2C_FIELD(p, s16 *, 0x68) = (s16) ((u16) M2C_FIELD(p, s16 *, 0x68) + temp_a0);
        }
        temp_s2 = M2C_FIELD(p, s16 *, 0x25E) - 0xFA;
        if (temp_s2 < M2C_FIELD(p, s32 *, 0x2C)) {
            func_80077D48_ovl_01(5, p);
            M2C_FIELD(p, s32 *, 0x2C) = temp_s2;
            M2C_FIELD(p, s32 *, 0x1E8) = 0x0B000700;
            M2C_FIELD(p, u8 *, 0x2B5) = (u8) (func_80033634_ovl_01() & 0xF);
            M2C_FIELD(p, s16 *, 0x68) = 0;
            if (M2C_FIELD(p, s16 *, 0x1F2) < 0) {
                M2C_FIELD(p, u8 *, 0x2B5) = 0xBU;
                func_80035AAC_ovl_01_108(p);
                M2C_FIELD(p, u8 *, 6) = 5U;
                return;
            }
            M2C_FIELD(p, u8 *, 6) = 3U;
            return;
        }
    default:
        return;
    case 3:
        temp_v0_4 = M2C_FIELD(p, u8 *, 0x2B5) - 1;
        M2C_FIELD(p, u8 *, 0x2B5) = temp_v0_4;
        if ((temp_v0_4 & 0xFF) == 0xFF) {
            M2C_FIELD(p, u8 *, 6) = 4U;
        }
        func_80089D34_ovl_01(p, arg1, arg2, 0x200);
        M2C_FIELD(p, u8 *, 0x1E9) = (u8) (M2C_FIELD(p, u8 *, 0x1E9) - 1);
        return;
    case 4:
        if (func_80089D34_ovl_01(p, arg1, arg2, 0x200) != 0) {
            if (func_80032EA4_ovl_01(p, (s32) M2C_FIELD(p, s16 *, 0x260), (s32) M2C_FIELD(p, s16 *, 0x262), 0x400) != 0) {
                var_a1 = 1;
                var_a2 = 9;
            } else {
                M2C_FIELD(p, s16 *, 0x1F4) = (s16) (func_80033634_ovl_01() & 0xF);
                var_a1 = 1;
block_29:
                var_a2 = 0;
            }
            func_80165BD8_overlay_013(p, var_a1, var_a2);
        }
        break;
    case 5:
        func_80089D34_ovl_01(p, arg1, arg2, 0x200);
        temp_v0_5 = M2C_FIELD(p, u8 *, 0x2B5) - 1;
        M2C_FIELD(p, u8 *, 0x2B5) = temp_v0_5;
        if ((temp_v0_5 & 0xFF) == 0xFF) {
            var_a1 = 7;
            goto block_29;
        }
        break;
    }
}
