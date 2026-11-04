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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_800A5618_overlay_001();
s32 func_800A5660_overlay_001();
extern s32 D_8014E10C;
extern s32 D_8014E110;

s32 func_800AD2D0_ovl_01(s32 *arg0, s32 arg1) {
    s16 var_s0;
    union { s32 * pointer; u32 value; } __repair_phase_storage;
    char *var_a0;
    char *var_a1;
    char *var_a1_2;
    s32 temp_a0;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    
    void *temp_v0;

    var_a0 = arg0;
    __repair_phase_storage.pointer = var_a0;
    var_v1 = 0;
    if (D_8014E10C > 0) {
        var_a0 = &D_8014E110;
loop_2:
        if (*(s32 *)var_a0 != __repair_phase_storage.pointer) {
            var_v1 += 1;
            var_a0 += 0xC;
            if (var_v1 >= D_8014E10C) {

            } else {
                goto loop_2;
            }
        }
    }
    var_v0 = 1;
    if (var_v1 == D_8014E10C) {
        var_a1 = __repair_phase_storage.pointer;
        if (var_v1 < 8) {
            var_s0 = 0;
            if (*(s32 *)var_a1 != 0xFFFF) {
                do {
                    var_a1 += 0x1C;
                    var_s0 += 1;
                } while (*(s32 *)var_a1 != 0xFFFF);
            }
            func_800A5618_overlay_001(var_a0, var_a1);
            var_a2 = 0;
            var_a1_2 = __repair_phase_storage.pointer;
            temp_a0 = D_8014E10C;
            temp_v0 = (char *)((temp_a0 * 0xC)); temp_v0 += (s32)(&D_8014E110);
            __repair_phase_storage.value =  var_s0 & 0xFFFF;
            M2C_FIELD(temp_v0, s32 **, 0) = var_a1_2;
            M2C_FIELD(temp_v0, s16 *, 8) = var_s0;
            M2C_FIELD(temp_v0, s32 *, 4) = arg1;
            if (__repair_phase_storage.value != 0) {
                do {
                    M2C_FIELD(var_a1_2, s16 *, 2) = 0;
                    var_a2 += 1;
                    var_a1_2 += 0x1C;
                } while ((u32) (var_a2 & 0xFFFF) < __repair_phase_storage.value);
            }
            D_8014E10C += 1;
            func_800A5660_overlay_001(temp_a0, var_a1_2, var_a2);
            return 1;
        }
        var_v0 = 0;
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
