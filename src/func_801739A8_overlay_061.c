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

void func_801739A8_overlay_061(void *arg0) {
    u16 temp_v0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2BF);
    switch (temp_v1) {
case 0: break;
                              /* irregular */
    case 1:
        temp_a0 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_a0, s32 *, 0x5E0) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x5E0) & ~0x4000) | 0x40);
        M2C_FIELD(arg0, u8 *, 0x2BF) = 2U;
        M2C_FIELD(arg0, u16 *, 0x2C0) = 0x96U;
        /* fallthrough */
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x2C0) - 1;
        M2C_FIELD(arg0, u16 *, 0x2C0) = temp_v0;
        if ((temp_v0 & 0xFFFF) == 0xFFFF) {
            M2C_FIELD(arg0, u8 *, 0x2BF) = 3U;
            return;
        }
        return;
    case 3:
        temp_v0_2 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v0_2, s32 *, 0x5E0) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x5E0) | 0x4000) & ~0x40);
        M2C_FIELD(arg0, u8 *, 0x2BF) = 0U;
        return;
    }
}
