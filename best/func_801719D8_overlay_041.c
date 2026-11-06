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

extern unsigned short D_800E1136;
s32 func_80032B8C_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80035AAC_ovl_01_108();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172768_overlay_041();
s32 func_80172C10_overlay_041();
s32 func_80172CE8_overlay_041();
s32 func_80172DA4_overlay_041();
extern char D_800C7650[];

void func_801719D8_overlay_041(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_a2;
    s32 temp_s1;
    s32 temp_s1_2;
    u8 temp_v1;
    

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        func_80035AAC_ovl_01_108(arg0);
        func_80077D48_ovl_01(3, arg0);
        func_80172DA4_overlay_041(arg0, 0xA);
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        func_80172C10_overlay_041(arg0);
        func_80172CE8_overlay_041(arg0, (func_80033634_ovl_01() & 3) + 5);
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0x258U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) D_800E1136;
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        /* fallthrough */
    case 2:
        do { func_80032B8C_ovl_01(arg0, 0); } while (0);
        temp_s1 = M2C_FIELD(arg0, s16 *, 0x25E) - 0xFA;
        M2C_FIELD(arg0, s32 *, 0x2C) += M2C_FIELD(arg0, s16 *, 0x1E2);
        M2C_FIELD(arg0, s16 *, 0x1E2) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x14);
        if (temp_s1 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            func_80077D48_ovl_01(5, arg0);
            M2C_FIELD(arg0, u8 *, 0x2B5) = 0x10U;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_s1;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            M2C_FIELD(arg0, u8 *, 6) = 3U;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
            func_80077D48_ovl_01(3, arg0);
            func_80172C10_overlay_041(arg0);
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0x14U;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            M2C_FIELD(arg0, u8 *, 6) = 4U;
            M2C_FIELD(arg0, u16 *, 0x66) += 0x800;
            return;
        }
    default:
        return;
    case 3:
        func_80032B8C_ovl_01(arg0, 0);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v1;
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) ((s32) (M2C_FIELD(arg0, u16 *, 0x1E0) << 0x10) >> 0x11);
        if ((temp_v1 & 0xFF) == 0xFF) {
block_13:
            func_80172768_overlay_041(arg0, 7, 3);
        }
        break;
    case 4:
        temp_a2 = M2C_FIELD(arg0, s16 *, 0x1E2);
        M2C_FIELD(arg0, s32 *, 0x2C) += temp_a2;
        M2C_FIELD(arg0, s16 *, 0x1E2) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x14);
        func_80032B8C_ovl_01(arg0, 0, temp_a2);
        temp_s1_2 = M2C_FIELD(arg0, s16 *, 0x25E) - 0xFA;
        if (temp_s1_2 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            func_80172DA4_overlay_041(arg0, 0x15E);
            func_80077D48_ovl_01(5, arg0);
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_s1_2;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            {
            func_80172768_overlay_041(arg0, 7, 3);break;}
        }
        break;
    }
}
