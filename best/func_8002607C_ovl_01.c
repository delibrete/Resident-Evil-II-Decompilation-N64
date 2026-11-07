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

extern s32 D_800C4E68_overlay_001;
extern s32 D_800C4EB8_overlay_001;
extern s32 D_800C5688_overlay_001;
extern M2C_UNK D_800C7650_overlay_001;
extern s32 D_8010B698_overlay_001;
extern s32 D_80113778_overlay_001;

void func_8002607C_ovl_01(s32 arg0) {
int __repair_literal;

    D_800C5688_overlay_001 = arg0;
    D_800C4EB8_overlay_001 = D_8010B698_overlay_001;
__repair_literal = 2;

    D_800C4E68_overlay_001 = arg0 - (M2C_FIELD(&D_800C7650_overlay_001, s16 *, 0x21270) * (D_80113778_overlay_001 * __repair_literal));
}
