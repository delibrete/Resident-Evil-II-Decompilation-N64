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
M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, s32, M2C_UNK, void *); /* extern */
M2C_UNK func_80040E88_ovl_01(s32, void *, void *);  /* extern */
s32 func_800837DC_ovl_01(M2C_UNK *, M2C_UNK);       /* extern */
M2C_UNK func_8008A974_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8016F4D0_overlay_042(void *);          /* extern */
M2C_UNK func_8016F540_overlay_042(void *);          /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;
extern M2C_UNK D_800E8C80;
extern M2C_UNK D_800E8FC8;
extern M2C_UNK D_80175460_overlay_042;
extern M2C_UNK D_80175480_overlay_042;
extern M2C_UNK D_801756F4_overlay_042;
extern M2C_UNK D_801756F8_overlay_042;
extern M2C_UNK D_80175868_overlay_042;
extern s16 D_8017586C_overlay_042;
extern s32 D_80175870_overlay_042;
extern M2C_UNK func_8016F08C_overlay_042;
extern M2C_UNK func_80174F58_overlay_042;

void func_8017147C_overlay_042(void *arg0) {
    M2C_UNK *var_v0_2;
    s8 var_v0_3;
    u16 temp_a0;
    u16 var_v0;
    u32 temp_v1;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;

    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(&D_800C7650, M2C_UNK **, 0x182E0) = &func_80174F58_overlay_042;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000000;
    do { func_8008A974_ovl_01(0x100); } while (0);
    M2C_FIELD(arg0, s8 *, 0x25D) = 8;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    temp_a2 = M2C_FIELD(arg0, void **, 0x234) + 0xBC0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x02000000);
    M2C_FIELD(temp_a2, s16 *, 0x134) = 0x60;
    M2C_FIELD(temp_a2, s16 *, 0x136) = 0x60;
    M2C_FIELD(temp_a2, s16 *, 0x138) = 0x200;
    M2C_FIELD(temp_a2, s16 *, 0x130) = 0;
    M2C_FIELD(temp_a2, s16 *, 0x132) = 0;
    M2C_FIELD(temp_a2, s16 *, 0x13A) = 0x138;
    temp_a1 = M2C_FIELD(arg0, void **, 0x234);
    temp_a2_2 = temp_a1 + 0x2050;
    M2C_FIELD(temp_a1, s32 *, 0x2050) = 0;
    M2C_FIELD(temp_a2_2, void **, 0x64) = (void *) (M2C_FIELD(arg0, void **, 0x234) + 0xBF8);
    M2C_FIELD(temp_a2_2, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_a2_2, s32 *, 0x20) = 0;
    M2C_FIELD(temp_a2_2, s32 *, 0x24) = 0;
    M2C_FIELD(temp_a2_2, s16 *, 0x58) = 0x400;
    M2C_FIELD(temp_a2_2, s16 *, 0x5A) = 0;
    M2C_FIELD(temp_a2_2, s16 *, 0x5C) = 0x400;
    M2C_FIELD(temp_a2_2, void **, 0x12C) = (void *) (M2C_FIELD(arg0, void **, 0x234) + 0xBC0);
    func_80040E88_ovl_01(temp_a1 + 0x20A8, temp_a1 + 0x2058, temp_a2_2);
    D_80175870_overlay_042 = 0;
    if (M2C_FIELD(&D_800C7650, s32 *, 0x19A3C) & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x1F2) = (u16) *(((func_80033634_ovl_01() & 0xF) * 2) + &D_80175480_overlay_042);
        if (func_800837DC_ovl_01(&D_800E8C80, 0xA4) != 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x1F2) - 0x14;
            goto block_5;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x1F2) = (u16) *(((func_80033634_ovl_01() & 0xF) * 2) + &D_80175460_overlay_042);
        if (func_800837DC_ovl_01(&D_800E8C80, 0xA4) != 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x1F2) - 0xA;
block_5:
            M2C_FIELD(arg0, u16 *, 0x1F2) = var_v0;
        }
    }
    M2C_FIELD(arg0, s16 *, 0x1DC) = 0;
    M2C_FIELD(arg0, s16 *, 0x1DA) = 0;
    M2C_FIELD(arg0, s16 *, 0x1D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1BC) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C4) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x1CC) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1D0) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) M2C_FIELD(&D_800E8FC8, s32 *, 0x1C);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C4) = &D_800E10D0;
    M2C_FIELD(arg0, u16 *, 0x2B8) = 0x44CU;
    M2C_FIELD(arg0, u16 *, 0x2BA) = 0x352U;
    M2C_FIELD(arg0, s16 *, 0x2D6) = -0x1F4;
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x1AA);
    M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
    M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CA) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B7) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CF) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0xA);
    if (temp_a0 & 0x4000) {
        var_v0_2 = &D_801756F8_overlay_042;
    } else {
        var_v0_2 = &D_801756F4_overlay_042;
    }
    M2C_FIELD(arg0, u8 *, 5) = (u8) *((temp_a0 & 0xF) + var_v0_2);
    M2C_FIELD(&D_80175868_overlay_042, s16 *, 4) = 0;
    M2C_FIELD(&D_80175868_overlay_042, s16 *, 2) = 0;
    M2C_FIELD(&D_80175868_overlay_042, s16 *, 0) = 0;
    temp_v1 = ((u16) M2C_FIELD(arg0, u16 *, 0x1AA) >> 8) & 0xF;
    switch (temp_v1) {
    case 0:
block_19:
        func_8016F4D0_overlay_042(arg0);
    default:
        break;
    case 1:
        D_8017586C_overlay_042 = 0x400;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 8);
        func_8016F540_overlay_042(arg0);
        break;
    case 2:
        D_8017586C_overlay_042 = -0x400;
        var_v0_3 = 2;
block_17:
        M2C_FIELD(arg0, s8 *, 0x207) = var_v0_3;
        func_8016F540_overlay_042(arg0);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 8);
        break;
    case 3:
        M2C_FIELD(&D_80175868_overlay_042, s16 *, 0) = -0x400;
        var_v0_3 = 3;
        goto block_17;
    case 4:
        M2C_FIELD(&D_80175868_overlay_042, s16 *, 0) = 0x400;
        var_v0_3 = 1;
        goto block_17;
    case 5:
        M2C_FIELD(&D_80175868_overlay_042, s16 *, 0) = 0x800;
        M2C_FIELD(&D_80175868_overlay_042, s16 *, 2) = 0x800;
        goto block_19;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xE3FFFFFF) | 0x0C000000);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, M2C_FIELD(arg0, u16 *, 0x2B8) | (M2C_FIELD(arg0, u16 *, 0x2BA) << 0x10), 0, M2C_FIELD(arg0, void **, 0x234) + 0x33C);
    *M2C_FIELD(arg0, s16 **, 0x208) = 0xFA;
    temp_a2_3 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(temp_a2_3, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_a2_3, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(temp_a2_3, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    temp_a2_4 = M2C_FIELD(arg0, void **, 0x234) + 0x178;
    M2C_FIELD(temp_a2_4, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_a2_4, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(temp_a2_4, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, M2C_UNK **, 0x2A0) = &func_8016F08C_overlay_042;
}
