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

s32 func_801701F4_overlay_049();

void func_80170148_overlay_049(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    switch (arg1) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        var_a1 = 0;
        var_a3 = 0x1000;
        var_a2 = 0x10;
block_9:
        func_801701F4_overlay_049(arg0, var_a1, var_a2, var_a3);
    default:
        return;
    case 11:
        var_a1 = 4;
        var_a2 = 9;
        var_a3 = 0x800;
        goto block_9;
    case 13:
        var_a1 = 0;
        var_a2 = 0x10;
        var_a3 = 0x1000;
        goto block_9;
    case 14:
        M2C_FIELD(arg0, s8 *, 0x2C4) = 7;
        return;
    case 15:
        var_a1 = 0;
        var_a2 = 0x10;
        var_a3 = 0x1000;
        goto block_9;
    case 18:
        var_a1 = 0;
        var_a2 = 0x10;
        var_a3 = 0x1000;
        goto block_9;
    case 9:
    case 10:
    case 16:
    case 17:
    case 19:
        var_a1 = 5;
        var_a2 = 4;
        var_a3 = 0x1300;
        goto block_9;
    }
}
