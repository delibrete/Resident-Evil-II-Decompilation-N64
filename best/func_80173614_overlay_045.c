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

M2C_UNK func_80032EA4_ovl_01(s32, s32, s16);        /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_80173614_overlay_045(void *arg0, s16 arg1) {
    M2C_UNK *var_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2_2;

    if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
        var_a2 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
    } else {
        var_a2 = &D_800E10D0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2BE) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x28);
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x30);
        var_a1 = temp_v1 - (M2C_FIELD(var_a2, s32 *, 0x28) - temp_v1);
        var_a2_2 = temp_v0 - (M2C_FIELD(var_a2, s32 *, 0x30) - temp_v0);
    
    func_80032EA4_ovl_01(var_a1, var_a2_2, arg1);} else {
        var_a1 = M2C_FIELD(var_a2, s32 *, 0x28);
        var_a2_2 = M2C_FIELD(var_a2, s32 *, 0x30);
    
    func_80032EA4_ovl_01(var_a1, var_a2_2, arg1);}
}
