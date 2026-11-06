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

M2C_UNK func_8016FAC8_overlay_043(void *);          /* extern */
s32 func_801700BC_overlay_043(M2C_UNK, s16, M2C_UNK); /* extern */
s32 func_80170184_overlay_043(M2C_UNK, s16, M2C_UNK); /* extern */

void func_8016F8EC_overlay_043(void *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 var_v0;
    s8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s8 *, 0x2C0);
    switch (temp_v1) {
    case 1:
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        M2C_FIELD(arg0, s8 *, 0x2C0) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x2C0) + 1);
        /* fallthrough */
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) + 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) temp_v0;
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_801700BC_overlay_043(4, temp_v0, 0x14));
        var_v0 = func_801700BC_overlay_043(4, (s16) M2C_FIELD(arg0, u16 *, 0x1F4), -0x64);
block_5:
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + var_v0);
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) == 4) {
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
            M2C_FIELD(arg0, s8 *, 0x2C0) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x2C0) + 1);
            return;
        }
    default:
        return;
    case 3:
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) + 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) temp_v0_2;
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_80170184_overlay_043(4, temp_v0_2, 0x14));
        var_v0 = func_80170184_overlay_043(4, (s16) M2C_FIELD(arg0, u16 *, 0x1F4), -0x64);
        goto block_5;
    case 4:
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1F4) + 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) temp_v0_3;
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_801700BC_overlay_043(3, temp_v0_3, -0x14));
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + func_801700BC_overlay_043(3, (s16) M2C_FIELD(arg0, u16 *, 0x1F4), 0x64));
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) == 3) {
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
            M2C_FIELD(arg0, s8 *, 0x2C0) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x2C0) + 1);
        }
block_11:
        func_8016FAC8_overlay_043(arg0);
        break;
    case 5:
        temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x1F4) + 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) temp_v0_4;
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_80170184_overlay_043(3, temp_v0_4, -0x14));
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + func_80170184_overlay_043(3, (s16) M2C_FIELD(arg0, u16 *, 0x1F4), 0x64));
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) == 3) {
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
            M2C_FIELD(arg0, s8 *, 0x2C0) = 0;
        }
        {
        func_8016FAC8_overlay_043(arg0);break;}
    }
}
