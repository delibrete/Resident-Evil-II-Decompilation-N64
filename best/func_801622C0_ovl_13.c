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
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80165B44_overlay_013();

void func_801622C0_ovl_13(void *arg0, s32 arg1, s32 arg2) {
    
    s32 temp_hi_2;
    s32 temp_hi_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_hi;
    u32 temp_hi_3;
    u32 var_hi;
    u8 temp_s1;
    u8 temp_v0_7;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        var_v0 = func_80033634_ovl_01() & 0xFF;
        var_hi = MULTU_HI(var_v0);
        M2C_FIELD(arg0, u8 *, 6) = 7U;
block_30:
        M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) (var_v0 - ((var_hi >> 5) * 0x64));
        return;
    case 1:
        temp_v0 = func_80033634_ovl_01() & 0xFF;
        temp_hi = MULTU_HI(temp_v0, 0xCCCCCCCD);
        M2C_FIELD(arg0, u8 *, 0x2B5) = 5U;
        M2C_FIELD(arg0, u8 *, 6) = 0xAU;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((temp_v0 - ((temp_hi >> 2) * 5)) & 0xFF) << 0x10) + 0x700);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000700;
        M2C_FIELD(arg0, u8 *, 6) = 8U;
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000700;
        M2C_FIELD(arg0, u8 *, 6) = 9U;
        return;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000700;
        M2C_FIELD(arg0, u8 *, 6) = 0xBU;
        return;
    case 5:
        temp_v0_2 = func_80033634_ovl_01();
        temp_v0_3 = temp_v0_2 & 0xFF;
        temp_hi_2 = (temp_v0_2 & 0xFF) / 7;
        M2C_FIELD(arg0, u8 *, 6) = 8U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((temp_v0_3 - (((u32) (temp_hi_2 + ((u32) (temp_v0_3 - temp_hi_2) >> 1)) >> 2) * 7)) & 0xFF) << 0x10) + 0x02000700);
        return;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0A000700;
        temp_v0_4 = func_80033634_ovl_01() & 0xFF;
        temp_hi_3 = MULTU_HI(temp_v0_4, 0xCCCCCCCD);
        M2C_FIELD(arg0, u8 *, 6) = 0xDU;
        M2C_FIELD(arg0, u16 *, 0x2C0) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(arg0, u16 *, 0x2C2) = (u16) M2C_FIELD(arg0, u16 *, 0x32);
        M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) ((temp_v0_4 - ((temp_hi_3 >> 2) * 5)) + 0xF);
        return;
    case 7:
        if (M2C_FIELD(arg0, u8 *, 0x2B5) == 0) {
            temp_v0_5 = func_80033634_ovl_01();
            temp_v0_6 = temp_v0_5 & 0xFF;
            temp_hi_4 = (temp_v0_5 & 0xFF) / 7;
            temp_a0 = (u32) (temp_hi_4 + ((u32) (temp_v0_6 - temp_hi_4) >> 1)) >> 2;
            temp_v1_2 = temp_v0_6 - (temp_a0 * 7);
            temp_s1 = temp_v1_2 & 0xFF;
            M2C_FIELD(arg0, u8 *, 0x2B4) = temp_v1_2;
            if (temp_s1 == 6) {
                if (func_80033634_ovl_01(temp_a0) & 0xF) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                } else {
                    M2C_FIELD(arg0, u8 *, 6) = temp_s1;
                }
            } else {
                M2C_FIELD(arg0, u8 *, 6) = temp_v1_2;
            }
        }
block_33:
        M2C_FIELD(arg0, u8 *, 0x2B5) -= 1;
        return;
    case 9:
        temp_hi_2 = 0x10200;
block_24:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, temp_hi_2) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 0U;
            return;
        }
        return;
    case 10:
        temp_v0_7 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0_7;
        if ((temp_v0_7 & 0xFF) == 0xFF) {
            if (!(M2C_FIELD(arg0, u16 *, 0x2C6) & 0x20)) {
                if (func_80033634_ovl_01((u32) arg0, arg1) & 1) {
                    func_80077D48_ovl_01(6, arg0);
                }
            case 8:
            }
        }
        temp_hi_2 = 0x200;
        goto block_24;
    case 11:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 0xCU;
            var_v0 = func_80033634_ovl_01() & 0xFF;
            var_hi = MULTU_HI(var_v0, 0x51EB851F);
            goto block_30;
        }
    default:
        return;
    case 12:
        if (M2C_FIELD(arg0, u8 *, 0x2B5) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
        }
        goto block_33;
    case 13:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x10200);
        func_80165B44_overlay_013(arg0);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == M2C_FIELD(arg0, u8 *, 0x2B5)) {
            M2C_FIELD(arg0, u8 *, 6) = 0xEU;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((0x27 - M2C_FIELD(arg0, u8 *, 0x2B5)) << 0x10) + 0x0A000700);
            return;
        }
        break;
    case 14:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 0U;
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (s16) M2C_FIELD(arg0, u16 *, 0x2C0);
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (s16) M2C_FIELD(arg0, u16 *, 0x2C2);
            return;
        }
        func_80165B44_overlay_013(arg0);
        break;
    }
}
