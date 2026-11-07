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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */


extern int (*D_80170444_overlay_049[])();
s32 func_8016FB30_overlay_049();
s32 func_80170148_overlay_049();

void func_8016FB50_overlay_049(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 5);
    if (temp_v0 != 0xFF) {
        func_80170148_overlay_049(arg0, temp_v0);
        M2C_FIELD(arg0, u8 *, 5) = 0xFFU;
        func_8016FB30_overlay_049(arg0);
    }
    D_80170444_overlay_049[M2C_FIELD(arg0, u8 *, 0x26E)](arg0, arg1, arg2);
}
