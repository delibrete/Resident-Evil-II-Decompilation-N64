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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016F6AC_overlay_046(void *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_8016F7A0_overlay_046(void *);              /* extern */

void func_8016EF38_overlay_046(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 var_v0;
    s32 temp_v0;
    s32 var_v0_2;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0x28;
        M2C_FIELD(arg0, s8 *, 0x2BE) = 1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
    }
    func_80032C08_ovl_01(arg0, 0, 0);
    var_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x28;
    if (M2C_FIELD(arg0, s16 *, 0x1E2) >= 0x320) {
        var_v0 = 0x320;
    }
    M2C_FIELD(arg0, s16 *, 0x1E2) = var_v0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0xFF;
    temp_v0 = func_8016F7A0_overlay_046(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s8 *, 0x26F) = 0;
        M2C_FIELD(arg0, s8 *, 0x2BE) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~2) | 0x04000000);
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_v0 + 0xA);
            M2C_FIELD(arg0, s8 *, 5) = 4;
            func_8016F6AC_overlay_046(arg0, 0, 0x82, temp_v0);
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0) | 0x400;
        } else {
            M2C_FIELD(arg0, s8 *, 5) = 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0) & ~0x400;
        }
        M2C_FIELD(arg0, s32 *, 0) = var_v0_2;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
}
