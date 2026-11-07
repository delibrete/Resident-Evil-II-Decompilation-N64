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


extern int (*D_801738C8_overlay_040[])();
M2C_UNK func_80172FE8_overlay_040(void *);          /* extern */
M2C_UNK func_80173490_overlay_040(void *, M2C_UNK, M2C_UNK); /* extern */

void func_8016F8E4_overlay_040(void *arg0) {
    D_801738C8_overlay_040[M2C_FIELD(arg0, u8 *, 6)]();
    func_80172FE8_overlay_040(arg0);
    func_80173490_overlay_040(arg0, 4, 0);
}
