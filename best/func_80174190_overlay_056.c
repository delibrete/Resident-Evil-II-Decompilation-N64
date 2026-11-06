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

extern short D_800E10FA;
extern short D_800E1102;
u16 func_80032D44_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_80040E88_ovl_01();
s32 func_8004279C_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80170E6C_overlay_056();
s32 func_8017327C_overlay_056();
s32 func_8017335C_overlay_056();
s32 func_801734EC_overlay_056();
s32 func_80173624_overlay_056();
s32 func_801737B4_overlay_056();
s32 func_801744A0_overlay_056();
extern char D_800C7650[];
extern char D_800E8FC8[];

void func_80174190_overlay_056(void *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 0x64;

    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 sp18;
    u16 temp_s4;
    void *temp_s0;

    if (M2C_FIELD(arg0, u16 *, 0x2B8) & 0x10) {
        if (M2C_FIELD(arg0, u8 *, 6) == 0) {
            temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x178;
            temp_s4 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32));
            sp10 = 0;
            sp12 = temp_s4;
            sp14 = 0;
            do { func_80040E88_ovl_01(&sp10, &sp18); } while (0);
            sp10 = __repair_constant;
            sp12 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
            if (!((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF)) {
                sp10 = __repair_constant;
                sp12 = 0x3BC - ((func_80033634_ovl_01(&sp18) & 0xFF) * 2);
            }
            func_8004279C_ovl_01(&sp18, &sp10, &sp10);
            sp10 += M2C_FIELD(temp_s0, u16 *, 0x4E);
            sp12 += M2C_FIELD(temp_s0, u16 *, 0x52);
            sp14 += M2C_FIELD(temp_s0, u16 *, 0x56);
            if (M2C_FIELD(arg0, u8 *, 5) != 0x10) {
                func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x10000, (s16) temp_s4, &D_800E8FC8, &sp10);
                sp12 -= (func_80033634_ovl_01() & 0x3F & 0xFF) - 0x40;
                func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0, (s16) temp_s4, &D_800E8FC8, &sp10);
                if (M2C_FIELD(arg0, u8 *, 5) != 1) {
                    func_80077D48_ovl_01(8, arg0);
                }
            }
            if ((u8) M2C_FIELD(arg0, u8 *, 0x26E) < 3U) {
                if (M2C_FIELD(arg0, u8 *, 5) == 9) {
                    func_801734EC_overlay_056(arg0);
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 0x11) {
                    func_80173624_overlay_056(arg0);
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 0xA) {
                    func_8017327C_overlay_056(arg0);
                }
                if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
                    func_8017335C_overlay_056(arg0);
                }
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
                func_801737B4_overlay_056(arg0);
            }
            if ((u32) (M2C_FIELD(arg0, u8 *, 5) - 5) < 2U) {
                M2C_FIELD(arg0, s8 *, 0x2C3) = 1;
            }
            if (M2C_FIELD(arg0, u8 *, 5) == 0x10) {
                func_8017327C_overlay_056(arg0);
            }
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
            if ((u16) M2C_FIELD(arg0, s32 *, 4) == 0x109) {
                func_80170E6C_overlay_056(arg0, arg1, arg2);
                return;
            }
            goto block_25;
        }
        goto block_25;
    }
block_25:
    func_801744A0_overlay_056(arg0, arg1, arg2);
}
