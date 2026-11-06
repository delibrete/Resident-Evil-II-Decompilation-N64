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


extern int (*D_8017492C_overlay_058[])();
M2C_UNK func_80173E84_overlay_058(void *, s32, M2C_UNK); /* extern */
extern M2C_UNK D_8017487C_overlay_058;

void func_8016FD7C_overlay_058(void *arg0) {
    s16 temp_s1;

    D_8017492C_overlay_058[M2C_FIELD(arg0, u8 *, 6)]();
    temp_s1 = *((M2C_FIELD(arg0, s16 *, 0x2B6) * 4) + &D_8017487C_overlay_058);
    if (M2C_FIELD(arg0, s8 *, 0x207) != 0) {
        func_80173E84_overlay_058(arg0, (unsigned char)(temp_s1 + 1), 1);
        func_80173E84_overlay_058(arg0, (temp_s1 + 3) & 0xFF, 1);
        M2C_FIELD(arg0, s8 *, 0x207) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x207) - 1);
    }
}
