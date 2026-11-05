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

s32 func_80032B8C_ovl_01();
u16 func_80032EA4_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80166978_overlay_017();
s32 func_801678B8_overlay_017();
extern u16 D_80167D72_overlay_017;

void func_801636BC_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x2DC);
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x3CU;
        M2C_FIELD(arg0, u16 *, 0x1F6) = func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_a2, s32 *, 0x28), M2C_FIELD(temp_a2, s32 *, 0x30), 0x40);
    }
    M2C_FIELD(arg0, u16 *, 0x66) += M2C_FIELD(arg0, u16 *, 0x1F6);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    func_801678B8_overlay_017(arg0);
    func_80166978_overlay_017(arg0, 1);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    M2C_FIELD(arg0, u16 *, 0x1E0) += D_80167D72_overlay_017;
    if ((temp_v0 << 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x1AC) & 1)) {
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x2B6));
    }
}
