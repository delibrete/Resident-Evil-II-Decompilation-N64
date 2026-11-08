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

s32 func_80033054(void *, s32, s16, M2C_UNK *);     /* extern */
extern M2C_UNK D_800E10D0;
extern M2C_UNK D_8017487C_overlay_058;

s32 func_8017411C_overlay_058(void *arg0, s32 arg1) {
    s32 var_v0;
    
    union { void * pointer; s32 value; } __repair_phase_storage;

    __repair_phase_storage.pointer = M2C_FIELD(arg0, s32 *, 0x234) + (*((arg1 * 4) + &D_8017487C_overlay_058) * 0x178);
    if (!(M2C_FIELD(&D_800E10D0, u8 *, 0x26F) & 0x80) && (M2C_FIELD(&D_800E10D0, s16 *, 0x1F2) >= 0)) {
        var_v0 = 0;
        if (func_80033054(&D_800E10D0 + 0x28, __repair_phase_storage.pointer + 0x4C, *((((arg1 * 2) + 1) * 2) + &D_8017487C_overlay_058), &D_8017487C_overlay_058) != 0) {
            __repair_phase_storage.value = M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0x50);
            if (__repair_phase_storage.value < 0) {
                __repair_phase_storage.value = -__repair_phase_storage.value;
            }
            var_v0 = 1;
            if (__repair_phase_storage.value >= 0xCE4) {
                goto block_6;
            }
        }
    } else {
block_6:
        var_v0 = 0;
    }
    return var_v0;
}
