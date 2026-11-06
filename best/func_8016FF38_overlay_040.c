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

s32 func_80033634_ovl_01(void *);                   /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;
extern M2C_UNK D_801737A0_overlay_040;

void func_8016FF38_overlay_040(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *var_v0;
    u32 var_a0;
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x2C3) != 0) {
        var_v0 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
        var_a0 = 0xDAC;
    } else {
        var_a0 = 0xDAC;
        var_v0 = &D_800E10D0;
    }
    if ((M2C_FIELD(var_v0, s32 *, 4) & 0xFFFF0000) == 0x01020000) {
        var_a0 = 0x1388;
    }
    if (var_a0 >= (u32) M2C_FIELD(arg0, u32 *, 0x28C)) {
        M2C_FIELD(arg0, s8 *, 6) = 2;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000F00;
    } else if ((M2C_FIELD(&D_800C7650, u16 *, 0x19A7A) & 1) || (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0x20)) {
        if (!(M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0x80)) {
            M2C_FIELD(arg0, s8 *, 6) = 2;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000F00;
            M2C_FIELD(&D_800C7650, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) | 0x80);
        } else {
            temp_v1 = *((func_80033634_ovl_01(&D_800C7650 + 0x18000) & 7) + &D_801737A0_overlay_040);
            M2C_FIELD(arg0, s8 *, 6) = 1;
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) temp_v1;
        }
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
