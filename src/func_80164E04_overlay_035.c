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


extern int (*D_80166728_overlay_035[])();
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80164604_overlay_035();                /* extern */

void func_80164E04_overlay_035(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80164604_overlay_035();
        M2C_FIELD(arg0, s8 *, 0x2CF) = 0x14;
        return;
    }
    D_80166728_overlay_035[M2C_FIELD(arg0, u8 *, 6)](arg0, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
