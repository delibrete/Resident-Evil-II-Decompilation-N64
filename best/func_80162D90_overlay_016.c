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

extern M2C_UNK D_800C7650;

void func_80162D90_overlay_016(s32 *arg0, u32 arg1) {
    s32 var_v0;
    s32 var_v1;

    switch (arg1) {
    case 0:
        var_v1 = *arg0 & 0xE3FFFFFF;
        var_v0 = 0x10000000;
        *arg0 = var_v1 | var_v0;
        return;
    case 5:
        *arg0 &= 0xE3FFFFFF;
        /* fallthrough */
    default:
        return;
    case 1:
        var_v1 = *arg0 & 0xE3FFFFFF;
        var_v0 = 0x18000000;
        /* Duplicate return node #3. Try simplifying control flow for better match */
        *arg0 = var_v1 | var_v0;
        return;
    case 2:
        var_v1 = *arg0 & 0xE3FFFFFF;
        var_v0 = 0x08000000;
        /* Duplicate return node #3. Try simplifying control flow for better match */
        *arg0 = var_v1 | var_v0;
        return;
    case 3:
        var_v1 = *arg0 & 0xE3FFFFFF;
        var_v0 = 0x0C000000;
        /* Duplicate return node #3. Try simplifying control flow for better match */
        *arg0 = var_v1 | var_v0;
        return;
    case 4:
        if ((u32) (M2C_FIELD(&D_800C7650, u16 *, 0x19C2A) - 7) < 2U) {
            var_v1 = *arg0 & 0xE3FFFFFF;
            var_v0 = 0x0C000000;
        } else {
            var_v1 = *arg0 & 0xE3FFFFFF;
            var_v0 = 0x04000000;
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        *arg0 = var_v1 | var_v0;
        return;
    }
}
