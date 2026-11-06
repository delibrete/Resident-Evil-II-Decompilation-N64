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

s32 func_80032B8C_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80173F2C_overlay_045();
s32 func_80174448_overlay_045();
extern char D_800C7650[];
extern char D_800E10D0[];

void func_8016F36C_overlay_045(void *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 0x64;

    s32 *var_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
        var_s0 = *(s32 * *)(D_800C7650 + 0x19D3C);
    } else {
        var_s0 = &D_800E10D0;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        /* fallthrough */
    case 1:
        temp_v0 = func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        M2C_FIELD(arg0, s16 *, 0x1E0) = __repair_constant;
        M2C_FIELD(arg0, u8 *, 6) += temp_v0;
        func_80032B8C_ovl_01(arg0, 0, 0x64);
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000300;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0x1F) + 0x14);
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        /* fallthrough */
    case 3:
        temp_v0_2 = func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), 0x40);
        M2C_FIELD(arg0, u16 *, 0x66) += temp_v0_2;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        if ((temp_v0_2 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
        }
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_3;
        if ((s16) temp_v0_3 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 6U;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000300;
        M2C_FIELD(arg0, u8 *, 6) = 5U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0x1F) + 0xA);
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x12C;
        /* fallthrough */
    case 5:
        func_80032DEC_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), 0x10);
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x2B6));
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_4;
        var_s2 = 0;
        if (((s16) temp_v0_4 == -1) || (M2C_FIELD(arg0, u8 *, 0xD) != 0xFF) || (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) || (func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), 0x200) != 0)) {
            var_s2 = 1;
        }
        if (var_s2 != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 6U;
        }
        if (func_80173F2C_overlay_045(arg0, 0x5DC, 0x10CC) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 6U;
        }
        break;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x07000300;
        M2C_FIELD(arg0, s16 *, 0x1E0) = __repair_constant;
        M2C_FIELD(arg0, u8 *, 6) = 7U;
        /* fallthrough */
    case 7:
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x2B6));
        M2C_FIELD(arg0, u8 *, 6) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        break;
    case 8:
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        M2C_FIELD(arg0, s16 *, 0x2B4) = 0xF;
        break;
    }
    func_80174448_overlay_045(arg0);
}
