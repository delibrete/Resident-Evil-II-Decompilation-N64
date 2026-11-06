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

s32 func_800377B0_ovl_01();
extern char D_800E1C00[];
extern char D_80172A3C_overlay_043[];

void func_801717C0_overlay_043(void) {
    s32 sp10;
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp30;
    s32 sp38;
    char *var_a0;
    char *var_v1;
    void *temp_s0;

    var_v1 = &D_80172A3C_overlay_043;
    var_a0 = &sp10;
    if ((s32) &D_80172A3C_overlay_043 & 3) {
        do {
            M2C_FIELD(var_a0, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0));
            M2C_FIELD(var_a0, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 4));
            M2C_FIELD(var_a0, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 8));
            M2C_FIELD(var_a0, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0xC));
            var_v1 += 0x10;
            var_a0 += 0x10;
        } while (var_v1 != (D_80172A3C_overlay_043 + 0x30));
    } else {
        do {
            M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
            M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
            M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
            var_v1 += 0x10;
            var_a0 += 0x10;
        } while (var_v1 != (D_80172A3C_overlay_043 + 0x30));
    }
    temp_s0 = D_800E1C00 + 0x44;
    func_800377B0_ovl_01(0x030F2000, 0, temp_s0, &sp10);
    func_800377B0_ovl_01(0x030F3000, 0, temp_s0, &sp18);
    func_800377B0_ovl_01(0x030F3000, 0, temp_s0, &sp20);
    func_800377B0_ovl_01(0x030F2000, 0, temp_s0, &sp28);
    func_800377B0_ovl_01(0x030F2000, 0, temp_s0, &sp30);
    func_800377B0_ovl_01(0x030F3000, 0, temp_s0, &sp38);
}
