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


extern int (*D_801733EC_overlay_050[])();
M2C_UNK func_8016EED8_overlay_050();                /* extern */
M2C_UNK func_8017243C_overlay_050(void *);          /* extern */

void func_801724A8_overlay_050(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 5);
    if (temp_v0 != 0xFF) {
        M2C_FIELD(arg0, u8 *, 0x2C5) = temp_v0;
        func_8016EED8_overlay_050();
        M2C_FIELD(arg0, u8 *, 5) = 0xFFU;
        func_8017243C_overlay_050(arg0);
    }
    D_801733EC_overlay_050[M2C_FIELD(arg0, u8 *, 0x26E)](arg0, arg1, arg2);
}
