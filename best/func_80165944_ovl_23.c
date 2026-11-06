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

M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_800331E8_ovl_01();                         /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, void *);      /* extern */
s16 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80162870_overlay_023(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s16 *); /* extern */
M2C_UNK func_801630D4_overlay_023(void *, s16);     /* extern */

void func_80165944_ovl_23(void *arg0) {
    s16 sp20;
    s16 sp22;
    s16 sp24;
    s16 temp_s0_2;
    s16 temp_s0_4;
    s16 temp_v0;
    u16 temp_s0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u8 temp_v1;
    u8 var_v0;
    void *temp_s0_3;
    void *temp_s2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s2 = M2C_FIELD(arg0, void **, 0x250);
    temp_s0 = M2C_FIELD(temp_s2, u16 *, 0x66);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03000300;
        func_80077B0C_ovl_01(0x04010001, arg0 + 0x28);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 5U;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0x2BCU;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x206) = 1;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 0x12);
        /* fallthrough */
    case 1:
        func_801630D4_overlay_023(arg0, (s16) temp_s0);
        if (M2C_FIELD(arg0, s16 *, 0x1F6) == 0) {
            temp_v0 = func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400);
            M2C_FIELD(arg0, s16 *, 0x1F6) = temp_v0;
            if ((temp_v0 << 0x10) == 0) {
                M2C_FIELD(arg0, s16 *, 0x1F6) = func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400);
            }
        }
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        }
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - 0x64);
        if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
            M2C_FIELD(arg0, u8 *, 6) = 5U;
            M2C_FIELD(arg0, s8 *, 0x206) = 0;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000300;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        func_80077B0C_ovl_01(0x022A0001, arg0 + 0x28);
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        /* fallthrough */
    case 3:
        do { func_801630D4_overlay_023(arg0, (s16) temp_s0); } while (0);
        temp_s0_2 = func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400);
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + (temp_s0_2 + func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400)));
        sp24 = 0;
        sp20 = 0;
        sp22 = 0x64;
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1F4);
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (temp_v0_3 + 1);
        if ((u32) ((temp_v0_3 - 5) & 0xFFFF) < 8U) {
            func_80162870_overlay_023(arg0, 4, 0x55, 0x448, 0, 4, &sp20);
            func_80162870_overlay_023(arg0, 4, 0x55, 0x448, 0, 7, &sp20);
        }
        temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x1E0) - 0xA;
        M2C_FIELD(arg0, u16 *, 0x1E0) = temp_v0_4;
        if (temp_v0_4 & 0x8000) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        M2C_FIELD(arg0, u8 *, 0x26F) = 0U;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xED);
        break;
    case 5:
        temp_s0_3 = arg0 + 0x28;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000300;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        func_80077B0C_ovl_01(0x04020001, temp_s0_3);
        func_80077B0C_ovl_01(0x02290001, temp_s0_3);
        /* fallthrough */
    case 6:
        temp_s0_4 = func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400);
        if ((temp_s0_4 + func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400)) != 0) {
            var_v0 = M2C_FIELD(arg0, u8 *, 6) + 1;
block_29:
            M2C_FIELD(arg0, u8 *, 6) = var_v0;
        }
        break;
    case 7:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000300;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 8:
        func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x10400);
        temp_v0_5 = M2C_FIELD(arg0, u16 *, 0x1F4) - ((func_800331E8_ovl_01() * 5) + 1);
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_5;
        if (temp_v0_5 & 0x8000) {
            M2C_FIELD(arg0, u8 *, 6) = 9U;
        }
        break;
    case 9:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
        M2C_FIELD(arg0, u8 *, 0x26F) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 10:
        if (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 0xBU;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000300;
        }
        break;
    case 11:
        var_v0 = 4;
        if ((func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x10400) != 0) || (var_v0 = 4, (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x10400) != 0))) {
            goto block_29;
        }
        break;
    }
    if (M2C_FIELD(arg0, s8 *, 0x206) != 0) {
        func_80032DEC_ovl_01(arg0, M2C_FIELD(temp_s2, s32 *, 0x28), M2C_FIELD(temp_s2, s32 *, 0x30), 0x20);
    }
}
