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


extern int (*D_80166030_overlay_015[])();
M2C_UNK func_80163828_overlay_015();                /* extern */

void func_80163950_overlay_015(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v0;
    u8 temp_v1;

    temp_v0 = M2C_FIELD(arg0, u8 *, 5);
    if (temp_v0 != 0xFF) {
        M2C_FIELD(arg0, u8 *, 0x2CC) = temp_v0;
        M2C_FIELD(arg0, u8 *, 5) = 0xFFU;
        func_80163828_overlay_015();
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x1E9);
        if (temp_v1 >= 2U) {
            M2C_FIELD(arg0, u8 *, 0x1E9) = (u8) (temp_v1 - 2);
        }
    }
    D_80166030_overlay_015[M2C_FIELD(arg0, u8 *, 0x26E)](arg0, arg1, arg2);
}
