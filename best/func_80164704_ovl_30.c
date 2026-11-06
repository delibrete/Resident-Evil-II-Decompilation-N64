/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

extern int D_800E10F8;
extern int D_800E1100;
s32 func_800334F8_ovl_01();
s32 func_80040BE4_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_80164704_ovl_30(void *arg0, s32 arg1, s32 arg2) {
    s16 var_v1;
s16 __repair_result_var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000F00;
        func_800334F8_ovl_01(arg0, arg1, arg2, NULL);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        temp_v0 = 0x1388 - D_800E10F8;
        temp_v0_2 = -0x40D8 - D_800E1100;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) >> 4);
        M2C_FIELD(arg0, u16 *, 0x1AA) |= 0x4400;
    }
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    __repair_result_var_v1 = M2C_FIELD(arg0, s16 *, 0x1E0);
    if (__repair_result_var_v1 < 0) {
        var_v1 = -var_v1;
    }
    temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1F4) - var_v1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_3;
    if (temp_v0_3 & 0x8000) {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
    }
}
