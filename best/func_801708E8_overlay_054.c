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

extern unsigned char D_800E10D8;
s32 func_80033634_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80052D40_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_801736A8_overlay_054();
extern char D_800E10D0[];

void func_801708E8_overlay_054(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;
    s32 temp_s1;
    s32 var_a0;
    u32 var_a1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0A003F00;
        func_80052C9C_ovl_01(0x14, 0x78, 0);
        func_80052D40_ovl_01(0x1E, 0x78, 0x28, 0x14);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x3F00;
        }
        temp_s1 = *M2C_FIELD(arg0, s32 **, 0x214);
        if (temp_s1 & 0x10000) {
            func_80052C00_ovl_01(0x1E, 0);
            func_80052C9C_ovl_01(3, 0xC8, 5);
            func_80052C9C_ovl_01(3, 0xC8, 0xF);
            func_80052C9C_ovl_01(8, 0xC8, 0x19);
            func_80052D40_ovl_01(0x3C, 0xC8, 0, 0x21);
            M2C_FIELD(*(void * *)(D_800E10D0 + 0x234), s32 *, 0xBC0) &= ~1;
            var_a1 = 0xF;
            if (D_800E10D8 & 1) {
                var_a0 = 0x1608;
                do {/*__repair_loop_weight*/do {
                    var_a1 += 1;} while (0);
                    temp_v0 = *(void * *)(D_800E10D0 + 0x234) + var_a0;
                    *temp_v0 &= ~1;
                    var_a0 += 0x178;
                } while (var_a1 < 0x13U);
            }
            func_80077D48_ovl_01(7, arg0);
            func_801736A8_overlay_054(&D_800E10D0, 8, 8);
        }
        if (temp_s1 & 0x20000) {
            func_801736A8_overlay_054(arg0, (((func_80033634_ovl_01() & 0xFF) % 3) + 0xB) & 0xFF, 4);
            if (!(func_80033634_ovl_01() & 3)) {
                func_801736A8_overlay_054(arg0, (((func_80033634_ovl_01() & 0xFF) % 3) + 0xB) & 0xFF, 5);
            }
        }
        if (temp_s1 & 0x40000) {
            func_801736A8_overlay_054(&D_800E10D0, 8, 8);
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s8 *, 0x2B8) = 1;
        M2C_FIELD(arg0, s16 *, 0x2BA) = 0x100;
        if (!(func_80033634_ovl_01((s32 *)1) & 0xF)) {
            func_801736A8_overlay_054(arg0, (((func_80033634_ovl_01(arg0) & 0xFF) % 3) + 0xB) & 0xFF, 4);
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        break;
    }
}
