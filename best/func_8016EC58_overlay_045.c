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


extern int (*D_801748C0_overlay_045[])();
M2C_UNK func_801743D8_overlay_045();                /* extern */
M2C_UNK func_8017462C_overlay_045(void *);          /* extern */

void func_8016EC58_overlay_045(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v0;
    void *temp_s2;

    temp_s2 = (char *)(arg0); temp_s2 += (s32)(0x2B4);
    do { func_801743D8_overlay_045(); } while (0);
    D_801748C0_overlay_045[M2C_FIELD(arg0, u8 *, 0x2BE)](arg0, arg1, arg2);
    func_8017462C_overlay_045(arg0);
    if (M2C_FIELD(arg0, s16 *, 0x2B4) != 0) {
        M2C_FIELD(arg0, s16 *, 0x2B4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x2B4) - 1);
    }
    temp_v0 = M2C_FIELD(temp_s2, u8 *, 0x1A);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_s2, u8 *, 0x1A) = (u8) (temp_v0 - 1);
    }
    if (M2C_FIELD(temp_s2, s16 *, 4) == 0) {
        M2C_FIELD(temp_s2, u16 *, 6) = 0U;
        M2C_FIELD(temp_s2, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(temp_s2, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(temp_s2, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 7);
        return;
    }
    M2C_FIELD(temp_s2, u16 *, 6) = (u16) (M2C_FIELD(temp_s2, u16 *, 6) + 1);
}
