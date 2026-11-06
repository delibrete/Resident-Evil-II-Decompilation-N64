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

s32 func_8016F380_overlay_051();
s32 func_8016F528_overlay_051();
s32 func_8016F6D4_overlay_051();
s32 func_8016F8E0_overlay_051();
extern char D_801731A0_overlay_051[];
extern char D_801731A4_overlay_051[];
extern char D_801731A8_overlay_051[];
extern char D_801731AC_overlay_051[];

void func_8017147C_overlay_051(void *arg0) {
int __repair_constant = 2;

    s32 var_a2;
    s32 var_a3;
    s32 var_a1;
    s32 var_v0;
    s8 temp_v0;
    s8 var_s0;

    var_s0 = 0;
    M2C_FIELD(arg0, s16 *, 0x2D0) = 0;
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2BB) - 1;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    switch (temp_v0) {
case 0: break;
                              /* switch 1 */
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        func_8016F528_overlay_051(arg0, 1, 0, 6, 0x2000, 3);
        /* fallthrough */
    case 11:                                        /* switch 1 */
        var_s0 = 1;
        break;
    case 6:                                         /* switch 1 */
        func_8016F528_overlay_051(arg0, 4, 0, 6, 0x2400, 3);
        var_a1 = __repair_constant;
        var_a2 = 0;
        var_a3 = 6;
        var_v0 = __repair_constant;
block_11:
        func_8016F528_overlay_051(arg0, var_a1, var_a2, var_a3, var_v0);
        var_s0 = __repair_constant;
        break;
    case 7:                                         /* switch 1 */
        func_8016F528_overlay_051(arg0, 4, 0, 6, 0x2600, 3);
        var_a2 = 0;
        var_a3 = 6;
        var_a1 = 4;
        var_v0 = __repair_constant;
        goto block_11;
    case 8:                                         /* switch 1 */
        var_a1 = 3;
        var_a3 = 6;
        var_a2 = 4;
block_10:
        var_v0 = 7;
        goto block_11;
    case 9:                                         /* switch 1 */
        func_8016F528_overlay_051(arg0, 5, 4, 6, 0x1100, 7);
        var_s0 = 1;
        /* fallthrough */
    case 15:                                        /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x26E) = 0;
        break;
    case 10:                                        /* switch 1 */
        var_a1 = 3;
        var_a2 = 4;
        var_a3 = 9;
        {var_v0 = 7;
        goto block_11;}
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 12:                                        /* switch 1 */
        func_8016F528_overlay_051(arg0, 1, 0, 6, 0x2000, 3);
        break;
    case 13:                                        /* switch 1 */
        func_8016F8E0_overlay_051(arg0);
        var_s0 = __repair_constant;
        break;
    case 14:                                        /* switch 1 */
        func_8016F6D4_overlay_051(arg0);
        var_s0 = 1;
        break;
    case 17:                                        /* switch 1 */
        func_8016F6D4_overlay_051(arg0);
        break;
    }
    if (M2C_FIELD(arg0, u16 *, 0x2B8) & 1) {
        M2C_FIELD(arg0, s8 *, 0x26E) = 0;
        return;
    }
    switch (var_s0) {                               /* switch 2; irregular */
    case 2:                                         /* switch 2 */
        if (func_8016F380_overlay_051(3, &D_801731A8_overlay_051, &D_801731AC_overlay_051) == 0) {
            M2C_FIELD(arg0, s8 *, 0x26E) = 0;
            return;
        }
        if (M2C_FIELD(arg0, u16 *, 0x26C) & 0x20) {
            M2C_FIELD(arg0, s8 *, 0x26E) = var_s0;
            return;
        }
        goto block_35;
    default:                                        /* switch 2 */
        M2C_FIELD(arg0, s8 *, 0x26E) = 0;
        return;
    case 0:                                         /* switch 2 */
        if (func_8016F380_overlay_051(4, &D_801731A0_overlay_051, &D_801731A4_overlay_051) == 0) {
            M2C_FIELD(arg0, s8 *, 0x26E) = 0;
            return;
        }
        if (M2C_FIELD(arg0, u16 *, 0x26C) & 0x20) {
            M2C_FIELD(arg0, s8 *, 0x26E) = __repair_constant;
            return;
        }
block_35:
        M2C_FIELD(arg0, s8 *, 0x26E) = 1;
        return;
    case 1:                                         /* switch 2 */
        M2C_FIELD(arg0, s8 *, 0x26E) = 0;
        return;
    }
}
