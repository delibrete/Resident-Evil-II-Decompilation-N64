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


extern int (*D_80173F10_overlay_060[])();
M2C_UNK func_8006671C(void *, void *, s32, s32);    /* extern */

void func_80172180_overlay_060(void *arg0, void *arg1) {
    D_80173F10_overlay_060[M2C_FIELD(arg0, u8 *, 0x2B4)]();
    func_8006671C(arg0, arg1, M2C_FIELD(arg1, s32 *, 0xB4), M2C_FIELD(arg1, s32 *, 0x120));
}
