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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800662B8_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_80175AF8_overlay_056;

void func_801726E0_overlay_056(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    u8 temp_v1;
    void *temp_a1;
    void *temp_a1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01001F00;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x3C;
        M2C_FIELD(arg0, s8 *, 0x25C) = 0;
        if (M2C_FIELD(arg0, u16 *, 0x270) & 1) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
        }
        break;
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        func_80032B8C_ovl_01(arg0, 0);
        if (M2C_FIELD(arg0, u16 *, 0x270) & 2) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x1F00;
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        /* fallthrough */
    case 3:
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x22C);
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x230);
        func_800334F8_ovl_01(arg0, temp_s0, temp_s1, 0);
        func_80089D34_ovl_01(arg0, temp_s0, temp_s1, 0x80);
        func_80032B8C_ovl_01(arg0, 0);
        if (M2C_FIELD(arg0, u16 *, 0x270) & 4) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01001F00;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0x3C;
        M2C_FIELD(arg0, u8 *, 6) = 5U;
        /* fallthrough */
    case 5:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        func_80032B8C_ovl_01(arg0, 0);
        break;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x234) + 0x178;
    M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x120), s16 *, 0xC) = (s16) (0x1000 - (*(M2C_FIELD(arg0, s8 *, 0x2BA) + &D_80175AF8_overlay_056) * 5));
    do { func_800662B8_ovl_01(arg0, temp_a1); } while (0);
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0;
    M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 0x120), s16 *, 0xC) = (s16) (0x1000 - (*(M2C_FIELD(arg0, s8 *, 0x2BA) + &D_80175AF8_overlay_056) * 5));
    func_800662B8_ovl_01(arg0, temp_a1_2);
}
