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

extern int D_800E10AC;
extern unsigned short D_800E1136;
s32 func_80032B8C_ovl_01();
s32 func_80032F24_ovl_01();
s32 func_8003334C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80077F60_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_80169B80_ovl_31(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_t0;
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        D_800E10AC = (s32) (D_800E10AC | 0x40);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        M2C_FIELD(arg0, u8 *, 0x26F) |= 0x80;
        /* fallthrough */
    case 1:
        temp_t0 = M2C_FIELD(arg0, s32 *, 0x28);
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x30);
        temp_a3_2 = temp_a3 + ((s32) (M2C_FIELD(arg0, s16 *, 0x204) - temp_a3) >> 1);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (temp_t0 + ((s32) (M2C_FIELD(arg0, s16 *, 0x200) - temp_t0) >> 1));
        M2C_FIELD(arg0, s32 *, 0x30) = temp_a3_2;
        func_80032F24_ovl_01(arg0,  M2C_FIELD(arg0, s16 *, 0x1F6));
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 8) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) M2C_FIELD(arg0, s16 *, 0x1F6);
            func_80077B0C_ovl_01(0x04010001, arg0 + 0x28);
            return;
        }
    default:
        return;
    case 2:
        D_800E1136 = (u16) (D_800E1136 + 0x800);
        func_8003334C_ovl_01(arg0);
        D_800E1136 = (u16) (D_800E1136 - 0x800);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            return;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000000;
        M2C_FIELD(arg0, u8 *, 6) = 4U;
        M2C_FIELD(arg0, u16 *, 0x66) += 0x12C;
        M2C_FIELD(arg0, s32 *, 0) &= ~8;
        /* fallthrough */
    case 4:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0xAU) {
            sp10 = 0x100 - ((func_80033634_ovl_01(arg0) & 0xFF) * 2);
            sp12 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x234);
            temp_s0 = func_80033634_ovl_01();
            func_800377B0_ovl_01(((temp_s0 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 2) + 0x830), (s16) M2C_FIELD(arg0, u16 *, 0x66), temp_s1 + 0x38, &sp10);
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1E0);
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (temp_v1_2 + ((s32) (temp_v1_2 << 0x10) >> 0x11));
        M2C_FIELD(arg0, u8 *, 6) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        func_80032B8C_ovl_01(arg0, 0x800);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 3) {
            func_80077B0C_ovl_01(0x04020001, arg0 + 0x28);
        }
        if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) {
            func_80077F60_ovl_01(2, 0, arg0);
            func_80052C00_ovl_01(3, 0);
            func_80052C9C_ovl_01(6, 0xFA, 0);
            return;
        }
        break;
    case 5:
        M2C_FIELD(arg0, u8 *, 6) = 6U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000700;
        /* fallthrough */
    case 6:
        if (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x10200) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
            M2C_FIELD(arg0, s8 *, 0x25C) = 0;
            M2C_FIELD(arg0, u8 *, 0x26F) &= 0x7F;
            D_800E10AC = (s32) (D_800E10AC & ~0x40);
        }
        break;
    }
}
