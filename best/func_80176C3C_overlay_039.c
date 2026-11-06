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
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, s32, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *,  M2C_UNK); /* extern */
M2C_UNK func_80174420_overlay_039(void *);          /* extern */
M2C_UNK func_801745CC_overlay_039(void *);          /* extern */
M2C_UNK func_801746B4_overlay_039(void *);          /* extern */
M2C_UNK func_80174798_overlay_039(void *);          /* extern */

void func_80176C3C_overlay_039(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    M2C_UNK var_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x07000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFFB);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        sp18 = 0;
        sp1A = 0x12C;
        sp1C = 0;
        func_800377B0_ovl_01(0x1FA0, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x234) + 0x38, &sp18);
        var_a0 = 0xB;
        if (func_80033634_ovl_01() & 1) {
            var_a0 = 0xD;
        }
        func_80077D48_ovl_01(var_a0, arg0);
        func_80035AAC_ovl_01_108(arg0);
        if ((M2C_FIELD(arg0, u8 *, 5) == 0xA) && !(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80)) {
            func_80174420_overlay_039(arg0);
        }
        if ((M2C_FIELD(arg0, u8 *, 5) == 0xB) && !(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x1000)) {
            func_801745CC_overlay_039(arg0);
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1_2 == 9) || (temp_v1_2 == 0x11)) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80)) {
                func_801746B4_overlay_039(arg0);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_80174798_overlay_039(arg0);
        case 1:
        }
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0,  arg1));
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        return;
    }
}
