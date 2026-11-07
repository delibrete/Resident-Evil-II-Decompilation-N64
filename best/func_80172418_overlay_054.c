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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_801721D0_overlay_054(void *);          /* extern */
M2C_UNK func_80172490_overlay_054();                /* extern */

void func_80172418_overlay_054(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80172490_overlay_054();
        M2C_FIELD(arg0, s8 *, 0x2C1) = 0x46;
        M2C_FIELD(arg0, s8 *, 0x2C3) = (s8) (((func_80033634_ovl_01() & 0xFF) % 3) | 0x80);
        return;
    }
    func_801721D0_overlay_054(arg0);
}
