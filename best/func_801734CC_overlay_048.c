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

s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
extern s8 D_80174ADA_overlay_048;
extern s8 D_80174ADB_overlay_048;

void func_801734CC_overlay_048(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u8 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x2BE) |= 0x82;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a1 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x06000700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, u8 *, 0x25C) &= 0xFD;
        M2C_FIELD(arg0, u16 *, 0x66) += M2C_FIELD(temp_a1, u16 *, 0x5A);
        M2C_FIELD(temp_a1, u16 *, 0x5A) = 0U;
        M2C_FIELD(arg0, u16 *, 0x2BA) |= 0x1000;
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            temp_a1 = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(arg0, u8 *, 0x2BE) &= 0x7F;
            temp_a1_2 = temp_a1 + 0x2F0;
            M2C_FIELD(temp_a1, s32 *, 0x2F0) &= ~0xC00;
            M2C_FIELD(temp_a1_2, s32 *, 0x178) &= ~0xC00;
            M2C_FIELD(arg0, u16 *, 0x2BA) &= 0xEFFF;
        }
        func_80032B8C_ovl_01(arg0, 0);
        break;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x1E9) & 0xF)) {
        temp_v0 = func_80033634_ovl_01();
        D_80174ADA_overlay_048 = 3 - ((temp_v0 & 0xFF) % 6);
        D_80174ADB_overlay_048 = 0xF - ((func_80033634_ovl_01((temp_v0 & 0xFF) / 6, &D_80174ADA_overlay_048) & 0xFF) % 30);
    }
}
