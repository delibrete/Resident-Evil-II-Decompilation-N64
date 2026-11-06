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

s32 func_800662B8_ovl_01();

void func_80173C1C_overlay_058(void *arg0, void *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_a1;

    temp_v1 = M2C_FIELD(arg1, u8 *, 0x11);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg1, u8 *, 0x11) = 1U;
        M2C_FIELD(arg1, u8 *, 0x12) = 0U;
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg1, u8 *, 0x12) + 1;
        M2C_FIELD(arg1, u8 *, 0x12) = temp_v0;
        if ((u32) (temp_v0 & 0xFF) >= 9U) {
            M2C_FIELD(arg1, u8 *, 0x11) = 2U;
            M2C_FIELD(arg1, u8 *, 0x12) = 8U;
        }
        break;
    case 2:
        temp_v0_2 = M2C_FIELD(arg1, u8 *, 0x12) - 1;
        M2C_FIELD(arg1, u8 *, 0x12) = temp_v0_2;
        if (!(temp_v0_2 & 0xFF)) {
            M2C_FIELD(arg1, s8 *, 0x10) = 0;
            M2C_FIELD(arg1, u8 *, 0x11) = 0U;
            M2C_FIELD(arg1, u8 *, 0x12) = 0U;
        }
        break;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x234) + 0x1028;
    M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x120), s16 *, 0xC) = (s16) (M2C_FIELD(arg1, u8 *, 0x12) << 9);
    func_800662B8_ovl_01(arg0, temp_a1, arg1);
}
