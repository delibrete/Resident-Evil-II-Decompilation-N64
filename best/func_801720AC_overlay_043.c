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
M2C_UNK func_801728CC_overlay_043(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s16 *); /* extern */
extern M2C_UNK D_80172BE4_overlay_043;
extern s32 D_80172E14_overlay_043;

void func_801720AC_overlay_043(void *arg0) {
    s16 sp20;
    s16 sp22;
    s16 sp24;
    void *temp_s0;

    if (M2C_FIELD(arg0, u8 *, 0x2CF) == 0) {
        D_80172E14_overlay_043 = func_80033634_ovl_01() & 7;
    }
    M2C_FIELD(arg0, u8 *, 0x2CF) = 4U;
    temp_s0 = (char *)((D_80172E14_overlay_043 * 0xC)); temp_s0 += (s32)(&D_80172BE4_overlay_043);
    sp20 = M2C_FIELD(temp_s0, u16 *, 0) - 0x7F + ((func_80033634_ovl_01() & 0xFF) * 2);
    sp22 = M2C_FIELD(temp_s0, u16 *, 2) - 0x7F + ((func_80033634_ovl_01() & 0xFF) * 2);
    sp24 = M2C_FIELD(temp_s0, u16 *, 4) - 0x7F + ((func_80033634_ovl_01() & 0xFF) * 2);
    func_801728CC_overlay_043(arg0, 0, 6, 0x2800, (s32) M2C_FIELD(temp_s0, s16 *, 6), M2C_FIELD(temp_s0, s32 *, 8), &sp20);
}
