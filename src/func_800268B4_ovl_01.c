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

M2C_UNK func_8006BF78_overlay_001(s32);             /* extern */
extern u8 D_800C5694_overlay_001;
extern s32 D_8010B680_overlay_001;
extern s32 D_8010B684_overlay_001;

void func_800268B4_ovl_01(void) {
    s32 var_a0;

    if (D_800C5694_overlay_001 == 0) {
        var_a0 = D_8010B684_overlay_001;
    } else {
        var_a0 = D_8010B680_overlay_001;
    }
    func_8006BF78_overlay_001(var_a0);
}
