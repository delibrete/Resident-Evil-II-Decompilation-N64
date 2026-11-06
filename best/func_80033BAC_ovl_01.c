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

M2C_UNK func_800411E8_overlay_001(s32 *, M2C_UNK *); /* extern */
M2C_UNK func_80041350_overlay_001(s32, s32 *);      /* extern */
M2C_UNK func_80041484_overlay_001(s32, s32 *);      /* extern */
M2C_UNK func_800415B8_overlay_001(s32, s32 *);      /* extern */
void *func_80042B24_overlay_001(s32 *);             /* extern */
s32 func_80083D5C_overlay_001(s32 *, s32, s32);     /* extern */
extern M2C_UNK D_800C7650_overlay_001;
extern M2C_UNK D_800DFBB4_overlay_001;
extern M2C_UNK D_800E8FC8_overlay_001;
extern s32 D_800EB234_overlay_001;
extern s32 D_800EB238_overlay_001;
extern s32 D_800EB23C_overlay_001;
extern M2C_UNK D_800EB900_overlay_001;
extern M2C_UNK D_80136D30;
extern s16 D_801379B0;

void func_80033BAC_ovl_01(void) {
    union {
        unsigned char bytes[144];
        struct { unsigned char pad[16]; s32 value; } view_sp10;
        struct { unsigned char pad[20]; s32 value; } view_sp14;
        struct { unsigned char pad[24]; s32 value; } view_sp18;
        struct { unsigned char pad[28]; s32 value; } view_sp1C;
        struct { unsigned char pad[32]; s32 value; } view_sp20;
        struct { unsigned char pad[36]; s32 value; } view_sp24;
        struct { unsigned char pad[40]; s32 value; } view_sp28;
        struct { unsigned char pad[44]; s32 value; } view_sp2C;
        struct { unsigned char pad[48]; s32 value; } view_sp30;
        struct { unsigned char pad[80]; s32 value; } view_sp50;
        struct { unsigned char pad[84]; s32 value; } view_sp54;
        struct { unsigned char pad[88]; s32 value; } view_sp58;
        struct { unsigned char pad[92]; s32 value; } view_sp5C;
        struct { unsigned char pad[96]; s32 value; } view_sp60;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
             
             
             
    M2C_UNK *var_s4;
    s16 *var_s1;
    s16 *var_s3;
    s16 temp_v1_11;
    s32 *temp_a0_2;
    
    s32 *temp_a2;
    s32 *temp_t0;
    s32 *temp_v1;
    s32 *temp_v1_15;
    s32 *temp_v1_16;
    s32 *temp_v1_17;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 *temp_v1_4;
    s32 *temp_v1_5;
    s32 *temp_v1_6;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *temp_v1_9;
    s32 *var_v1_2;
    s32 temp_a0_7;
    s32 temp_a2_2;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0_2;
    u32 temp_a0;
    u32 temp_a0_4;
    u32 temp_a0_5;
    u32 temp_a0_6;
    u32 var_a1;
    u32 var_v1;
    u8 temp_v1_10;
    u8 temp_v1_12;
    u8 temp_v1_13;
    u8 temp_v1_14;
    void *temp_v0;
    void *var_s0;

    if (!(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x19A80) & 0x80000) || (M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x19A3C) & 0x100)) {
        var_s4 = &D_80136D30;
        var_s3 = &D_801379B0;
        temp_v1 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        m2c_initial_frame.view_sp60.value = M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x18290);
        M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
        M2C_FIELD(temp_v1, s32 *, 4) = 0;
        temp_v0 = func_80042B24_overlay_001(M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204));
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (temp_v0 + 8);
        M2C_FIELD(temp_v0, s32 *, 0) = 0xD9FDFFFF;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        temp_v1_2 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE2001D00;
        M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
        temp_v1_3 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_3, s32 *, 0) = 0xD7000002;
        M2C_FIELD(temp_v1_3, s32 *, 4) = 0x80008000;
        temp_v1_4 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_4, s32 *, 0) = 0xE200001C;
        M2C_FIELD(temp_v1_4, s32 *, 4) = 0x504A50;
        temp_v1_5 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xFC119623;
        M2C_FIELD(temp_v1_5, s32 *, 4) = 0xFF2FFFFF;
        temp_v1_6 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_6, s32 *, 0) = 0xE3001001;
        M2C_FIELD(temp_v1_6, s32 *, 4) = 0;
        temp_v1_7 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_7, s32 *, 0) = 0xFD900000;
        M2C_FIELD(temp_v1_7, s32 *, 4) = (s32) M2C_FIELD(&D_800EB900_overlay_001, s32 *, 0x14);
        temp_v1_8 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_8, s32 *, 0) = 0xF5900000;
        M2C_FIELD(temp_v1_8, s32 *, 4) = 0x07080200;
        temp_v1_9 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_v1_9, s32 *, 0) = 0xE6000000;
        M2C_FIELD(temp_v1_9, s32 *, 4) = 0;
        temp_t0 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        var_s6 = 0x32;
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (temp_t0 + 8);
        M2C_FIELD(temp_t0, s32 *, 0) = 0xF3000000;
        temp_a0 = (u32) M2C_FIELD(&D_800EB900_overlay_001, u32 *, 4) >> 3;
        var_a1 = 0x800;
        if (temp_a0 != 0) {
            var_a1 = temp_a0 + 0x7FF;
        }
        var_v1 = ((u32) ((M2C_FIELD(&D_800EB900_overlay_001, u32 *, 4) * M2C_FIELD(&D_800EB900_overlay_001, s32 *, 8)) + 1) >> 1) - 1;
        if (var_v1 >= 0x800U) {
            var_v1 = 0x7FF;
        }
        if (temp_a0 != 0) {
            var_v0 = (var_a1 / temp_a0) & 0xFFF;
        } else {
            var_v0 = var_a1 & 0xFFF;
        }
        M2C_FIELD(temp_t0, s32 *, 4) = (s32) (((var_v1 & 0xFFF) << 0xC) | 0x07000000 | var_v0);
        var_s0 = &D_800DFBB4_overlay_001 + 0x18;
        temp_a0_2 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_a0_2, s32 *, 0) = 0xE7000000;
        M2C_FIELD(temp_a0_2, s32 *, 4) = 0;
        temp_a2 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_a2, s32 *, 0) = ((((u32) (M2C_FIELD(&D_800EB900_overlay_001, u32 *, 4) + 7) >> 3) & 0x1FF) << 9) | 0xF5880000;
        M2C_FIELD(temp_a2, s32 *, 4) = 0x80200;
        var_s1 = &D_801379B0 + 0x3C;
        temp_a0_2 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
        M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
        M2C_FIELD(temp_a0_2, s32 *, 0) = 0xF2000000;
        M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) (((((M2C_FIELD(&D_800EB900_overlay_001, u32 *, 4) - 1) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(&D_800EB900_overlay_001, s32 *, 8) - 1) * 4) & 0xFFF));
        do {
            temp_v1_10 = M2C_FIELD(var_s0, u8 *, -0xA);
            if (!(temp_v1_10 & 4) || (temp_v1_10 & 8)) {
                var_s4 += 0x40;
                var_s1 += 0x40;
                var_s3 += 0x40;
                var_s0 += 0x68;
            } else {
                m2c_initial_frame.view_sp10.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 0);
                m2c_initial_frame.view_sp14.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 4);
                m2c_initial_frame.view_sp18.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 8);
                m2c_initial_frame.view_sp1C.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 0xC);
                m2c_initial_frame.view_sp20.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 0x10);
                m2c_initial_frame.view_sp24.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 0x14);
                m2c_initial_frame.view_sp28.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 0x18);
                m2c_initial_frame.view_sp2C.value = M2C_FIELD(&D_800E8FC8_overlay_001, s32 *, 0x1C);
                func_80041350_overlay_001(D_800EB234_overlay_001, &m2c_initial_frame.view_sp10.value);
                func_80041484_overlay_001(D_800EB238_overlay_001, &m2c_initial_frame.view_sp10.value);
                func_800415B8_overlay_001(D_800EB23C_overlay_001, &m2c_initial_frame.view_sp10.value);
                func_80041484_overlay_001((s32) M2C_FIELD(var_s0, s16 *, -8), &m2c_initial_frame.view_sp10.value);
                m2c_initial_frame.view_sp24.value = (s32) M2C_FIELD(var_s0, s16 *, -0x10);
                m2c_initial_frame.view_sp28.value = M2C_FIELD(var_s0, s16 *, -0xE) - 6;
                m2c_initial_frame.view_sp2C.value = (s32) M2C_FIELD(var_s0, s16 *, -0xC);
                temp_v0_2 = M2C_FIELD(var_s0, u16 *, -0x14);
                temp_v1_11 = -(s16) temp_v0_2;
                *var_s3 = temp_v1_11;
                M2C_FIELD(var_s1, u16 *, -0x2C) = temp_v0_2;
                M2C_FIELD(var_s1, u16 *, -0x1C) = temp_v0_2;
                M2C_FIELD(var_s1, s16 *, -0xC) = temp_v1_11;
                M2C_FIELD(var_s1, s16 *, -0x38) = (s16) -(s16) M2C_FIELD(var_s0, u16 *, -0x12);
                M2C_FIELD(var_s1, s16 *, -0x28) = (s16) -(s16) M2C_FIELD(var_s0, u16 *, -0x12);
                M2C_FIELD(var_s1, u16 *, -0x18) = (u16) M2C_FIELD(var_s0, u16 *, -0x12);
                M2C_FIELD(var_s1, u16 *, -8) = (u16) M2C_FIELD(var_s0, u16 *, -0x12);
                if (M2C_FIELD(var_s0, u8 *, 3) == 0) {
                    temp_v1_12 = M2C_FIELD(var_s0, u8 *, 0);
                    temp_a0_4 = temp_v1_12 & 0xFF;
                    if (temp_a0_4 >= 0xC1U) {
                        var_a2 = 0xFF - temp_v1_12;
                    } else {
                        var_a2 = 0x80 - temp_v1_12;
                        if (temp_a0_4 >= 0x81U) {
                            var_a2 = 0xC0 - temp_v1_12;
                        }
                    }
                    temp_v1_13 = M2C_FIELD(var_s0, u8 *, 1);
                    temp_a0_5 = temp_v1_13 & 0xFF;
                    if (temp_a0_5 >= 0xC1U) {
                        var_a1_2 = 0xFF - temp_v1_13;
                    } else {
                        var_a1_2 = 0x80 - temp_v1_13;
                        if (temp_a0_5 >= 0x81U) {
                            var_a1_2 = 0xC0 - temp_v1_13;
                        }
                    }
                    temp_v1_14 = M2C_FIELD(var_s0, u8 *, 2);
                    temp_a0_6 = temp_v1_14 & 0xFF;
                    if (temp_a0_6 >= 0xC1U) {
                        var_a0 = 0xFF - temp_v1_14;
                    } else {
                        var_a0 = 0x80 - temp_v1_14;
                        if (temp_a0_6 >= 0x81U) {
                            var_a0 = 0xC0 - temp_v1_14;
                        }
                    }
                } else {
                    var_a2 = 0xC8 - M2C_FIELD(var_s0, u8 *, 0);
                    var_a0 = 0xC8 - M2C_FIELD(var_s0, u8 *, 2);
                    var_a1_2 = 0xC8 - M2C_FIELD(var_s0, u8 *, 1);
                }
                temp_a0_7 = (var_a2 << 0x18) | ((var_a1_2 & 0xFF) << 0x10) | ((var_a0 & 0xFF) << 8);
                temp_a2_2 = temp_a0_7 | 0xFF;
                if (M2C_FIELD(var_s0, u8 *, 3) == 0) {
                    var_v1_2 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
                    M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
                    M2C_FIELD(var_v1_2, s32 *, 0) = 0xFA000000;
                    var_v0_2 = temp_a0_7 | 0x80;
                } else {
                    var_v1_2 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
                    M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
                    M2C_FIELD(var_v1_2, s32 *, 0) = 0xFA000000;
                    var_v0_2 = temp_a0_7 | M2C_FIELD(var_s0, u8 *, 0);
                }
                M2C_FIELD(var_v1_2, s32 *, 4) = var_v0_2;
                M2C_FIELD(var_s1, s32 *, -0x30) = temp_a2_2;
                M2C_FIELD(var_s1, s32 *, -0x20) = temp_a2_2;
                M2C_FIELD(var_s1, s32 *, -0x10) = temp_a2_2;
                M2C_FIELD(var_s1, s32 *, 0) = temp_a2_2;
                m2c_initial_frame.view_sp50.value = m2c_initial_frame.view_sp24.value;
                m2c_initial_frame.view_sp54.value = m2c_initial_frame.view_sp28.value;
                m2c_initial_frame.view_sp58.value = m2c_initial_frame.view_sp2C.value;
                m2c_initial_frame.view_sp5C.value = m2c_initial_frame.view_sp30.value;
                if (func_80083D5C_overlay_001(&m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp60.value, temp_a2_2) != 0) {
                    func_800411E8_overlay_001(&m2c_initial_frame.view_sp10.value, var_s4);
                    temp_v1_15 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
                    M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
                    M2C_FIELD(temp_v1_15, s32 *, 0) = 0xDA380003;
                    M2C_FIELD(temp_v1_15, M2C_UNK **, 4) = var_s4;
                    temp_v1_16 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
                    M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
                    M2C_FIELD(temp_v1_16, s32 *, 0) = 0x01004008;
                    M2C_FIELD(temp_v1_16, s16 **, 4) = var_s3;
                    temp_v1_17 = M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204);
                    M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) = (s32 *) (M2C_FIELD(&D_800C7650_overlay_001, s32 **, 0x18204) + 8);
                    M2C_FIELD(temp_v1_17, s32 *, 0) = 0x07000204;
                    M2C_FIELD(temp_v1_17, s32 *, 4) = 0x406;
                }
                var_s0 += 0x68;
                var_s4 += 0x40;
                var_s1 += 0x40;
                var_s3 += 0x40;
            }
            var_s6 -= 1;
        } while (var_s6 != 0);
    }
}
