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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80166214_overlay_013(void *, M2C_UNK); /* extern */

void func_801657D0_ovl_13(void *arg0) {
    s16 temp_v1_2;
    s32 temp_s0;
    
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s8 *, 0x26F) = 0x80;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
        temp_v0 = (func_80033634_ovl_01() & 0x1F) + 0x19;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0;
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) (temp_v0 & 0xFF);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x208), s8 *, 0xE) = 0;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0x3C;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        /* fallthrough */
    case 1:
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0_2;
        if ((temp_v0_2 & 0xFF) == 0xFF) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
            if (M2C_FIELD(arg0, s16 *, 0x1F4) >= 0x79) {
                var_v1 = ((func_80033634_ovl_01() & 1) * 5) + 0xA;
            } else {
                var_v1 = ((func_80033634_ovl_01() & 7) * 5) + 5;
            }
            M2C_FIELD(arg0, u8 *, 0x2B5) = var_v1;
            var_v0 = 2;
block_21:
            M2C_FIELD(arg0, u8 *, 6) = var_v0;
        }
    default:
        return;
    case 2:
        temp_s0 = 1;
        if (M2C_FIELD(arg0, s16 *, 0x1F4) >= 0x65) {
            temp_v0_3 = M2C_FIELD(arg0, u8 *, 0x2B6) + 1;
            temp_s0 = (u32) (temp_v0_3 & 1) < 1U;
            M2C_FIELD(arg0, u8 *, 0x2B6) = temp_v0_3;
        }
        if (temp_s0 != 0) {
            func_80089D34_ovl_01(arg0, 0x200);
            if (M2C_FIELD(arg0, s16 *, 0x1F4) < 0x64) {
                M2C_FIELD(arg0, u8 *, 0x1E9) = (u8) (M2C_FIELD(arg0, u8 *, 0x1E9) + 1);
            }
            M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) (M2C_FIELD(arg0, u8 *, 0x2B5) - 1);
        }
        if (M2C_FIELD(arg0, u8 *, 0x2B5) == 0) {
            temp_v1_2 = (u16) M2C_FIELD(arg0, s16 *, 0x1F4) + ((func_80033634_ovl_01() & 0xF) + 0xA);
            M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v1_2;
            if (temp_v1_2 >= 0x97) {
                var_v0 = 3;
                M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
                goto block_21;
            }
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) M2C_FIELD(arg0, u8 *, 0x1F5);
            return;
        }
        break;
    case 3:
        temp_s0 = M2C_FIELD(arg0, s16 *, 0x25E) - 0xFA;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x1E2));
        M2C_FIELD(arg0, s16 *, 0x1E2) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x14);
        if (temp_s0 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            func_80166214_overlay_013(arg0, 0x15E);
            func_80077D48_ovl_01(5, arg0);
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0B000700;
            M2C_FIELD(arg0, u8 *, 0x2B5) = 0xBU;
            var_v0 = 4;
            M2C_FIELD(arg0, s16 *, 0x68) = 0;
            M2C_FIELD(arg0, s16 *, 0x64) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_s0;
            goto block_21;
        }
        break;
    case 4:
        func_80089D34_ovl_01(arg0, 0x200);
        temp_v0_4 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0_4;
        var_v0 = 5;
        if ((temp_v0_4 & 0xFF) == 0xFF) {
            goto block_21;
        }
        break;
    }
}
