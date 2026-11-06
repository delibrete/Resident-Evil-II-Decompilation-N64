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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
extern M2C_UNK D_800E10D0;
extern M2C_UNK D_800E8FC8;
extern M2C_UNK D_80174B04_overlay_058;

void func_80173F8C_overlay_058(void *arg0, u8 arg1, s32 arg2, u16 *arg3) {
    u16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK *var_a2;
    s16 temp_a1;
    u16 *var_a3;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s2;

    temp_s2 = (char *)(((arg2 & 0xFF) * 6)); temp_s2 += (s32)(&D_80174B04_overlay_058);
    temp_a1 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800E10D0, s16 *, 0x2A), M2C_FIELD(&D_800E10D0, s16 *, 0x32));
    temp_v1 = M2C_FIELD(temp_s2, u8 *, 0);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x234) + ((arg1 & 0xFF) * 0x178);
    if (!(temp_v1 & 0x80)) {
        sp10 = M2C_FIELD(temp_a0, u16 *, 0x4E) + M2C_FIELD(arg3, u16 *, 0);
        var_a2 = &D_800E8FC8;
        sp12 = M2C_FIELD(temp_a0, u16 *, 0x52) + M2C_FIELD(arg3, u16 *, 2);
        var_a3 = &sp10;
        sp14 = M2C_FIELD(temp_a0, u16 *, 0x56) + M2C_FIELD(arg3, u16 *, 4);
    
    func_800377B0_ovl_01(((temp_v1 & 0x7F) << 0x18) | ((M2C_FIELD(temp_s2, u8 *, 1) + M2C_FIELD(temp_s2, u16 *, 2)) << 0x10) | M2C_FIELD(temp_s2, u16 *, 4), temp_a1, var_a2, var_a3);} else {
        var_a2 = temp_a0 + 0x38;
        var_a3 = arg3;
    
    func_800377B0_ovl_01(((temp_v1 & 0x7F) << 0x18) | ((M2C_FIELD(temp_s2, u8 *, 1) + M2C_FIELD(temp_s2, u16 *, 2)) << 0x10) | M2C_FIELD(temp_s2, u16 *, 4), temp_a1, var_a2, var_a3);}
}
