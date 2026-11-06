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

M2C_UNK func_800334F8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801746E8_overlay_058(void *, u8, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_801748CC_overlay_058;

void func_8016ECD8_overlay_058(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_a0;
    u32 var_s1;
    
    u8 temp_a1;
    void *temp_v0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        var_s1 = 0;
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s16 *, 0x272) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0A000F00;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
        func_800334F8_ovl_01(0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        M2C_FIELD(arg0, s8 *, 0x2C9) = 1;
        M2C_FIELD(arg0, s16 *, 0x212) = 0xD98;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800);
        do {
            temp_a1 = *(var_s1 + &D_801748CC_overlay_058);/*__repair_loop_weight*/do {
            var_s1 += 1;} while (0);
            func_801746E8_overlay_058(arg0, temp_a1, 0, 0xFFF);
        } while (var_s1 < 8U);
        var_s1 = 0x14;
        var_a0 = 0x1D60;
        do {
            var_s1 += 1;
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x234) + var_a0;
            M2C_FIELD(temp_v0, s16 *, 0x124) = 0x1000;
            M2C_FIELD(temp_v0, s16 *, 0x126) = 0;
            M2C_FIELD(temp_v0, s16 *, 0x128) = 0x1000;
            M2C_FIELD(temp_v0, s32 *, 0) = (s32) (M2C_FIELD(temp_v0, s32 *, 0) | 0x400);
            var_a0 += 0x178;
        } while (var_s1 < 0x17U);
        func_801746E8_overlay_058(arg0, 0xBU, 0, 0xFFF);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
    }
    if (M2C_FIELD(arg0, s16 *, 0x270) == 1) {
        M2C_FIELD(arg0, s16 *, 6) = 0x100;
    }
}
