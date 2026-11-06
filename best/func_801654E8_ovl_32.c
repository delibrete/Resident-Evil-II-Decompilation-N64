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

s32 func_80036038_ovl_01();
extern char D_8016729C_overlay_032[];
extern char D_80167308_overlay_032[];

void func_801654E8_ovl_32(s32 *arg0, s32 *arg1) {
    func_80036038_ovl_01(arg0, M2C_FIELD(arg0, s32 **, 0x234), &D_80167308_overlay_032, func_80036038_ovl_01(M2C_FIELD(arg0, s32 **, 0x234), &D_8016729C_overlay_032, arg1));
}
