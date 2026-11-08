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

M2C_UNK func_80040E88_ovl_01(s16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, u16 *, s16 *); /* extern */
void *func_80170234_overlay_055(void *, s16 *, s32); /* extern */

void func_8017026C_overlay_055(void *arg0, s32 arg1) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    u16 sp18;
    u16 sp1A;
    u16 sp1C;
    M2C_UNK sp20;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x250);
    temp_v0 = func_80170234_overlay_055(temp_s0, &sp10, M2C_FIELD(arg0, u8 *, 0x1AB) - 1);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) sp10;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) sp12;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) sp14;
    sp10 = M2C_FIELD(temp_s0, u16 *, 0x64) + M2C_FIELD(temp_v0, u16 *, 0x58);
    sp12 = M2C_FIELD(temp_s0, u16 *, 0x66) + M2C_FIELD(temp_v0, u16 *, 0x5A);
    sp14 = M2C_FIELD(temp_s0, u16 *, 0x68) + M2C_FIELD(temp_v0, u16 *, 0x5C);
    func_80040E88_ovl_01(&sp10, &sp20);
    sp18 = M2C_FIELD(arg0, u16 *, 0x2B6);
    sp1A = M2C_FIELD(arg0, u16 *, 0x2B8);
    sp1C = M2C_FIELD(arg0, u16 *, 0x2BA);
    func_8004279C_ovl_01(&sp20, &sp18, &sp10);
    M2C_FIELD(arg0, u16 *, 0x64) = (u16) M2C_FIELD(temp_s0, u16 *, 0x64);
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x2BC));
    M2C_FIELD(arg0, u16 *, 0x68) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x68) + M2C_FIELD(arg0, u16 *, 0x2C2));
    if (arg1 != 0) {
        M2C_FIELD(arg0, u16 *, 0x64) = (u16) (M2C_FIELD(arg0, u16 *, 0x64) + M2C_FIELD(temp_v0, u16 *, 0x58));
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(temp_v0, u16 *, 0x5A));
        M2C_FIELD(arg0, u16 *, 0x68) = (u16) (M2C_FIELD(arg0, u16 *, 0x68) + M2C_FIELD(temp_v0, u16 *, 0x5C));
    }
}
