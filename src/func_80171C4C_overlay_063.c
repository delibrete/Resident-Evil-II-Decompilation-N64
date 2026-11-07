/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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


extern int (*D_801732F4_overlay_063[])();
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */

void func_80171C4C_overlay_063(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x64) = 0;
    D_801732F4_overlay_063[M2C_FIELD(arg0, u8 *, 5) - 1]();
    func_80035AAC_ovl_01_108(arg0);
}
