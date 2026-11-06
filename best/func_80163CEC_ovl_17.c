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

M2C_UNK func_80166BF0_overlay_017(u8 *, s16);       /* extern */
M2C_UNK func_80166C3C_overlay_017(u8 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801678B8_overlay_017(u8 *);            /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_80167DDC_overlay_017;

void func_80163CEC_ovl_17(u8 *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 0x300;

    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
            func_80033634_ovl_01();
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) *(((M2C_ERROR(/* Read from unset register $v0 */) & 7) * 2) + &D_80167DDC_overlay_017);
        } else {
            M2C_FIELD(arg0, u16 *, 0x1F6) = 0x40U;
        }
        M2C_FIELD(arg0, s8 *, 0x2D2) = 1;
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u8 *, 6) = 2U;
        if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
            func_80033634_ovl_01();
            var_v0 = (M2C_ERROR(/* Read from unset register $v0 */) & 0xF) + 0xF;
        } else {
            var_v0 = -1U;
        }
        M2C_FIELD(arg0, u8 *, 0x206) = var_v0;
        var_v1 = (s16) M2C_FIELD(arg0, u16 *, 0x1F6);
        if (var_v1 < 0) {
            var_v1 = -var_v1;
        }
        temp_v1_2 = 0x01000000;
        if (var_v1 == 0x20) {
            temp_v1_2 = 0x02000000;
        }
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (temp_v1_2 | 0x300);
        /* fallthrough */
    case 2:
        func_80166BF0_overlay_017(arg0, (s16) M2C_FIELD(arg0, u16 *, 0x1F6));
        var_v1_2 = (s16) M2C_FIELD(arg0, u16 *, 0x1F6);
        if (var_v1_2 < 0) {
            var_v1_2 = -var_v1_2;
        }
        temp_v1_2 = var_v1_2 & 0xFFFF;
        if ((temp_v1_2 * 2) >= (((M2C_FIELD(arg0, u16 *, 0x2C2) & 0xFFF) + (temp_v1_2 - 0x800)) & 0xFFF)) {
            if (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0x20) {
                M2C_FIELD(arg0, u8 *, 6) = 4U;
                M2C_FIELD(arg0, s32 *, 0x1E8) = __repair_constant;
            } else {
                M2C_FIELD(arg0, u8 *, 6) = 5U;
            }
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
        M2C_FIELD(arg0, u8 *, 0x206) = temp_v0;
        if ((temp_v0 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            func_80033634_ovl_01();
            M2C_FIELD(arg0, u8 *, 0x206) = (u8) ((M2C_ERROR(/* Read from unset register $v0 */) & 0xF) + 0xF);
            M2C_FIELD(arg0, s32 *, 0x1E8) = __repair_constant;
        }
        break;
    case 3:
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
        M2C_FIELD(arg0, u8 *, 0x206) = temp_v0_2;
        if ((temp_v0_2 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
        }
        break;
    case 4:
        if (!(M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0x20)) {
        case 5:
            M2C_FIELD(arg0, u8 *, 6) = 6U;
            M2C_FIELD(arg0, u16 *, 0x2C2) = 0x800U;
            M2C_FIELD(arg0, s8 *, 0x2D2) = 1;
            M2C_FIELD(&D_800C7650, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) | 0x20);
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x64;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
        }
        break;
    case 6:
        func_80166C3C_overlay_017(arg0, 0, 0, 0);
        temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x2C8);
        if (temp_v1_3 >= M2C_FIELD(arg0, s32 *, 0x2C)) {
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1_3;
            M2C_FIELD(arg0, s8 *, 5) = 5;
            M2C_FIELD(arg0, u8 *, 6) = 0;
        }
        break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    func_801678B8_overlay_017(arg0);
}
