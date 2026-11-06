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


extern int (*D_80173180_overlay_063[])();
M2C_UNK func_80172A54_overlay_063();                /* extern */
extern M2C_UNK D_800C7650;

void func_8016EBB4_overlay_063(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0); temp_s0 += (s32)(0x2B4);
    do { func_80172A54_overlay_063(); } while (0);
    temp_v0 = M2C_FIELD(temp_s0, u8 *, 0x14);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_s0, u8 *, 0x14) = (u8) (temp_v0 - 1);
    }
    D_80173180_overlay_063[M2C_FIELD(arg0, u8 *, 5)](arg0, arg1, arg2);
    M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(temp_s0, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(temp_s0, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 7);
    M2C_FIELD(temp_s0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0x1E0);
    M2C_FIELD(temp_s0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x1E2);
    M2C_FIELD(temp_s0, u16 *, 0x20) = (u16) M2C_FIELD(arg0, u16 *, 0x1E4);
    if (M2C_FIELD(&D_800C7650, u16 *, 0x19A78) & 0x20) {
        M2C_FIELD(temp_s0, u8 *, 0x14) = 0x3CU;
    }
}
