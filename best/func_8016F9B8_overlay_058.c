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

extern short D_800E12C2;
s32 func_80032EA4_ovl_01();
s32 func_80033174_ovl_01();
s32 func_80033634_ovl_01();
extern char D_800E10D0[];

s32 func_8016F9B8_overlay_058(void *arg0) {
    s32 temp_s3;
    s32 temp_s4;
    s8 var_v1;
    u32 var_v1_2;
    u8 var_v0;
u8 __repair_result_var_v0;
    void *temp_s0;

    temp_s0 = arg0 + 0x2B4;
    temp_s3 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800E10D0 + 0x28), *(void * *)(D_800E10D0 + 0x30), (void *)0x300);
    temp_s4 = temp_s3;
    if (D_800E12C2 >= 0) {
        if ((D_800E12C2 < 0x14) && !(func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF)) {
            if ((M2C_FIELD(temp_s0, u8 *, 4) == 0) && ((temp_s3 << 0x10) == 0)) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0xDACU) {
                    var_v1 = 6;
                    goto block_22;
                }
                goto block_23;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return 0;
        }
        if (M2C_FIELD(arg0, u8 *, 0x2B4) == 0) {
            if ((M2C_FIELD(temp_s0, u8 *, 4) != 0) && (M2C_FIELD(temp_s0, u8 *, 5) != 0)) {
                M2C_FIELD((temp_s0 + (func_80033634_ovl_01(arg0) & 1)), s8 *, 4) = 0;
                return -1;
            }
            var_v1_2 = 0xFA0;
            if (func_80032EA4_ovl_01(arg0, *(void * *)(D_800E10D0 + 0x28), *(void * *)(D_800E10D0 + 0x30)) >= 0) {
                __repair_result_var_v0 = M2C_FIELD(temp_s0, u8 *, 4);
            } else {
                var_v1_2 = 0xBB8;
                var_v0 = M2C_FIELD(temp_s0, u8 *, 5);
            }
            if ((var_v0 == 0) && ((temp_s4 << 0x10) == 0)) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < var_v1_2) {
                    var_v1 = 4;
                    goto block_22;
                }
                goto block_23;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return 0;
        }
        if ((M2C_FIELD(temp_s0, u8 *, 4) == 0) && ((temp_s4 << 0x10) == 0)) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0xBB8U) {
                var_v1 = 5;
block_22:
                M2C_FIELD(arg0, s8 *, 5) = var_v1;
                M2C_FIELD(arg0, s16 *, 6) = 0;
                return 1;
            }
            goto block_23;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return 0;
    }
block_23:
    return 0;
}
