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

M2C_UNK func_8017BB68_overlay_002(M2C_UNK);         /* extern */
s32 func_8017BE48_overlay_002(M2C_UNK);             /* extern */
extern s32 D_80185798_overlay_002;

void func_8017D79C_ovl_02(void) {
    func_8017BE48_overlay_002(3);
    if (func_8017BE48_overlay_002(1) != 0) {
        func_8017BE48_overlay_002(8);
        func_8017BE48_overlay_002(8);
        D_80185798_overlay_002 = func_8017BE48_overlay_002(8);
    }
    func_8017BE48_overlay_002(0xE);
    func_8017BB68_overlay_002(1);
    func_8017BE48_overlay_002(0xE);
}
