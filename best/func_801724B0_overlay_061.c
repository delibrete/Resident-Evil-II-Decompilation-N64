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

s32 func_80089D34_ovl_01(void *, M2C_UNK);          /* extern */
extern M2C_UNK D_800C7650;

void func_801724B0_overlay_061(void *arg0) {
int __repair_literal;

    s32 *temp_v1_2;
    s32 *temp_v1_3;
    u8 temp_v1;
    void *temp_a3;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_a3 = M2C_FIELD(arg0, void **, 0x234);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000000;
        M2C_FIELD(arg0, s16 *, 0x68) = 0;
        M2C_FIELD(arg0, s16 *, 0x66) = 0;
        M2C_FIELD(arg0, s16 *, 0x64) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
        temp_v1_2 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x2B4) + 7) * 4) + &D_800C7650), s32 **, 0x19D38);
        *temp_v1_2 |= 2;
        M2C_FIELD(temp_a3, s16 *, 0x124) = 0x1000;
        if (M2C_FIELD(arg0, u16 *, 0x270) & 1) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            return;
        }
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, 0x40));
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x01080000;
        M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
        M2C_FIELD(temp_a3, s16 *, 0x124) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~2);
__repair_literal = 4;

        temp_v1_3 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x2B4) + 7) * __repair_literal) + &D_800C7650), s32 **, 0x19D38);
        *temp_v1_3 &= ~2;
        return;
    }
}
