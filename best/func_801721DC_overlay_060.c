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

s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80033634_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_80059E30_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800C7650;

void func_801721DC_overlay_060(void *arg0, void *arg1) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 var_v0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2B5);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2B5) = 1U;
        M2C_FIELD(arg0, s16 *, 0x2B8) = (s16) ((func_80033634_ovl_01(1) & 0x1F) + 0xB4);
        M2C_FIELD(arg0, u16 *, 0x2BA) = 6U;
        M2C_FIELD(arg0, s8 *, 0x2B7) = 0;
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg1, void **, 0x120);
        temp_v0 = M2C_FIELD(temp_v1_2, u16 *, 0x18) << 0x10;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v1_2, u16 *, 0x18) = (u16) (temp_v0 >> 0x11);
        }
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0, u16 *, 0xC) + M2C_FIELD(arg0, u16 *, 0x2BA));
        if ((s16) M2C_FIELD(arg0, u16 *, 0x2BA) < 0xA2) {
            temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x2BA) + 6;
            if (M2C_FIELD(arg0, s8 *, 0x2B7) == 0) {
                M2C_FIELD(arg0, u16 *, 0x2BA) = temp_v0_2;
                if ((s16) temp_v0_2 >= 0xA2) {
                    M2C_FIELD(arg0, s8 *, 0x2B7) = 1;
                    M2C_FIELD(arg0, u16 *, 0x2BA) = 0xA2U;
                }
            }
        }
        if ((s16) M2C_FIELD(M2C_FIELD(arg1, void **, 0x120), u16 *, 0xC) >= 0x1F41) {
            temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x2BA) - 6;
            M2C_FIELD(arg0, u16 *, 0x2BA) = temp_v0_3;
            if (temp_v0_3 & 0x8000) {
                M2C_FIELD(arg0, u8 *, 0x2B5) = 2U;
                var_v0 = 8;
block_25:
                M2C_FIELD(arg0, u16 *, 0x2BA) = var_v0;
                M2C_FIELD(arg0, s8 *, 0x2B7) = 0;
            }
        }
block_26:
        if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x1770U) && (M2C_FIELD(arg0, u8 *, 0x2C5) == 0) && (func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800C7650, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650, s32 *, 0x19AB0), 0x80) == 0) && (M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) == 0) && !(M2C_FIELD(arg0, u16 *, 0x2C2) & 4)) {
            M2C_FIELD(arg0, s8 *, 0x2B4) = 1;
            M2C_FIELD(arg0, u8 *, 0x2B5) = 0U;
            if ((M2C_FIELD(&D_800C7650, s16 *, 0x19C72) <= 0) && (M2C_FIELD(arg0, s16 *, 0x1F2) >= 0)) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
                do { func_80059E30_ovl_01(0x1F4, 0); } while (0);
                M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650, u8 *, 0x19CEF) | 0x80);
                M2C_FIELD(arg0, s8 *, 0x2B4) = 4;
                M2C_FIELD(arg0, u8 *, 0x2B5) = 0U;
                M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) | 0x100);
            }
        }
        return;
    case 2:
        temp_a0_2 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_2, u16 *, 0xC) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0xC) - M2C_FIELD(arg0, u16 *, 0x2BA));
        if ((s16) M2C_FIELD(arg0, u16 *, 0x2BA) < 0xC0) {
            temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x2BA) + 8;
            if (M2C_FIELD(arg0, s8 *, 0x2B7) == 0) {
                M2C_FIELD(arg0, u16 *, 0x2BA) = temp_v0_4;
                if ((s16) temp_v0_4 >= 0xC0) {
                    M2C_FIELD(arg0, s8 *, 0x2B7) = 1;
                    M2C_FIELD(arg0, u16 *, 0x2BA) = 0xC0U;
                }
            }
        }
        if ((s16) M2C_FIELD(M2C_FIELD(arg1, void **, 0x120), u16 *, 0xC) < -0x224) {
            temp_v0_5 = M2C_FIELD(arg0, u16 *, 0x2BA) - 8;
            M2C_FIELD(arg0, u16 *, 0x2BA) = temp_v0_5;
            if (temp_v0_5 & 0x8000) {
                M2C_FIELD(arg0, u8 *, 0x2B5) = 1U;
                var_v0 = 6;
                goto block_25;
            }
        }
        goto block_26;
    }
}
