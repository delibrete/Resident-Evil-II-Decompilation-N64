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

s16 func_80040BE4_ovl_01(s32);                      /* extern */
M2C_UNK func_80040E88_ovl_01(s32, M2C_UNK *);       /* extern */
M2C_UNK func_8004251C_ovl_01(M2C_UNK *, s32, M2C_UNK *); /* extern */

void func_80166978_ovl_17(void *arg0, s32 arg1) {
    union {
        unsigned char bytes[72];
        struct { unsigned char pad[16]; M2C_UNK value; } view_sp10;
        struct { unsigned char pad[38]; u16 value; } view_sp26;
        struct { unsigned char pad[46]; u16 value; } view_sp2E;
    } m2c_initial_frame;

                 
    M2C_UNK *temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s2;
    void *temp_s2_2;

    temp_s0 = arg0 + 0x14;
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
    func_80040E88_ovl_01(arg0 + 0x64, temp_s0);
    func_8004251C_ovl_01(temp_s0, temp_s2 + 8, &m2c_initial_frame.view_sp10.value);
    temp_s2_2 = (char *)(temp_s2); temp_s2_2 += (s32)((((arg1 & 0xFF) * 0x178 * 8) + 0x5E0));
    if (((s32) M2C_FIELD(arg0, u8 *, 0x2BC) >> ((arg1 * 4) & 0xFF)) & 1) {
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
        return;
    }
    func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, temp_s2_2 - 0x170, &m2c_initial_frame.view_sp10.value);
    func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, temp_s2_2 + 8, &m2c_initial_frame.view_sp10.value);
    temp_v0 = m2c_initial_frame.view_sp26.value - M2C_FIELD(temp_s2_2, u16 *, 0x4E);
    temp_v0_2 = m2c_initial_frame.view_sp2E.value - M2C_FIELD(temp_s2_2, u16 *, 0x56);
    M2C_FIELD(arg0, s16 *, 0x1E0) = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
}
