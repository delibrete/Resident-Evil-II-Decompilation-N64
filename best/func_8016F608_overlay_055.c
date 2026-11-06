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

s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8017026C_overlay_055();

void func_8016F608_overlay_055(void *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 8;

    s16 temp_v1_2;
    s16 var_a0;
    u16 var_a0_2;
    
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        var_a0_2 = -0x18U;
        if (func_80033634_ovl_01() & 1) {
            var_a0_2 = 0x18;
        }
        M2C_FIELD(arg0, u16 *, 0x1F4) = var_a0_2;
        M2C_FIELD(arg0, u16 *, 0x2BC) = (u16) M2C_FIELD(arg0, u16 *, 0x2C0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2B4) << 0x13) + 0x01000F00);
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x2C2) + M2C_FIELD(arg0, u16 *, 0x1F4);
        var_a0 = temp_v1_2;
        M2C_FIELD(arg0, u16 *, 0x2C2) = (u16) temp_v1_2;
        M2C_FIELD(arg0, u16 *, 0x2BC) += 0x18;
        if (var_a0 < 0) {
            var_a0 = -var_a0;
        }
        if (var_a0 >= 0x400) {
            var_a0_2 = -8U;
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) > 0) {
                var_a0_2 = __repair_constant;
            }
            M2C_FIELD(arg0, u16 *, 0x1F4) = var_a0_2;
        }
block_14:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        break;
    case 2:
        M2C_FIELD(arg0, u16 *, 0x2BC) -= __repair_constant;
        M2C_FIELD(arg0, u16 *, 0x2C2) -= M2C_FIELD(arg0, u16 *, 0x1F4);
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x340) >= M2C_FIELD(M2C_FIELD(arg0, void **, 0x250), s16 *, 0x25E)) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01(arg0) & 7) + 0xF);
        }
        {
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);break;}
    case 3:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2B4) << 0x10) + 0x03000F00);
        }
    default:
        break;
    case 4:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            if ((M2C_FIELD(arg0, u8 *, 0x2BF) == 1) && (M2C_FIELD(arg0, u8 *, 0x2C6) == 0)) {
                M2C_FIELD(arg0, s8 *, 5) = 2;
                M2C_FIELD(arg0, u8 *, 6) = 0;
                M2C_FIELD(arg0, s8 *, 0x2BE) = 0;
                M2C_FIELD(arg0, s8 *, 0x2CB) = 2;
            } else {
                M2C_FIELD(arg0, u8 *, 6) = 5U;
            }
        }
        break;
    }
    func_8017026C_overlay_055(arg0, 0);
}
