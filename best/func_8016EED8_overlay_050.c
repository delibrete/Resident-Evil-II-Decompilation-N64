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

s32 func_8016F078_overlay_050();
s32 func_8016F200_overlay_050();
s32 func_8016F420_overlay_050();
s32 func_8016F4CC_overlay_050();

void func_8016EED8_overlay_050(void *arg0) {
    s32 var_a3;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2C5);
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    switch (temp_v0) {
    case 2:
    case 3:
    case 4:
        var_a1 = 1;
        var_a2 = 0;
        var_a3 = 6;
block_13:
        var_v0 = 3;
block_14:
        func_8016F078_overlay_050(arg0, var_a1, var_a2, var_a3, var_v0);
        return;
    case 5:
    case 6:
        var_a1 = 1;
        var_a2 = 0;
        var_a3 = 6;
block_12:
        goto block_13;
    case 7:
        func_8016F078_overlay_050(arg0, 4, 0, 6, 0x1500, 3);
        var_a1 = 2;
        var_a3 = 6;
        var_a2 = 0;
        var_v0 = 2;
        goto block_14;
    case 8:
        func_8016F078_overlay_050(arg0, 4, 0, 6, 0x1500, 3);
        var_a1 = 4;
        var_a2 = 0;
        var_a3 = 6;
        var_v0 = 2;
        goto block_14;
    case 9:
        var_a1 = 5;
        var_a2 = 5;
        var_a3 = 4;
        goto block_13;
    case 10:
        func_8016F420_overlay_050(arg0);
        return;
    case 11:
        var_a1 = 5;
        var_a2 = 4;
        var_a3 = 9;
        goto block_13;
    case 13:
        var_a1 = 1;
        var_a2 = 0;
        var_a3 = 6;
        goto block_13;
    case 14:
        func_8016F4CC_overlay_050(arg0);
        return;
    case 16:
        var_a1 = 5;
        var_a2 = 5;
        var_a3 = 4;
        goto block_12;
    case 15:
    case 18:
        func_8016F200_overlay_050(arg0);
        /* fallthrough */
    default:
        return;
    }
}
