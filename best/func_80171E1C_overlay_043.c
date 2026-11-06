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

M2C_UNK func_80171F88_overlay_043(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_801720AC_overlay_043(void *);          /* extern */
M2C_UNK func_801724FC_overlay_043(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80172650_overlay_043(void *, M2C_UNK); /* extern */
M2C_UNK func_80172770_overlay_043(void *);          /* extern */
M2C_UNK func_8017287C_overlay_043(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_80171E1C_overlay_043(void *arg0) {
    M2C_UNK var_a1;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2CC);
    M2C_FIELD(arg0, s8 *, 0x2CD) = 0;
    switch (temp_v0) {
    case 2:
    case 3:
        var_a1 = 1;
block_12:
        func_80171F88_overlay_043(arg0, var_a1, 0, 6, 0x2800, 0);
        return;
    case 4:
        func_801720AC_overlay_043(arg0);
        return;
    case 5:
    case 6:
        var_a1 = 1;
        {
        func_80171F88_overlay_043(arg0, var_a1, 0, 6, 0x2800, 0);return;}
    case 7:
        func_80172650_overlay_043(arg0, 4);
        return;
    case 8:
        func_80172650_overlay_043(arg0, 6);
        return;
    case 11:
        func_8017287C_overlay_043(arg0, 0x17, 0x60, 0x60, 0x60);
        func_801724FC_overlay_043(arg0, 4, 9);
        return;
    case 13:
        var_a1 = 1;
        {
        func_80171F88_overlay_043(arg0, var_a1, 0, 6, 0x2800, 0);return;}
    case 14:
        func_8017287C_overlay_043(arg0, 0x17, 0x60, 0x60, 0x60);
        func_80172770_overlay_043(arg0);
        return;
    case 15:
        var_a1 = 1;
        {
        func_80171F88_overlay_043(arg0, var_a1, 0, 6, 0x2800, 0);return;}
    case 18:
        var_a1 = 4;
        {
        func_80171F88_overlay_043(arg0, var_a1, 0, 6, 0x2800, 0);return;}
    case 9:
    case 10:
    case 16:
    case 17:
    case 19:
        func_801724FC_overlay_043(arg0, 5, 4);
        func_8017287C_overlay_043(arg0, 0x17, 0x60, 0x60, 0x60);
        /* fallthrough */
    default:
        return;
    }
}
