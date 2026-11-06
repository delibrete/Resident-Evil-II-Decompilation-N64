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
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, M2C_UNK *, u16 *); /* extern */
s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;
extern M2C_UNK D_800E8FC8;

s32 func_8016EE04_overlay_051(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s16 temp_v0_3;
    s16 var_s0;
    s16 var_s1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
s32 __repair_phase_temp_v0_2;
    
    s32 temp_v1_2;
    
    s32 var_s0_2;
    u16 temp_s0;
    u16 temp_s1;
    u32 temp_v1_4;
    u8 temp_v1;
    void *temp_s3;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0x2C8);
    temp_s1 = M2C_FIELD(arg0, u16 *, 0x2CA);
    temp_s3 = (arg1 * 0x178) + M2C_FIELD(arg0, s32 *, 0x234);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1E9);
    M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) M2C_FIELD(temp_s3, u16 *, 0x4E);
    temp_a2 = temp_v1 < (u32) (arg2 & 0xFFFF);
    M2C_FIELD(arg0, u16 *, 0x2CA) = (u16) M2C_FIELD(temp_s3, u16 *, 0x56);
    if (temp_a2 == 0) {
        if ((u32) (arg3 & 0xFFFF) >= temp_v1) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(temp_s3, s32 *, 0x4C);
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(temp_s3, s32 *, 0x54);
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x28) - (s16) temp_s0;
            temp_lo = temp_v1_2 * temp_v1_2;
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x30) - (s16) temp_s1;
            temp_s0_2 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2), temp_a2);
            temp_v1_4 = (u32) (temp_s0_2 + func_80040BE4_ovl_01(temp_lo + (temp_v1_2 * temp_v1_2), temp_lo) + 0x1F4 + arg5) >> 1;
            if ((M2C_FIELD(arg0, s16 *, 0x1F4) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < temp_v1_4)) {
                var_s1 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), (s16) temp_s0, (s16) temp_s1);
                var_s0 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), (s16) M2C_FIELD(temp_s3, u16 *, 0x4E), (s16) M2C_FIELD(temp_s3, u16 *, 0x56));
                temp_v0_3 = var_s1;
                if (var_s0 < var_s1) {
                    var_s1 = var_s0;
                    var_s0 = temp_v0_3;
                }
                var_s0_2 = (var_s0 - var_s1) & 0xFFF;
                if (var_s0_2 >= 0x800) {
                    var_s1 = (var_s0_2 + var_s1) - 0x1000;
                    var_s0_2 = 0x1000 - var_s0_2;
                }
                __repair_phase_temp_v0_2 = (func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800E10D0, s16 *, 0x2A), M2C_FIELD(&D_800E10D0, s16 *, 0x32)) - (var_s1 - arg4)) & 0xFFF;
                if ((__repair_phase_temp_v0_2 > 0) && (__repair_phase_temp_v0_2 < (var_s0_2 + (arg4 * 2)))) {
                    sp10 = M2C_FIELD(&D_800C7650, u16 *, 0x19AAA);
                    sp14 = M2C_FIELD(&D_800C7650, u16 *, 0x19AB2);
                    sp12 = M2C_FIELD(temp_s3, u16 *, 0x52);
                    func_800377B0_ovl_01(0x62800, M2C_FIELD(arg0, s16 *, 0x66), &D_800E8FC8, &sp10);
                    M2C_FIELD(arg0, s16 *, 0x1F4) = 1;
                    return 1;
                }
                goto block_11;
            }
            goto block_11;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return 0;
    }
block_11:
    return 0;
}
