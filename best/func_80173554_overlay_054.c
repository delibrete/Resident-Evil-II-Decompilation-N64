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
extern unsigned short D_800E10C8;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
extern char D_800E10D0[];

s32 func_80173554_overlay_054(void *arg0) {
    s32 *var_s0;
    s32 temp_s1;
    s32 var_s3;
    s8 var_a0;
    u8 temp_v0;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s0 = *(s32 * *)(D_800C7650 + 0x19D3C);
    } else {
        var_s0 = &D_800E10D0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_s3 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    } else {
        var_s3 = M2C_FIELD(arg0, s32 *, 0x28C);
    }
    temp_s1 = func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30), 0x100);
    func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s0, s32 *, 0x28), M2C_FIELD(var_s0, s32 *, 0x30));
    if (M2C_FIELD(var_s0, s16 *, 0x1F2) >= 0) {
        if (var_s3 >= 0x5DD) {
            M2C_FIELD(temp_s2, u8 *, 0xB) = 0x5AU;
            goto block_16;
        }
        temp_v0 = M2C_FIELD(temp_s2, u8 *, 0xB);
        if (temp_v0 != 0) {
            M2C_FIELD(temp_s2, u8 *, 0xB) = (u8) (temp_v0 - 1);
            goto block_16;
        }
        var_a0 = 2;
        if (temp_s1 & 0x8000) {
            var_a0 = 1;
        }
        if ((M2C_FIELD((var_a0 + temp_s2), u8 *, 0x21) == 0) && !(D_800E10C8 & 0x80)) {
            M2C_FIELD(temp_s2, s8 *, 0xF) = var_a0;
            M2C_FIELD(temp_s2, s8 *, 0xD) = 4;
            M2C_FIELD(((var_a0 & 0xFF) + temp_s2), s8 *, 0x21) = 0xF;
            return 1;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return 0;
    }
block_16:
    return 0;
}
