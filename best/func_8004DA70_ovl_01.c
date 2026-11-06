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

M2C_UNK func_80040D24_overlay_001(s32, M2C_UNK *);  /* extern */
M2C_UNK func_80040E88_overlay_001(u16 *, M2C_UNK *); /* extern */
M2C_UNK func_80042854_overlay_001(M2C_UNK *, u16 *, s32 *); /* extern */

void func_8004DA70_ovl_01(void *arg0, void *arg1) {
    union {
        unsigned char bytes[104];
        struct { unsigned char pad[16]; u16 value; } view_sp10;
        struct { unsigned char pad[18]; u16 value; } view_sp12;
        struct { unsigned char pad[20]; u16 value; } view_sp14;
        struct { unsigned char pad[24]; s16 value; } view_sp18;
        struct { unsigned char pad[26]; u16 value; } view_sp1A;
        struct { unsigned char pad[28]; s32 value; } view_sp1C;
        struct { unsigned char pad[32]; s32 value; } view_sp20;
        struct { unsigned char pad[34]; u16 value; } view_sp22;
        struct { unsigned char pad[40]; M2C_UNK value; } view_sp28;
    } m2c_initial_frame;

             
             
             
             
                 
    s32 *var_s4;
    s32 var_s1;
    void *var_s0;

    var_s1 = M2C_FIELD(arg0, s32 *, 0x284);
    var_s4 = arg0 + 0x120;
    if (var_s1 != 0) {
        var_s0 = (char *)(arg0); var_s0 += (s32)(0x128);
        do {
            m2c_initial_frame.view_sp14.value = 0;
            m2c_initial_frame.view_sp10.value = 0;
            m2c_initial_frame.view_sp12.value = M2C_FIELD(arg0, u16 *, 0x66);
            do { func_80040E88_overlay_001(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp28.value); } while (0);
            if (M2C_FIELD(arg0, s32 *, 0) & 0x02000000) {
                func_80040D24_overlay_001(M2C_FIELD(arg0, s32 *, 0x70), &m2c_initial_frame.view_sp28.value);
            }
            m2c_initial_frame.view_sp10.value = M2C_FIELD(var_s0, u16 *, 8);
            m2c_initial_frame.view_sp12.value = M2C_FIELD(var_s0, u16 *, 0xC);
            m2c_initial_frame.view_sp14.value = M2C_FIELD(var_s0, u16 *, 0xA);
            func_80042854_overlay_001(&m2c_initial_frame.view_sp28.value, &m2c_initial_frame.view_sp10.value, (s32 *) &m2c_initial_frame.view_sp18.value);
            M2C_FIELD(var_s0, u16 *, 0x14) = m2c_initial_frame.view_sp1A.value;
            M2C_FIELD(var_s0, u16 *, 0x16) = m2c_initial_frame.view_sp22.value;
            *var_s4 = M2C_FIELD(arg1, s32 *, 0) + (s32) m2c_initial_frame.view_sp18.value;
            var_s1 -= 1;
            M2C_FIELD(var_s0, s32 *, -4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + m2c_initial_frame.view_sp1C.value);
            var_s4 += 0x20;
            M2C_FIELD(var_s0, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 8) + (s32) m2c_initial_frame.view_sp20.value);
            var_s0 += 0x20;
        } while (var_s1 != 0);
    }
}
