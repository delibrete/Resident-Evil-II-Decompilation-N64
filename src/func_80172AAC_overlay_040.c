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


extern int (*D_80173A68_overlay_040[])();
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80173490_overlay_040(void *, M2C_UNK, s32); /* extern */

void func_80172AAC_overlay_040(void *arg0) {
    D_80173A68_overlay_040[M2C_FIELD(arg0, u8 *, 6)]();
    func_80173490_overlay_040(arg0, 3, 0);
    func_80173490_overlay_040(arg0, 2, 0);
    func_80173490_overlay_040(arg0, 2, (func_80033634_ovl_01() & 1) + 1);
}
