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

M2C_UNK func_800377B0_ovl_01(s32, s16, s32, u16 *); /* extern */
M2C_UNK func_80172FC0_overlay_063(void *, s32, u16 *, u16 *); /* extern */
extern M2C_UNK D_80173368_overlay_063;
extern M2C_UNK D_801733BC_overlay_063;

void func_80172EB4_overlay_063(void *arg0, s32 arg1, s32 arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp18;
    s16 sp1A;
    u16 sp1C;
    s32 temp_a2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_t0;
    void *temp_v1;

    temp_a3 = (char *)((arg2 * 8)); temp_a3 += (s32)(&D_801733BC_overlay_063);
    temp_a3_2 = temp_a3 + 2;
    temp_a2 = arg1 & 0x7F;
    temp_t0 = (char *)((temp_a2 * 6)); temp_t0 += (s32)(&D_80173368_overlay_063);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(temp_a3, s16 *, 0) * 0x178);
    if (!(arg1 & 0x80)) {
        sp10 = M2C_FIELD(temp_a3, u16 *, 2);
        sp12 = M2C_FIELD(temp_a3_2, u16 *, 2);
        sp14 = M2C_FIELD((temp_a3_2 + 2), u16 *, 2);
        func_800377B0_ovl_01(((M2C_FIELD(temp_t0, u8 *, 0) & 0x7F) << 0x18) | ((M2C_FIELD(temp_t0, u8 *, 1) + M2C_FIELD(temp_t0, u16 *, 2)) << 0x10) | M2C_FIELD(temp_t0, u16 *, 4), M2C_FIELD(arg0, s16 *, 0x66), temp_v1 + 0x38, &sp10);
        return;
    }
    sp10 = M2C_FIELD(temp_v1, u16 *, 0x4E);
    sp12 = M2C_FIELD(arg0, u16 *, 0x25E);
    sp14 = M2C_FIELD(temp_v1, u16 *, 0x56);
    sp1A = 0;
    sp18 = M2C_FIELD(temp_a3, u16 *, 2);
    sp1C = M2C_FIELD(temp_a3_2, u16 *, 4);
    func_80172FC0_overlay_063(arg0, temp_a2, &sp10, &sp18);
}
