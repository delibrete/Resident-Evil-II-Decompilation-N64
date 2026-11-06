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

s32 func_80052C9C_ovl_01();
s32 func_80052D40_ovl_01();
extern char D_800C7650[];

void func_80173910_overlay_061(void *arg0) {
    u8 temp_v0;

    M2C_FIELD(*(void * *)(D_800C7650 + 0x19D40), u8 *, 0x2BF) &= ~(2 << M2C_FIELD(arg0, u8 *, 0x2B4));
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2BE);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x2BE) = (u8) (temp_v0 - 1);
        M2C_FIELD(*(void * *)(D_800C7650 + 0x19D40), u8 *, 0x2BF) |= (2 << M2C_FIELD(arg0, u8 *, 0x2B4));
        do { func_80052C9C_ovl_01(3, 0x82, 0, *(void * *)(D_800C7650 + 0x19D40)); } while (0);
        func_80052D40_ovl_01(0x19, 0x82, 0, 3);
    }
}
