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


extern int (*D_801748A0_overlay_045[])();
M2C_UNK func_8004DB8C_ovl_01(void *);               /* extern */
M2C_UNK func_8004DCE8_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_80074D94_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_801732C0_overlay_045(void *);          /* extern */
M2C_UNK func_80174570_overlay_045(void *);          /* extern */
extern M2C_UNK D_800C7650;

void func_8016E800_overlay_045(void *arg0) {
    s16 temp_a0;
    s32 temp_v1_2;
    u8 temp_v0;
    u8 temp_v1;

    if (!(M2C_FIELD(&D_800C7650, s32 *, 0x19A60) & 0x20000000)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x26F);
        if (temp_v1 & 0x7F) {
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (temp_v1 - 1);
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2D9);
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2D9) = (u8) (temp_v0 - 1);
        }
        D_801748A0_overlay_045[M2C_FIELD(arg0, u8 *, 4)](arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
        M2C_FIELD(arg0, s8 *, 0x1A2) = (s8) (-M2C_FIELD(arg0, s32 *, 0x2C) / 1800);
        func_8004DB8C_ovl_01(arg0);
        func_8004DCE8_ovl_01(arg0, 0x600);
        func_801732C0_overlay_045(arg0);
        func_80174570_overlay_045(arg0);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2DB) != 0) {
        temp_a0 = M2C_FIELD(arg0, s16 *, 0x25E);
        temp_v1_2 = func_80074D94_ovl_01(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30)) + 0x46;
        if (temp_v1_2 >= temp_a0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1_2;
    }
}
