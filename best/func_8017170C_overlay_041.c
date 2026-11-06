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
s32 func_80035AAC_ovl_01_108();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172768_overlay_041();
s32 func_80172C10_overlay_041();
s32 func_80172CE8_overlay_041();
s32 func_80172DA4_overlay_041();

void func_8017170C_overlay_041(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;
    s16 temp_a0;
    s16 temp_a1;
    s32 temp_v1_2;
    u8 temp_v0;
    u8 temp_v1;
    

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        func_80035AAC_ovl_01_108(arg0);
        func_80077D48_ovl_01(3, arg0);
        func_80172DA4_overlay_041(arg0, 0x64);
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        func_80172C10_overlay_041(arg0);
        do { func_80172CE8_overlay_041(arg0, (func_80033634_ovl_01() & 3) + 3); } while (0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E0) << 0x10) >> 0x11);
        M2C_FIELD(arg0, u16 *, 0x1E4) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E4) << 0x10) >> 0x11);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        /* fallthrough */
    case 2:
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x1E2);
        temp_a0 = (s16) M2C_FIELD(arg0, u16 *, 0x1E4);
        M2C_FIELD(arg0, s32 *, 0x2C) += temp_a1;
        M2C_FIELD(arg0, s32 *, 0x28) += (s16) M2C_FIELD(arg0, u16 *, 0x1E0);
        M2C_FIELD(arg0, s16 *, 0x1E2) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x14);
        M2C_FIELD(arg0, s32 *, 0x30) += temp_a0;
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x25E) - 0xFA;
        if (temp_v1_2 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            M2C_FIELD(arg0, u8 *, 0x2B5) = 8U;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1_2;
            M2C_FIELD(arg0, s16 *, 0x68) = 0;
            M2C_FIELD(arg0, u8 *, 6) = 3U;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
            if (M2C_FIELD(arg0, s32 *, 0) & 0x4000) {
                M2C_FIELD(arg0, s16 *, 0x64) = (s16) (((func_80033634_ovl_01(temp_a0, temp_a1) & 1) << 0xB) + 0x400);
                M2C_FIELD(arg0, s16 *, 0x66) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
                M2C_FIELD(arg0, s16 *, 0x68) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x68) = (s16) (((func_80033634_ovl_01(temp_a0, temp_a1) & 1) << 0xB) + 0x400);
                M2C_FIELD(arg0, s16 *, 0x64) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
                M2C_FIELD(arg0, s16 *, 0x66) = 0;
            }
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000000;
            M2C_FIELD(arg0, s8 *, 0x1E9) = 3;
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
            var_a2 = 2;
block_16:
            func_80172768_overlay_041(arg0, 7, var_a2);
        }
    default:
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x28) += (s16) M2C_FIELD(arg0, u16 *, 0x1E0);
        M2C_FIELD(arg0, s32 *, 0x30) += (s16) M2C_FIELD(arg0, u16 *, 0x1E4);
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E0) << 0x10) >> 0x11);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v1;
        M2C_FIELD(arg0, u16 *, 0x1E4) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E4) << 0x10) >> 0x11);
        if ((temp_v1 & 0xFF) == 0xFF) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0B000700;
            M2C_FIELD(arg0, u8 *, 0x2B5) = 0xBU;
            M2C_FIELD(arg0, u8 *, 6) = 4U;
            return;
        }
        break;
    case 4:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0;
        if ((temp_v0 & 0xFF) == 0xFF) {
            var_a2 = 0;
            goto block_16;
        }
        break;
    }
}
