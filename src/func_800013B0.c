/* identical to func_800013E0 in Resident Evil II (local match library) (matched), with its names changed by decompdecomp */
/* machine draft (m2c) for sn-n64-272-0004 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

extern s32 D_800138A0;
extern s32 D_800138A4;
extern s32 D_800138A8;
extern s32 D_80013EB4;

void func_800013B0(s32 arg0) {
    D_800138A0 = arg0;
    D_800138A8 = arg0;
    D_80013EB4 = 0;
    D_800138A4 = arg0;
}
