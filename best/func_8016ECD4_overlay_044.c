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

s32 D_8006A8B0(u8, void *);                         /* extern */
s16 func_80032D44_ovl_01(M2C_UNK, M2C_UNK, s16, s16); /* extern */
M2C_UNK func_80066804_ovl_01(s32 *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_8006A45C_ovl_01(s32 *, void *);            /* extern */
M2C_UNK func_8008386C_ovl_01(s16, s32, M2C_UNK, s16 *); /* extern */
extern void *D_800E1008;

s32 func_8016ECD4_overlay_044(void *arg0, M2C_UNK arg1) {
    union {
        unsigned char bytes[64];
        struct { unsigned char pad[16]; s16 value; } view_sp10;
        struct { unsigned char pad[18]; s16 value; } view_sp12;
        struct { unsigned char pad[20]; s16 value; } view_sp14;
        struct { unsigned char pad[24]; s32 value; } view_sp18;
        struct { unsigned char pad[28]; s32 value; } view_sp1C;
        struct { unsigned char pad[32]; s32 value; } view_sp20;
    } m2c_initial_frame;

             
             
             
             
    s32 temp_a0;
    s32 temp_s2;
    s32 var_s4;
    void **var_s0;
    void *temp_a1;
    void *temp_a1_2;

    func_8008386C_ovl_01(M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x70), arg1, &m2c_initial_frame.view_sp10.value);
    M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((s32) ((func_80032D44_ovl_01(0, 0, m2c_initial_frame.view_sp10.value, m2c_initial_frame.view_sp14.value) + 0x100) & 0xC00) >> 0xA);
    m2c_initial_frame.view_sp18.value = m2c_initial_frame.view_sp10.value + M2C_FIELD(arg0, s32 *, 0x28);
    var_s4 = 0x80000000;
    m2c_initial_frame.view_sp1C.value = (s32) m2c_initial_frame.view_sp12.value;
    m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp14.value + M2C_FIELD(arg0, s32 *, 0x30);
    temp_s2 = 1 << (M2C_FIELD(arg0, s32 *, 0x2C) / -1800);
    func_80066804_ovl_01(&m2c_initial_frame.view_sp18.value, 0xA, temp_s2, 0x200);
    var_s0 = &D_800E1008;
    if (D_800E1008 == NULL) {
        return 0x40000000;
    }
    do { func_80066804_ovl_01(&m2c_initial_frame.view_sp18.value, 0xA, temp_s2, 0x600); } while (0);
loop_3:
    temp_a1 = *var_s0;
    if (!(M2C_FIELD(temp_a1, u16 *, 8) & 0x200)) {
        var_s4 |= 0x20000000;
        goto block_12;
    }
    temp_a1_2 = *var_s0;
    temp_a0 = func_8006A45C_ovl_01(&m2c_initial_frame.view_sp18.value, temp_a1);
    if (temp_a1_2 != M2C_FIELD(arg0, void **, 0x2BC)) {
        M2C_FIELD(arg0, void **, 0x2BC) = temp_a1_2;
        if ((temp_a0 ^ M2C_FIELD(arg0, u8 *, 0x207)) & 1) {
            M2C_FIELD(arg0, void **, 0x2BC) = (void *) *var_s0;
            return temp_a0 & 0xFF;
        }
block_12:
        var_s0 += 4;
        goto block_13;
    }
    if (M2C_FIELD(arg0, u8 *, 0x207) & 1) {
        var_s0 += 4;
        M2C_FIELD(arg0, s32 *, 0x30) = D_8006A8B0(M2C_FIELD(arg0, u8 *, 0x207), temp_a1_2);
    } else {
        var_s0 += 4;
        M2C_FIELD(arg0, s32 *, 0x28) = D_8006A8B0(M2C_FIELD(arg0, u8 *, 0x207), temp_a1_2);
    }
block_13:
    if (*var_s0 == NULL) {
        return var_s4;
    }
    goto loop_3;
}
