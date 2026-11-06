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


extern int (*D_8017335C_overlay_063[])();
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80172EB4_overlay_063(s32, M2C_UNK, s32); /* extern */

void func_80172784_overlay_063(s32 arg0) {
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;

    temp_s0 = (char *)(arg0); temp_s0 += (s32)(0x2B4);
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x18);
    temp_v1_2 = temp_v1 - 1;
    if (temp_v1 != 0) {
        M2C_FIELD(temp_s0, u8 *, 0x18) = temp_v1_2;
        if ((M2C_FIELD(temp_s0, u8 *, 9) & 1) && (temp_v1_2 & 1)) {
            func_80172EB4_overlay_063(arg0, 3, func_80033634_ovl_01() & 7);
        }
    }
    if (M2C_FIELD(temp_s0, u8 *, 9) & 0x80) {
        D_8017335C_overlay_063[M2C_FIELD(temp_s0, u8 *, 6)](arg0, temp_s0);
    }
}
