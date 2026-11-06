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


extern int (*D_80173080_overlay_041[])();
s32 func_80033A0C_ovl_01();
s16 func_80069F4C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172DA4_overlay_041();
extern char D_800C7650[];
extern s32 func_80172DB8_overlay_041;

void func_8016E9B0_overlay_041(void *arg0, s32 arg1, s32 arg2) {
    void *temp_s0;
    void *temp_v0;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0xA;
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D0) = 0;
    M2C_FIELD(arg0, s16 *, 0x270) = 0;
    M2C_FIELD(arg0, s16 *, 0x272) = 0;
    M2C_FIELD(arg0, s16 *, 0x274) = 0;
    M2C_FIELD(arg0, s16 *, 0x276) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    M2C_FIELD(arg0, s8 *, 0x25D) = 8;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0;
    M2C_FIELD(temp_v0, s16 *, 0x134) = 0x60;
    M2C_FIELD(temp_v0, s16 *, 0x136) = 0x60;
    M2C_FIELD(temp_v0, s16 *, 0x138) = 0x200;
    M2C_FIELD(temp_v0, s16 *, 0x130) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x132) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x13A) = 0x138;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x15E;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x212;
    do { func_80172DA4_overlay_041(arg0, 0x15E); } while (0);
    temp_s0 = arg0 + 0x28;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x12C;
    M2C_FIELD(arg0, s16 *, 0x25E) = func_80069F4C_ovl_01(temp_s0, 0xFA, 0x400, 0);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0xC800C8, 0, temp_s0);
    M2C_FIELD(arg0, s32 *, 0) |= 0x08000000;
    if (M2C_FIELD(arg0, u16 *, 0x1AA) & 0x4000) {
        M2C_FIELD(arg0, s32 *, 4) = 4;
        M2C_FIELD(arg0, u16 *, 0x1AA) &= 0xBFFF;
        M2C_FIELD(arg0, s8 *, 5) = (s8) (M2C_FIELD(arg0, u8 *, 0x1AB) & 0xF);
        M2C_FIELD(arg0, u16 *, 0x2C6) |= 1;
        D_80173080_overlay_041[(u8) M2C_FIELD(arg0, s32 *, 4)](arg0, arg1, arg2);
    }
    if (M2C_FIELD(arg0, u16 *, 0x1AA) & 0x40) {
        M2C_FIELD(arg0, u8 *, 0x26F) = 0x80;
        M2C_FIELD(arg0, s32 *, 0) |= 8;
    }
    *(s32 * *)(D_800C7650 + 0x182DC) = &func_80172DB8_overlay_041;
}
