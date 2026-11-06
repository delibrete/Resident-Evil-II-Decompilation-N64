/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
s32 func_80172778_overlay_041();
s32 func_80172A90_overlay_041();
extern char D_800C7650[];

void func_801703F0_overlay_041(void *arg0) {
    if ((func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 0x60) != 0) || !(M2C_FIELD(arg0, u16 *, 0x2C6) & 2)) {
        func_80172778_overlay_041(arg0, 4);
    }
    func_80172A90_overlay_041(arg0);
}
