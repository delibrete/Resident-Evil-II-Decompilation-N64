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


extern int (*D_8016FB60_overlay_064[])();
extern M2C_UNK D_800C7650;

void func_8016EC0C_overlay_064(void *arg0) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_a3;

    temp_a3 = (char *)(arg0); temp_a3 += (s32)(0x2B4);
    temp_v0 = M2C_FIELD(temp_a3, u8 *, 4);
    temp_v0_2 = temp_v0 - 1;
    if (temp_v0 != 0) {
        M2C_FIELD(temp_a3, u8 *, 4) = temp_v0_2;
        if (!(temp_v0_2 & 0xFF)) {
            M2C_FIELD(&D_800C7650, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0xFFEF);
        }
    }
    temp_v0_3 = M2C_FIELD(temp_a3, u8 *, 1);
    if (temp_v0_3 != 0) {
        M2C_FIELD(temp_a3, u8 *, 1) = (u8) (temp_v0_3 - 1);
    }
    D_8016FB60_overlay_064[M2C_FIELD(arg0, u8 *, 5)](temp_a3);
}
