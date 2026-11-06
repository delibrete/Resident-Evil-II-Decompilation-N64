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

s32 func_800362C0_ovl_01();
s32 func_800366C4_ovl_01();
extern char D_80163DE8_overlay_027[];
extern char D_80163E54_overlay_027[];

void func_80163C10_ovl_27(s32 *arg0) {
    s32 *temp_s0;

    if (M2C_FIELD(arg0, u8 *, 0x2CC) == 0) {
        temp_s0 = M2C_FIELD(arg0, s32 **, 0x234);
        func_800362C0_ovl_01(arg0, temp_s0, &D_80163DE8_overlay_027);
        func_800362C0_ovl_01(arg0, temp_s0, &D_80163E54_overlay_027);
        func_800366C4_ovl_01(arg0);
    }
}
