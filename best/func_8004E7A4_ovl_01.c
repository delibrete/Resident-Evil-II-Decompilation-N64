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

s32 func_8004F7A4_overlay_001(s32 *, s32 *, u16, M2C_UNK); /* extern */
s32 func_8004F844_overlay_001(s32 *, void *);       /* extern */
s32 func_80066804_overlay_001(s32 *, M2C_UNK, s32, M2C_UNK); /* extern */
s16 func_80069F4C_overlay_001(s32 *, u16, s32, M2C_UNK); /* extern */
M2C_UNK func_80083800_overlay_001(s16, u16 *, u16 *); /* extern */
extern M2C_UNK D_800C7650_overlay_001;
extern s32 D_800E1898_overlay_001;
extern M2C_UNK D_8010BA18_overlay_001;
extern M2C_UNK D_8010BA58_overlay_001;
extern s32 D_801126AC_overlay_001;

s32 func_8004E7A4_ovl_01(void *arg0) {
    union {
        unsigned char bytes[64];
        struct { unsigned char pad[16]; u16 value; } view_sp10;
        struct { unsigned char pad[20]; s16 value; } view_sp14;
        struct { unsigned char pad[24]; s32 value; } view_sp18;
        struct { unsigned char pad[28]; s32 value; } view_sp1C;
        struct { unsigned char pad[32]; s32 value; } view_sp20;
        struct { unsigned char pad[30]; u16 value; } view_unksp1E;
    } m2c_initial_frame;

             
             
             
             
             
    M2C_UNK var_a3;
    M2C_UNK var_a3_2;
    s16 temp_s1;
    s32 *var_s0;
    s32 temp_v0;
    
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;
    u8 var_v0_2;

    temp_s1 = (M2C_FIELD(arg0, u16 *, 0x66) + 0x200) & 0xFC00;
    if ((u8) M2C_FIELD(arg0, u8 *, 8) < 0x10U) {
        var_v1 = M2C_FIELD(arg0, u8 *, 8) + 0x10;
    } else {
        var_v1 = M2C_FIELD(arg0, u8 *, 8) - 0x40;
    }
    m2c_initial_frame.view_sp10.value = *((var_v1 * 2) + &D_8010BA18_overlay_001);
    m2c_initial_frame.view_sp14.value = 0;
    do { func_80083800_overlay_001(temp_s1, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value); } while (0);
    m2c_initial_frame.view_sp18.value = (s16) m2c_initial_frame.view_sp10.value + M2C_FIELD(arg0, s32 *, 0x28);
    m2c_initial_frame.view_sp1C.value = M2C_FIELD(arg0, s32 *, 0x2C) - 0x708;
    m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp14.value + M2C_FIELD(arg0, s32 *, 0x30);
    temp_v1 = M2C_FIELD(arg0, u8 *, 8);
    if ((temp_v1 == 0xF) || (temp_v1 == 0x45) || (temp_v1 == 0x4F)) {
        var_a3 = 0x800;
    } else {
        var_a3 = 0x1000;
    }
    if ((func_80066804_overlay_001(&m2c_initial_frame.view_sp18.value, 0, 1 << M2C_FIELD(arg0, u8 *, 0x1A2), var_a3) & 2) && ((u8) M2C_FIELD(arg0, u8 *, 0x1A2) < 0x1FU) && (m2c_initial_frame.view_sp1C.value >= func_80069F4C_overlay_001(&m2c_initial_frame.view_sp18.value, M2C_FIELD(arg0, u16 *, 0x136), M2C_FIELD(arg0, u8 *, 9) << 8, 0)) && !(D_801126AC_overlay_001 & 1) && (func_8004F844_overlay_001(&m2c_initial_frame.view_sp18.value, arg0) == 0)) {
        if (!(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x19A5C) & 0x10000000) || (var_v0 = 8, (arg0 != M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x19D3C)))) {
            var_v0 = 0x18;
            if (M2C_FIELD(arg0, u8 *, 5) == 4) {
                var_v0 = 0x16;
            }
        }
        M2C_FIELD(arg0, u8 *, 5) = var_v0;
        M2C_FIELD(arg0, s8 *, 6) = 0;
        goto block_43;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 8) < 0x10U) {
        var_v1_2 = M2C_FIELD(arg0, u8 *, 8) + 0x10;
    } else {
        var_v1_2 = M2C_FIELD(arg0, u8 *, 8) - 0x40;
    }
    m2c_initial_frame.view_sp10.value = *((var_v1_2 * 2) + &D_8010BA58_overlay_001);
    m2c_initial_frame.view_sp14.value = 0;
    do { func_80083800_overlay_001(temp_s1, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value); } while (0);
    m2c_initial_frame.view_sp18.value = (s16) m2c_initial_frame.view_sp10.value + M2C_FIELD(arg0, s32 *, 0x28);
    m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp14.value + M2C_FIELD(arg0, s32 *, 0x30);
    m2c_initial_frame.view_sp1C.value = M2C_FIELD(arg0, s32 *, 0x2C);
    m2c_initial_frame.view_sp1C.value = func_80069F4C_overlay_001(&m2c_initial_frame.view_sp18.value, M2C_FIELD(arg0, u16 *, 0x136), M2C_FIELD(arg0, u8 *, 9) << 8, 0);
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 8);
    if ((temp_v1_2 == 0xF) || (temp_v1_2 == 0x45) || (temp_v1_2 == 0x4F)) {
        var_a3_2 = 0x800;
    } else {
        var_a3_2 = 0x1000;
    }
    temp_v0 = func_80066804_overlay_001(&m2c_initial_frame.view_sp18.value, 0, 1 << M2C_FIELD(arg0, u8 *, 0x1A2), var_a3_2) & 4;
    if ((M2C_FIELD(arg0, s32 *, 0x2C) < m2c_initial_frame.view_sp1C.value) && (temp_v0 != 0)) {
        var_s0 = &D_800E1898_overlay_001;
        if ((u32) &D_800E1898_overlay_001 < (u32) M2C_FIELD(&D_800C7650_overlay_001, u32 *, 0x20F48)) {
loop_30:
            temp_v0 = *var_s0;
            if ((temp_v0 & 1) && !(temp_v0 & 2) && (var_s0 != M2C_FIELD(arg0, s32 *, 0x280))) {
                if (func_8004F7A4_overlay_001(&m2c_initial_frame.view_sp18.value, var_s0, M2C_FIELD(arg0, u16 *, 0x136), 1) == 0) {
                    m2c_initial_frame.view_sp1C.value = M2C_FIELD(arg0, s32 *, 0x2C);
                    if (func_8004F7A4_overlay_001(&m2c_initial_frame.view_sp18.value, var_s0, M2C_FIELD(arg0, u16 *, 0x136), 1) == 0) {
                        m2c_initial_frame.view_sp1C.value = (s32) (s16) m2c_initial_frame.view_unksp1E.value;
                        goto block_36;
                    }
                }
                goto block_44;
            }
block_36:
            var_s0 += 0x368;
            if ((u32) var_s0 >= (u32) M2C_FIELD(&D_800C7650_overlay_001, u32 *, 0x20F48)) {
                goto block_37;
            }
            goto loop_30;
        }
block_37:
        if (func_8004F844_overlay_001(&m2c_initial_frame.view_sp18.value, arg0) == 0) {
            if (!(M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x19A5C) & 0x10000000) || (var_v0_2 = 8, (arg0 != M2C_FIELD(&D_800C7650_overlay_001, s32 *, 0x19D3C)))) {
                var_v0_2 = 0x19;
                if (M2C_FIELD(arg0, u8 *, 5) == 4) {
                    var_v0_2 = 0x17;
                }
            }
            M2C_FIELD(arg0, u8 *, 5) = var_v0_2;
            M2C_FIELD(arg0, s8 *, 6) = 2;
block_43:
            M2C_FIELD(arg0, s8 *, 7) = 0;
            M2C_FIELD(arg0, u16 *, 0x2B0) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
            return 1;
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
        return 0;
    }
block_44:
    return 0;
}
