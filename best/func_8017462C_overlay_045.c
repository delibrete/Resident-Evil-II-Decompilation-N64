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

extern M2C_UNK D_800E10D0;

void func_8017462C_overlay_045(void *arg0) {
int __repair_literal;

    s32 temp_a1;
    
    
    s32 var_v0_2;
s32 __repair_phase_var_v0_2;
    
    u8 temp_v1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0) & 0xE3FFFFFF;
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2BE);
    M2C_FIELD(arg0, s32 *, 0) = temp_a1;
    if (temp_v1 != 1) {
__repair_literal = 2;

        if ((s32) temp_v1 < __repair_literal) {
            var_v0_2 = 0x0C000000;
            if (temp_v1 != 0) {
                return;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a1 | var_v0_2);
        } else {
            if ((s32) temp_v1 < 4) {
                temp_a1 = M2C_FIELD(&D_800E10D0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x2C);
                if (temp_a1 >= 0x1069) {
                    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
                    __repair_phase_var_v0_2 = 0x10000000;
                    goto block_14;
                }
                __repair_phase_var_v0_2 = M2C_FIELD(arg0, s32 *, 0) | 0x18000000;
                M2C_FIELD(arg0, s32 *, 0) = __repair_phase_var_v0_2;
                if (temp_a1 < 0x834) {
                    temp_a1 = 0x04000000;
block_14:
                    M2C_FIELD(arg0, s32 *, 0) = (s32) (__repair_phase_var_v0_2 | temp_a1);
                }
            }
        }
    } else {
        __repair_phase_var_v0_2 = 0x10000000;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a1 | __repair_phase_var_v0_2);
    }
}
