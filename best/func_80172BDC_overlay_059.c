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
extern int D_800E10F8;
extern int D_800E1100;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80032B8C_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80032EA4_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_80172BDC_overlay_059(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x15000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2B6) &= 0xFFFD;
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x16000F00;
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1EU;
        }
        func_80032B8C_ovl_01(arg0, 0);
        return;
    case 2:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(arg0, 0);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            if (func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 0x400) != 0) {
                M2C_FIELD(arg0, s32 *, 4) = 0x010B0000;
                M2C_FIELD(arg0, s8 *, 0x2C2) = 4;
                return;
            }
        }
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06080700;
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, s16 *, 0x2C0) = 0;
        func_80032DEC_ovl_01(arg0,  D_800E10F8);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        M2C_FIELD(arg0, s32 *, 4) = 0x01050100;
        M2C_FIELD(arg0, s8 *, 0x206) = 0;
        M2C_FIELD(arg0, u16 *, 0x2B6) |= 0x80;
        func_80077D48_ovl_01(2, arg0);
        func_80052C9C_ovl_01(8, 0x50, 0);
        break;
    }
}
