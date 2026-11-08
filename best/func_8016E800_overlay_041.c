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


extern int (*D_80173080_overlay_041[])();
M2C_UNK func_8004DB8C_ovl_01(void *);               /* extern */
M2C_UNK func_8004DCE8_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_8006AB70_ovl_01(s32 *, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016E924_overlay_041(void *);          /* extern */
M2C_UNK func_80172B2C_overlay_041(void *);          /* extern */
extern M2C_UNK D_800C7650;

void func_8016E800_overlay_041(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    u16 var_v0;
    u8 temp_v1;

    if (!(M2C_FIELD(&D_800C7650, s32 *, 0x19A60) & 0x20000000)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x26F);
        if (temp_v1 & 0x7F) {
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (temp_v1 - 1);
        }
        sp10 = M2C_FIELD(arg0, s32 *, 0x28);
        sp14 = M2C_FIELD(arg0, s32 *, 0x2C);
        sp28 = M2C_FIELD(&D_800C7650, s32 *, 0x19AB0);
        sp20 = M2C_FIELD(&D_800C7650, s32 *, 0x19AA8);
        sp24 = M2C_FIELD(&D_800C7650, s32 *, 0x19AAC);
        sp18 = M2C_FIELD(arg0, s32 *, 0x30);
        if (func_8006AB70_ovl_01(&sp10, &sp20, 0x8400, 0) != 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x2C6) & 0xFFFD;
        } else {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x2C6) | 2;
        }
        M2C_FIELD(arg0, u16 *, 0x2C6) = var_v0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x384U) {
            M2C_FIELD(arg0, s16 *, 0x134) = -0x15E;
        } else {
            M2C_FIELD(arg0, s16 *, 0x134) = 0;
        }
        D_80173080_overlay_041[M2C_FIELD(arg0, u8 *, 4)](arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
        func_8016E924_overlay_041(arg0);
        func_80172B2C_overlay_041(arg0);
        func_8004DB8C_ovl_01(arg0);
        func_8004DCE8_ovl_01(arg0, 0x400);
    }
}
