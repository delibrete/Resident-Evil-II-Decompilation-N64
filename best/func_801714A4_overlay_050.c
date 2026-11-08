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

M2C_UNK func_80036BB4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80036C98(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801714A4_overlay_050(void *arg0) {
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u16 *, 0x270) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x270);
        if (temp_v1_2 & 8) {
            M2C_FIELD(arg0, u8 *, 6) = 5U;
            return;
        }
        if ((temp_v1_2 << 0x10) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        case 2:
            func_80036C98(arg0, 1, 0xF, 0);
            if (M2C_FIELD(arg0, u16 *, 0x270) & 2) {
                M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
            case 3:
                func_80036BB4(arg0, 0xC, 0x1F, 0);
                M2C_FIELD(arg0, s8 *, 0x1E9) = 1;
                if (M2C_FIELD(arg0, u16 *, 0x270) & 4) {
                    M2C_FIELD(arg0, s8 *, 0x1E9) = 0;
                    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
                case 4:
                    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80036C98(arg0, 0xC, 0xF, 0));
                    return;
                }
            }
        } else {
        default:
            return;
        }
        break;
    case 5:
        if (M2C_FIELD(arg0, u16 *, 0x270) & 8) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xBFFF);
        }
        break;
    }
}
