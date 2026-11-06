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

M2C_UNK func_80032F24_ovl_01(void *, s16, M2C_UNK); /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_8016FC64_overlay_051(void *, s16);     /* extern */

void func_801728E8_overlay_051(void *arg0) {
    s32 temp_s0;
    u16 temp_a0_2;
    u16 temp_s2;
    
    u8 temp_a0;
    u8 temp_v1;

    temp_a0 = M2C_FIELD(arg0, u8 *, 6);
    temp_s2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x250), u16 *, 0x66);
    switch (temp_a0) {
    case 0:
        func_80077B0C_ovl_01(0x04020001, arg0 + 0x28);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000300;
        M2C_FIELD(arg0, u16 *, 0x1F6) = 0xAU;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0x12CU;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x206) = 1;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 0x12);
        /* fallthrough */
    case 1:
        do { func_8016FC64_overlay_051(arg0, (s16) temp_s2); } while (0);
        temp_v1 = M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400);
        temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x1F6) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_a0_2;
        M2C_FIELD(arg0, u8 *, 6) = temp_v1;
        if ((temp_a0_2 << 0x10) > 0) {
            temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x1E0) - 0xF;
        } else {
            temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x1E0) - 0x19;
        }
        M2C_FIELD(arg0, u16 *, 0x1E0) = temp_a0_2;
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1E0) < 0) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        M2C_FIELD(arg0, u8 *, 0x26F) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 3:
        temp_s0 = func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400);
        if ((temp_s0 + func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, s32 *, 0x228), 0x400)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000300;
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        }
        break;
    case 4:
        if ((func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x10400) != 0) || (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x10400) != 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
            M2C_FIELD(arg0, u8 *, 0x26F) = 0U;
            M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xED);
        }
        break;
    }
    if (M2C_FIELD(arg0, s8 *, 0x206) != 0) {
        func_80032F24_ovl_01(arg0, (s16) temp_s2, 0x20);
    }
}
