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

s32 func_80032EA4_ovl_01();
s32 func_80033174_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172768_overlay_041();
s32 func_80172778_overlay_041();
extern char D_800E10D0[];

void func_80170670_overlay_041(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a1;
    s32 var_a2;
    s32 temp_s1;
    u16 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        if (func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF) {
            var_a2 = 1;
        
        func_80172768_overlay_041(&D_800E10D0, 2, var_a2);} else {
            var_a2 = 0;
        
        func_80172768_overlay_041(&D_800E10D0, 2, var_a2);}
        func_80052C00_ovl_01(4, 0);
        func_80052C9C_ovl_01(0xA, 0x96, 0);
        func_80077D48_ovl_01(4, arg0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000700;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
        M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
        M2C_FIELD(arg0, u16 *, 0x2C0) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        /* fallthrough */
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x2C0) + 0x14;
        M2C_FIELD(arg0, u16 *, 0x2C0) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x2C) += (s16) temp_v0;
        temp_s1 = M2C_FIELD(arg0, s16 *, 0x25E) - 0xFA;
        if (temp_s1 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            func_80077D48_ovl_01(5, arg0);
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_s1;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0B000700;
            M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) (func_80033634_ovl_01() & 0xF);
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            return;
        }
    default:
        return;
    case 3:
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0_2;
        if ((temp_v0_2 & 0xFF) == 0xFF) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        M2C_FIELD(arg0, u8 *, 0x1E9) -= 1;
        return;
    case 4:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            if (func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x400) == 0) {
                var_a1 = 9;
            } else {
                M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) (func_80033634_ovl_01(arg0) & 0xF);
                var_a1 = 0;
            }
            func_80172778_overlay_041(arg0, var_a1);
        }
        break;
    }
}
