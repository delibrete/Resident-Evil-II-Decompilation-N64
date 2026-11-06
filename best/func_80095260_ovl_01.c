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

s32 func_800439B8_overlay_001(s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004789C_overlay_001(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_overlay_001(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478E8_overlay_001(void *, s32, M2C_UNK); /* extern */
M2C_UNK func_800479EC_overlay_001(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004A7D0_overlay_001(s16, s32, M2C_UNK, M2C_UNK, u8 *); /* extern */
extern s32 D_800C527C_overlay_001;
extern M2C_UNK D_800C7650_overlay_001;
extern M2C_UNK D_8012BF38_overlay_001;
extern u8 D_8012FDA4_overlay_001;
extern M2C_UNK D_80130270_overlay_001;
extern M2C_UNK D_801302D4_overlay_001;
extern M2C_UNK D_8013A340;

void func_80095260_ovl_01(void) {
int __repair_constant = 0x80;

    M2C_UNK var_a1;
    M2C_UNK var_a2;
    M2C_UNK var_a3;
    s32 temp_s2;
    s32 temp_v0;
    u16 *var_v0;
    u16 temp_s4;
    u16 var_s1;
    u32 var_s3;
    u32 var_v0_2;
    u8 **var_s0;
    u8 *temp_v1;
    void *temp_s2_2;
    void *temp_s2_3;
    

    var_s3 = 0;
    temp_s2 = D_800C527C_overlay_001 + 0x3F900;
    if (D_8012FDA4_overlay_001 == 0) {
        var_v0 = (M2C_FIELD(((M2C_FIELD(&D_8012BF38_overlay_001, s8 *, 0x11) * 8) + M2C_FIELD(&D_8012BF38_overlay_001, s8 *, 0x12) + &D_800C7650_overlay_001), u8 *, 0x21944) * 4) + &D_80130270_overlay_001;
    } else {
        temp_v0 = (s32) ((s8) (u8) M2C_FIELD(&D_8012BF38_overlay_001, s8 *, 0x12) + ((u32) ((u8) M2C_FIELD(&D_8012BF38_overlay_001, s8 *, 0x12) << 0x18) >> 0x1F)) >> 1;
        if (!(((s8) (u8) M2C_FIELD(&D_8012BF38_overlay_001, s8 *, 0x12) - (temp_v0 * 2)) & 0xFF)) {
            var_v0_2 = (u8) M2C_FIELD(((temp_v0 & 0xFF) + &D_800C7650_overlay_001), u8 *, 0x21963) >> 4;
        } else {
            var_v0_2 = M2C_FIELD(((temp_v0 & 0xFF) + &D_800C7650_overlay_001), u8 *, 0x21963) & 0xF;
        }
        var_v0 = (var_v0_2 * 4) + &D_801302D4_overlay_001;
    }
    temp_s4 = *var_v0;
    var_s1 = M2C_FIELD(&D_8012BF38_overlay_001, u16 *, 0x5E);
    if (0U < 0xFU) {
        var_s0 = (0 * 4) + &D_8013A340;
        do {
            temp_v1 = *var_s0;
            if ((temp_v1 != NULL) && (*temp_v1 != 0)) {
                func_8004A7D0_overlay_001(M2C_FIELD(&D_8012BF38_overlay_001, s16 *, 0x5C), var_s1 & 0xFFFF, 0, 0x4000, temp_v1);
            }
            var_s0 += 4;
            var_s3 += 1;
            var_s1 += 0x11;
        } while (var_s3 < 0xFU);
    }
    temp_s2_2 = temp_s2 + 0x28;
    do { func_800478E8_overlay_001(temp_s2_2, 0x64, 0x3C); } while (0);
    temp_s2_3 = temp_s2_2 + 0x28;
    M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204) = func_800439B8_overlay_001(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204), temp_s2_2, 0, 0);
    if (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 0x13) == temp_s4) {
        do { func_800479EC_overlay_001(temp_s2_3, 0x2A, 0xE); } while (0);
        func_800478DC_overlay_001(temp_s2_3, 0x38, 0xC);
        func_800478E8_overlay_001(temp_s2_3, 0x118, 0x6E);
        M2C_FIELD(temp_s2_3, s16 *, 0xA) = 0;
        if ((M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 2) == 1) || (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 2) == 0xE)) {
            var_a1 = __repair_constant;
            var_a2 = __repair_constant;
            var_a3 = __repair_constant;
        } else {
            var_a1 = 0x30;
            var_a2 = 0x30;
            var_a3 = 0x30;
        }
    } else {
        do { func_800479EC_overlay_001(temp_s2_3, 0xC, 0xD); } while (0);
        do { func_800478DC_overlay_001(temp_s2_3, 0x2A, 0xC); } while (0);
        func_800478E8_overlay_001(temp_s2_3, (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 0x29) * 3) + 0x11A, 0x6E);
        var_a1 = __repair_constant;
        var_a2 = __repair_constant;
        var_a3 = __repair_constant;
        M2C_FIELD(temp_s2_3, s16 *, 0xA) = 0x40;
    }
    func_8004789C_overlay_001(temp_s2_3, var_a1, var_a2, var_a3);
    if (((u8) M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 2) < 2U) || ((u32) (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 2) - 0xD) < 2U)) {
        M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204) = func_800439B8_overlay_001(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204), temp_s2_3, 0, 0);
    }
    temp_s2_2 = temp_s2_3 + 0x28;
    func_8004789C_overlay_001(temp_s2_2, 0x80, 0x80, 0x80);
    func_800478E8_overlay_001(temp_s2_2, (0xC - (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 0x29) * 3)) & 0xFFFF, 0x6E);
    if ((M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 2) == 0) && (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 0x13) != 0)) {
        M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204) = func_800439B8_overlay_001(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204), temp_s2_2, 0, 0);
    }
    if ((M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 2) == 0xD) && (M2C_FIELD(&D_8012BF38_overlay_001, u8 *, 0x13) != 0)) {
        M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204) = func_800439B8_overlay_001(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18204), temp_s2_2, 0, 0);
    }
}
