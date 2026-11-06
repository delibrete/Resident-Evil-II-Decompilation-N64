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

extern short D_800E12C2;
extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
extern char D_800C7650[];

void func_8016FCE4_overlay_058(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x1194U) && (D_800E12C2 >= 0) && (func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 0x400) != 0) && (((0x1558 >> (func_80033634_ovl_01() & 0xF)) & 1) || (M2C_FIELD(arg0, u8 *, 0x2C0) != 0))) {
        M2C_FIELD(arg0, s8 *, 5) = 3;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
}
