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

M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016F458_overlay_054(void *);          /* extern */
s16 func_80173874_overlay_054(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_8016FC78_overlay_054(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_v1;
    s16 temp_v0;
    

    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_v1 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
    } else {
        var_v1 = &D_800E10D0;
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        temp_v0 = func_80173874_overlay_054(arg0, M2C_FIELD(var_v1, s32 *, 0x28), M2C_FIELD(var_v1, s32 *, 0x30), 1);
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) -temp_v0;
        if ((temp_v0 * -0x10000) == 0) {
            temp_v0 = -1;
            if (func_80033634_ovl_01() & 1) {
                temp_v0 = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v0;
        }
        M2C_FIELD(arg0, u16 *, 0x1F6) = 0x400U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) (M2C_FIELD(arg0, s16 *, 0x1F4) * 6);
    }
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + (u16) M2C_FIELD(arg0, s16 *, 0x1F4));
    M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) - 6);
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    if ((s16) M2C_FIELD(arg0, u16 *, 0x1F6) < 0) {
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
    func_8016F458_overlay_054(arg0);
}
