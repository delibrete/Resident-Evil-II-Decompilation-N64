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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_800334F8_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650_ovl_01[];

void func_80163268_ovl_26(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 6) = 1;
    M2C_FIELD(arg0, s8 *, 0x2B9) = 0xF;
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 2) << 0x18) + 0x3F00);
    M2C_FIELD(arg0, u8 *, 0x25C) &= 0xFD;
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    *(u16 *)(D_800C7650_ovl_01 + 0x19A78) = (u16) (*(u16 *)(D_800C7650_ovl_01 + 0x19A78) | 0x40);
    M2C_FIELD(arg0, s8 *, 0x206) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BF) = 0x5A;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
}
