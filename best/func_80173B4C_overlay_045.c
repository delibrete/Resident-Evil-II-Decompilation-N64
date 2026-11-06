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
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, u16 *); /* extern */
extern M2C_UNK D_800E8FC8;
extern M2C_UNK D_80174B04_overlay_045;

void func_80173B4C_overlay_045(void *arg0, s32 arg1, s32 arg2) {
    u16 sp10;
    s16 sp12;
s16 __repair_result_sp12;                                       /* compiler-managed */
    u16 sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    M2C_UNK sp20;
    M2C_UNK *var_a2;
    s16 temp_a0;
    s16 temp_s0;
    s16 temp_v0;
    s32 temp_s4;
    s32 var_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_s2;

    temp_v0 = M2C_FIELD(arg0, s16 *, 0x32);
    temp_a0 = M2C_FIELD(arg0, s16 *, 0x2A);
    temp_s2 = ((arg2 & 0x7F) * 6) + &D_80174B04_overlay_045;
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x234) + ((arg1 & 0xFF) * 0x178);
    temp_v1 = M2C_FIELD(temp_s2, u8 *, 0);
    temp_s4 = temp_v1 & 0x7F;
    temp_s0 = func_80032D44_ovl_01(temp_a0, temp_v0, temp_a0, temp_v0);
    if (temp_v1 & 0x80) {
        var_a2 = temp_s1 + 0x38;
        var_a0 = temp_s4 << 0x18;
        sp10 = 0;
        sp12 = -0x64;
        sp14 = 0;
    } else {
        sp10 = 0;
        sp12 = temp_s0;
        sp14 = 0;
        func_80040E88_ovl_01(&sp10, &sp20);
        sp1C = 0;
        sp1A = 0;
        sp18 = 0;
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x2BE);
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            break;
        case 1:
            sp1A = 0x320;
            break;
        default:
            sp18 = 0x190;
            break;
        }
        func_8004279C_ovl_01(&sp20, &sp18, &sp10);
        sp10 += M2C_FIELD(temp_s1, u16 *, 0x4E);
        sp12 = (u16) sp12 + M2C_FIELD(temp_s1, u16 *, 0x52);
        sp14 += M2C_FIELD(temp_s1, u16 *, 0x56);
        if (arg2 & 0x80) {
            __repair_result_sp12 = M2C_FIELD(arg0, u16 *, 0x1A8);
        }
        var_a2 = &D_800E8FC8;
        var_a0 = temp_s4 << 0x18;
    }
    func_800377B0_ovl_01(var_a0 | (M2C_FIELD(temp_s2, u8 *, 1) << 0x10) | M2C_FIELD(temp_s2, u16 *, 4), temp_s0, var_a2, &sp10);
}
