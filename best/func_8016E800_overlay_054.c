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


extern int (*D_80173D50_overlay_054[])();
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_8004DB8C_ovl_01(void *);               /* extern */
M2C_UNK func_8004DCE8_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_801736A8_overlay_054(void *, u8, M2C_UNK); /* extern */
M2C_UNK func_801738C8_overlay_054(void *);          /* extern */
M2C_UNK func_80173BC8_overlay_054(void *);          /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_80173D40_overlay_054;

void func_8016E800_overlay_054(void *arg0) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    if (!(M2C_FIELD(&D_800C7650, s32 *, 0x19A60) & 0x20000000)) {
        if (M2C_FIELD(arg0, u8 *, 0x2C1) != 0) {
            M2C_FIELD(arg0, u8 *, 0x2C1) = 0U;
            M2C_FIELD(arg0, s8 *, 0x2C3) = 0;
        }
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x26F);
        if (temp_v1 & 0x7F) {
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (temp_v1 - 1);
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2DB);
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2DB) = (u8) (temp_v0 - 1);
        }
        D_80173D50_overlay_054[M2C_FIELD(arg0, u8 *, 4)](arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x2D8);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2D8) = (u8) (temp_v0_2 - 1);
            func_801736A8_overlay_054(arg0, *((func_80033634_ovl_01() & 0xF) + &D_80173D40_overlay_054), 9);
        }
        if (M2C_FIELD(arg0, u8 *, 0x2B6) != 0) {
            func_80173BC8_overlay_054(arg0);
        } else {
            func_8004DB8C_ovl_01(arg0);
        }
        func_8004DCE8_ovl_01(arg0, 0x400);
        func_801738C8_overlay_054(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x28) != M2C_FIELD(arg0, s16 *, 0x34)) {
            M2C_FIELD(arg0, u8 *, 0x2C9) = 0U;
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x30) != M2C_FIELD(arg0, s16 *, 0x38)) {
            M2C_FIELD(arg0, u8 *, 0x2C9) = 0U;
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x2C9) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C9) + 1);
    }
}
