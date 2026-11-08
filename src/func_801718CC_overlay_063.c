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


extern int (*D_801732B8_overlay_063[])();
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80171194_overlay_063(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80172EB4_overlay_063(void *, M2C_UNK, s32); /* extern */

void func_801718CC_overlay_063(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80172EB4_overlay_063(arg0, 8, func_80033634_ovl_01() & 3);
        func_80172EB4_overlay_063(arg0, 8, (func_80033634_ovl_01() & 3) | 4);
        func_80171194_overlay_063(arg0, arg1, arg2);
        return;
    }
    D_801732B8_overlay_063[M2C_FIELD(arg0, u8 *, 6)](arg0, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
