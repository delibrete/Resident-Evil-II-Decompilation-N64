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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80032B8C_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern s16 D_80178E2E_overlay_059;

void func_80170B4C_overlay_059(void *arg0, s32 arg1, s32 arg2) {
    s8 temp_a3;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, u16 *, 0x2B6) |= 0x40;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x05000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((func_80033634_ovl_01() & 0xF) + 1);
        D_80178E2E_overlay_059 = 0;
        func_80077D48_ovl_01(0, arg0);
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2);
        if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0x15) {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 4);
        }
        if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0x1F) {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 8);
        }
        if (M2C_FIELD(arg0, u16 *, 0x2B6) & 0x20) {
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 8);
            temp_a3 = M2C_FIELD(arg0, s8 *, 0x206);
            if (temp_a3 != 0) {
                func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), temp_a3);
            }
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0xDACU) && !(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x20)) {
            temp_v0 = M2C_FIELD(arg0, u8 *, 0x2D3) + 1;
            M2C_FIELD(arg0, u8 *, 0x2D3) = temp_v0;
            if (((u32) (temp_v0 & 0xFF) >= 0x97U) && ((u8) M2C_FIELD(arg0, u8 *, 0x2D6) >= 2U)) {
                M2C_FIELD(arg0, s32 *, 4) = 0x010B0000;
                M2C_FIELD(arg0, s8 *, 0x2C2) = 4;
                M2C_FIELD(arg0, u8 *, 0x2D3) = 0U;
            }
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            func_80077D48_ovl_01(0xB, arg0);
        }
        func_80032B8C_ovl_01(arg0, 0);
        return;
    }
}
