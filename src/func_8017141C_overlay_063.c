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


extern int (*D_801732B8_overlay_063[])();
s32 func_80089D34_ovl_01();
s32 func_80171194_overlay_063();
s32 func_80172D80_overlay_063();

void func_8017141C_overlay_063(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80172D80_overlay_063(arg0, 0, 7);
        func_80171194_overlay_063(arg0, arg1, arg2);
        return;
    }
    D_801732B8_overlay_063[M2C_FIELD(arg0, u8 *, 6)](arg0, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
