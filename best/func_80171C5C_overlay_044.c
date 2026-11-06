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
extern short D_800E12C4;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80083800_ovl_01();
s32 func_8017399C_overlay_044();
extern char D_800C7650[];
extern char D_800E10D0[];
extern char D_80173B80_overlay_044[];

void func_80171C5C_overlay_044(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    u8 temp_v0;
    void *temp_a1;

    sp20 = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 0));
    sp24 = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 4));
    sp28 = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 8));
    sp2C = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 0xC));
    sp30 = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 0x10));
    sp34 = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 0x14));
    sp38 = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 0x18));
    sp3C = M2C_UNALIGNED32(*(s32 *)(D_80173B80_overlay_044 + 0x1C));
    if (!(M2C_FIELD(arg0, u8 *, 0x2CF) & 1)) {
        temp_a1 = &sp20 + (((u8) M2C_FIELD(arg0, u8 *, 0x2CF) >> 1) * 8);
        func_80083800_ovl_01((s16) (D_800E12C4 << 0xB));
        func_8017399C_overlay_044(&D_800E10D0, 0, 2, 0x2400, 0, 0, &sp20 + (((u8) M2C_FIELD(arg0, u8 *, 0x2CF) >> 1) * 8));
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2CF) + 1;
    M2C_FIELD(arg0, u8 *, 0x2CF) = temp_v0;
    if ((temp_v0 & 0xFF) == 7) {
        M2C_FIELD(arg0, s32 *, 0x2D8) = 0;
    }
}
