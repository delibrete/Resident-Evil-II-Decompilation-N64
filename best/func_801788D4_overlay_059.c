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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80040BE4_ovl_01(s32);                  /* extern */
M2C_UNK func_80040E88_ovl_01(s16 *, M2C_UNK *);     /* extern */
M2C_UNK func_80042854_ovl_01(M2C_UNK *, s16 *, s32 *); /* extern */
s32 func_80066804_ovl_01(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_80178D9C_overlay_059;

void func_801788D4_overlay_059(void *arg0, void *arg1, s16 arg2, s32 arg3) {
    union {
        unsigned char bytes[104];
        struct { unsigned char pad[16]; s16 value; } view_sp10;
        struct { unsigned char pad[18]; s16 value; } view_sp12;
        struct { unsigned char pad[20]; s16 value; } view_sp14;
        struct { unsigned char pad[24]; M2C_UNK value; } view_sp18;
        struct { unsigned char pad[56]; s32 value; } view_sp38;
        struct { unsigned char pad[64]; s32 value; } view_sp40;
        struct { unsigned char pad[58]; u16 value; } view_unksp3A;
        struct { unsigned char pad[66]; u16 value; } view_unksp42;
    } m2c_initial_frame;

             
             
             
                 
             
             
    s16 temp_v0;
    s16 var_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v1;

    m2c_initial_frame.view_sp12.value = func_80032D44_ovl_01(M2C_FIELD(&D_800C7650, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650, s16 *, 0x19AB2), M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32));
    m2c_initial_frame.view_sp10.value = 0;
    m2c_initial_frame.view_sp14.value = 0;
    func_80040E88_ovl_01(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp18.value);
    m2c_initial_frame.view_sp10.value = arg2;
    m2c_initial_frame.view_sp12.value = 0;
    func_80042854_ovl_01(&m2c_initial_frame.view_sp18.value, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp38.value);
    m2c_initial_frame.view_sp38.value += M2C_FIELD(&D_800C7650, s32 *, 0x19AA8);
    m2c_initial_frame.view_sp40.value += M2C_FIELD(&D_800C7650, s32 *, 0x19AB0);
    if (arg3 & 0xFFFF) {
        var_s0 = 0;
        if (func_80066804_ovl_01(&m2c_initial_frame.view_sp38.value, 0x578, 1, 0x500) != 0) {
loop_3:
            temp_v1 = (char *)(((s32) (var_s0 << 0x10) >> 0xE)); temp_v1 += (s32)(&D_80178D9C_overlay_059);
            m2c_initial_frame.view_sp38.value = M2C_FIELD(&D_800C7650, s32 *, 0x19AA8) + M2C_FIELD(temp_v1, s16 *, 0);
            m2c_initial_frame.view_sp40.value = M2C_FIELD(&D_800C7650, s32 *, 0x19AB0) + M2C_FIELD(temp_v1, s16 *, 2);
            temp_v0 = var_s0 + 1;
            if (func_80066804_ovl_01(&m2c_initial_frame.view_sp38.value, 0x578, 1, 0x500) != 0) {
                var_s0 = temp_v0;
                if (temp_v0 < 9) {
                    goto loop_3;
                }
            }
        }
    }
    temp_v0_2 = m2c_initial_frame.view_sp38.value - M2C_FIELD(arg0, s32 *, 0x28);
    temp_v0_3 = m2c_initial_frame.view_sp40.value - M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg1, u16 *, 0) = m2c_initial_frame.view_unksp3A.value;
    M2C_FIELD(arg1, u16 *, 4) = m2c_initial_frame.view_unksp42.value;
    func_80040BE4_ovl_01((temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3));
}
