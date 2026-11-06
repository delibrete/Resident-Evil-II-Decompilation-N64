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
s32 func_8003334C_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80052D40_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80077F60_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_801755F4_overlay_057(void *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 0x80;

    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_v0;
    u8 temp_a0;
    u8 temp_v1;
    u8 temp_v1_3;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s3_5;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x700;
        D_800E10AC = (s32) (D_800E10AC | 0x40);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u8 *, 0x26F) |= __repair_constant;
        func_80052C00_ovl_01(0x1E);
        func_80052C9C_ovl_01(0xF, 0x78);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0xA) {
            func_80077B0C_ovl_01(0x04030001, arg0 + 0x28);
            temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
            temp_s3 = temp_v1_2 + 0xBC0;
            M2C_FIELD(temp_v1_2, s32 *, 0xBC0) |= __repair_constant;
            M2C_FIELD(temp_s3, s32 *, 0x130) = 0x30;
            M2C_FIELD(temp_s3, s32 *, 0x134) = 0x101030;
            temp_s3_2 = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(temp_s3_2, s32 *, 0x130) = 0x60;
            M2C_FIELD(temp_s3_2, s32 *, 0x134) = 0x101030;
            M2C_FIELD(temp_s3_2, s32 *, 0) |= __repair_constant;
            func_80052C9C_ovl_01(0xA, 0xFA, 0, 0x101030);
            func_80052D40_ovl_01(0x1E, 0xFA, 0x6E, 0xA);
            func_80052C9C_ovl_01(0x28, 0x6E, 0x28);
            func_80052C00_ovl_01(8, 0xA);
            func_80052C00_ovl_01(3, 0x14);
            func_80052C00_ovl_01(2, 0x19);
            func_80052C00_ovl_01(3, 0x1E);
            func_80052C00_ovl_01(3, 0x23);
            func_80052C00_ovl_01(5, 0x28);
            func_80052C00_ovl_01(3, 0x37);
            func_80052C00_ovl_01(3, 0x46);
        }
        D_800E1136 = (u16) (D_800E1136 + 0x800);
        func_8003334C_ovl_01(arg0,  arg1);
        D_800E1136 = (u16) (D_800E1136 - 0x800);
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x1E9);
        M2C_FIELD(arg0, u8 *, 6) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        if ((temp_a0 >= 7U) && !(temp_a0 & 3)) {
            temp_s3_3 = M2C_FIELD(arg0, void **, 0x234);
            sp10 = 0xC8;
            sp12 = 0x148 - (func_80033634_ovl_01(temp_a0) & 0xFF);
            sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 4) | 0x1000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_3 + 0x38, &sp10);
        }
        temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x1E9);
        if ((temp_v1_3 == 0x59) || (temp_v1_3 == 0x62)) {
            func_80077F60_ovl_01(2, 0, arg0);
            temp_s3_4 = M2C_FIELD(arg0, void **, 0x234);
            sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            sp12 = 0x148 - (func_80033634_ovl_01() & 0xFF);
            sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            temp_s0 = ((func_80033634_ovl_01() & 0xFF) * 4) + 0x1000;
            temp_s3_5 = temp_s3_4 + 0x38;
            func_800377B0_ovl_01(temp_s0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s3_5, &sp10);
            sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            sp12 = 0x148 - (func_80033634_ovl_01() & 0xFF);
            sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            temp_s0_2 = ((func_80033634_ovl_01() & 0xFF) * 4) | 0x11000;
            func_800377B0_ovl_01(temp_s0_2, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s3_5, &sp10);
            func_80052C00_ovl_01(3, 0);
            func_80052C9C_ovl_01(6, 0xFA, 0);
            if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x62) {
                func_80052D40_ovl_01(0x3C, 0xFA, 0, 6);
                return;
            }
        }
    default:
        return;
    case 2:
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1EU;
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        /* fallthrough */
    case 3:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
        }
        break;
    }
}
