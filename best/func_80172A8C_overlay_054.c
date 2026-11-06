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

s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80052D40_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_801736A8_overlay_054();
s32 func_801739B0_overlay_054();

void func_80172A8C_overlay_054(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_a3;
    s32 temp_s1;
    s32 var_v1;
    s8 temp_a0;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x250);
    switch (temp_v1) {                              /* irregular */
    case 1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01001F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x206) = 0x1F;
        func_80052C9C_ovl_01(0x14, 0x78, 0, 1);
        var_a0 = 0x1E;
        var_a3 = 0x14;
block_13:
        func_80052D40_ovl_01(var_a0, 0x78, 0x28, var_a3);
        break;
    case 2:
        if (M2C_FIELD(arg0, u8 *, 7) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, u8 *, 0x207) = 1U;
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x207) - 1;
        M2C_FIELD(arg0, u8 *, 0x207) = temp_v0;
        if ((temp_v0 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 0x100;
            func_80077B0C_ovl_01(0x04020001, arg0 + 0x28, 1);
            func_801736A8_overlay_054(arg0, 0, 8);
            func_80052C00_ovl_01(0xA, 0);
            func_80052C9C_ovl_01(6, 0xFA, 2);
            func_80052C9C_ovl_01(0x14, 0x78, 8);
            var_a0 = 0x14;
            var_a3 = 0x1C;
            {
        func_80052D40_ovl_01(var_a0, 0x78, 0x28, var_a3);break;}
        }
        break;
    }
    temp_a0 = M2C_FIELD(arg0, s8 *, 0x206);
    if (temp_a0 != 0) {
        M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x206) - 1);
        var_v1 = (temp_a0 * 0x11C) / 31;
    } else {
        var_v1 = 0;
    }
    func_801739B0_overlay_054(arg0, temp_s1, var_v1 + 0x4A3);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
        M2C_FIELD(arg0, s8 *, 0x1EA) = 0x1F;
    }
}
