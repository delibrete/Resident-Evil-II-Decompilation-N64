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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_8016F188_overlay_054(void *);          /* extern */
M2C_UNK func_80173514_overlay_054(void *);          /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_8016EFD0_overlay_054(void *arg0) {
int __repair_constant = 3;

    M2C_UNK *var_t0;
    u16 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_t0 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
    } else {
        var_t0 = &D_800E10D0;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1AA);
        if (temp_v1_2 == 0x6002) {
            if (M2C_FIELD(arg0, s16 *, 0x270) != 0) {
                M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (temp_v1_2 & 0xFFF);
                goto block_12;
            }
        } else {
block_12:
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            M2C_FIELD(arg0, s8 *, 0x2C1) = 1;
            M2C_FIELD(arg0, s8 *, 0x2C3) = __repair_constant;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2CD) * 0x0D000000) + 0x3F00);
            M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
            M2C_FIELD(&D_800C7650, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0xFFBF);
            M2C_FIELD(arg0, s8 *, 0x2B6) = 1;
        case 1:
            if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
                if ((u32) (M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF) >= 0x2710U) {

                } else {
                    goto block_17;
                }
            } else if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x2710U) {
block_17:
                if (M2C_FIELD(var_t0, s16 *, 0x1F2) >= 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 2U;
                    M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1EU;
                    M2C_FIELD(arg0, s8 *, 0x2C1) = __repair_constant;
                    M2C_FIELD(arg0, s8 *, 0x2C3) = __repair_constant;
                    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFD);
                }
block_21:
            }
        default:
            func_80089D34_ovl_01(arg0, 0x40);
            func_80173514_overlay_054(arg0);
            func_8016F188_overlay_054(arg0);
        }
        break;
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, s8 *, 5) = 1;
            M2C_FIELD(arg0, u8 *, 6) = 0;
            M2C_FIELD(arg0, s8 *, 0x2C9) = 0;
        }
        goto block_21;
    }
}
