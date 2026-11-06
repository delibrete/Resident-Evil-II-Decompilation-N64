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

M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, s16); /* extern */
s32 func_80032EA4_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s32, void *, M2C_UNK); /* extern */
M2C_UNK func_80040E88_ovl_01(u16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, u16 *, s16 *); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;

void func_80162238_ovl_19(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    union {
        unsigned char bytes[88];
        struct { unsigned char pad[16]; u16 value; } view_sp10;
        struct { unsigned char pad[18]; u16 value; } view_sp12;
        struct { unsigned char pad[20]; s16 value; } view_sp14;
        struct { unsigned char pad[24]; s16 value; } view_sp18;
        struct { unsigned char pad[28]; s16 value; } view_sp1C;
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp20;
    } m2c_initial_frame;

             
             
             
             
                 
    s16 temp_v0_6;
    s32 temp_s0_2;
    s32 var_v0;
    s8 temp_a0;
    u16 temp_v0;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    void *temp_s0;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x190U) && (M2C_FIELD(&D_800C7650, u16 *, 0x19A7A) & 6)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x03010100;
        M2C_FIELD(arg0, s8 *, 0x26E) = 0;
        M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        temp_s0 = arg0 + 0x14;
        func_800377B0_ovl_01(0x81FA0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, 0);
        func_800377B0_ovl_01(0x817D0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, 0);
        func_800377B0_ovl_01(0x817D0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, 0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x09000000);
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        func_80052C00_ovl_01(1, 0);
        func_80052C9C_ovl_01(5, 0x50, 0);
        return;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, u16 *, 0x1F6) = 0U;
        M2C_FIELD(arg0, u8 *, 0x206) = 0U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((func_80033634_ovl_01() & 0x1F) + 0x14);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1E0) - 0xA;
        M2C_FIELD(arg0, u16 *, 0x1E0) = temp_v0;
        if ((s16) temp_v0 < 0x1E) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0x1EU;
        }
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1E0) >= 0x79) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - 0x1E);
        }
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
        M2C_FIELD(arg0, u8 *, 0x206) = temp_v0_2;
        if ((s8) temp_v0_2 == -1) {
            temp_v0_3 = (func_80033634_ovl_01() & 0xF) + 0xA;
            M2C_FIELD(arg0, u8 *, 0x206) = temp_v0_3;
            M2C_FIELD(arg0, s8 *, 0x207) = (s8) (temp_v0_3 >> 1);
        }
        temp_a0 = (s8) M2C_FIELD(arg0, u8 *, 0x206);
        if (M2C_FIELD(arg0, s8 *, 0x207) < temp_a0) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) + (temp_a0 * 3));
        } else {
            M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - 0x14);
        }
        temp_s0_2 = func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x10);
        if (!(func_80033634_ovl_01() & 3)) {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650, s32 *, 0x19AB0), (s16) ((func_80033634_ovl_01() & 1) * -0x20));
        }
        var_v0 = temp_s0_2 << 0x10;
        if ((temp_s0_2 << 0x10) > 0) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1F6);
            temp_v0_4 = temp_v1_2 + 4;
            M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0_4;
            if ((s16) temp_v0_4 < -0x40) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_v1_2 + 0xC);
            }
            if ((s16) M2C_FIELD(arg0, u16 *, 0x1F6) < -0x80) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) + 0x10);
            }
            if ((s16) M2C_FIELD(arg0, u16 *, 0x1F6) < -0x100) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) + 0x10);
            }
            var_v0 = temp_s0_2 << 0x10;
        }
        if (var_v0 < 0) {
            temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x1F6);
            temp_v0_5 = temp_v1_3 - 4;
            M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0_5;
            if ((s16) temp_v0_5 >= -0x3F) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (temp_v1_3 - 0xC);
            }
            if ((s16) M2C_FIELD(arg0, u16 *, 0x1F6) >= 0x81) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) - 0x10);
            }
            if ((s16) M2C_FIELD(arg0, u16 *, 0x1F6) >= 0x101) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (M2C_FIELD(arg0, u16 *, 0x1F6) - 0x10);
            }
        }
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x1F6));
        m2c_initial_frame.view_sp10.value = 0;
        m2c_initial_frame.view_sp14.value = 0;
        m2c_initial_frame.view_sp12.value = M2C_FIELD(arg0, u16 *, 0x2B4);
        func_80040E88_ovl_01(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value);
        m2c_initial_frame.view_sp12.value = 0;
        m2c_initial_frame.view_sp14.value = 0;
        m2c_initial_frame.view_sp10.value = M2C_FIELD(arg0, u16 *, 0x1E0);
        do { func_8004279C_ovl_01(&m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp18.value); } while (0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + m2c_initial_frame.view_sp18.value);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + m2c_initial_frame.view_sp1C.value);
        temp_v0_6 = (u16) M2C_FIELD(arg0, s16 *, 0x1F4) - 1;
        if ((M2C_FIELD(arg0, s16 *, 0x1F4) == 0) || (M2C_FIELD(arg0, s16 *, 0x1F4) = temp_v0_6, ((temp_v0_6 << 0x10) == 0))) {
            if (func_80033634_ovl_01() & 1) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01050000;
                if (func_80033634_ovl_01() & 1) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01070000;
                }
            }
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((func_80033634_ovl_01() & 0x1F) + 0x14);
        }
        return;
    }
}
