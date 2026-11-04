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

s32 func_8006D5D8_overlay_001();
extern s8 D_80012888;
extern char D_800C7650_ovl_01[];
extern s32 D_800E8D54_ovl_01;
extern char D_80113A70_ovl_01[];

void func_8006D488_ovl_01(void) {
    char *var_t1;
    s32 var_t0_2;
    u8 var_t0;
    void *var_v1;

    var_t0 = 0;
    var_v1 = D_80113A70_ovl_01 + 8;
    do {
        M2C_FIELD(var_v1, u8 *, -5) = var_t0;
        M2C_FIELD(var_v1, s8 *, -7) = 0;
        M2C_FIELD(var_v1, s8 *, -6) = 0;
        M2C_FIELD(var_v1, s8 *, -4) = -1;
        M2C_FIELD(var_v1, s8 *, 0) = -1;/*__repair_loop_weight*/do {
        var_t0 += 1;} while (0);
        var_v1 += 0x174;
    } while (var_t0 < 0xAU);
    func_8006D5D8_overlay_001(-1);
    var_t1 = &D_800E8D54_ovl_01;
    var_t0_2 = 0x40;
    *(s32 *)(D_800C7650_ovl_01 + 0x21650) = 0;
    *(s8 *)(D_80113A70_ovl_01 + 0x1469) = 0;
    *(s8 *)(D_80113A70_ovl_01 + 0x146A) = 0;
    *(s8 *)(D_80113A70_ovl_01 + 0x146B) = 0;
    D_80012888 = 0x78;
    *(s32 *)(D_800C7650_ovl_01 + 0x19A5C) = (s32) (*(s32 *)(D_800C7650_ovl_01 + 0x19A5C) & ~0x800 & ~0x400);
    *(s16 *)(D_800C7650_ovl_01 + 0x19A78) = 0;
    *(s16 *)(D_800C7650_ovl_01 + 0x19A7A) = 0;
    *(s16 *)(D_800C7650_ovl_01 + 0x2160A) = -1;
    *(s16 *)(D_800C7650_ovl_01 + 0x2160C) = -1;
    *(s8 *)(D_80113A70_ovl_01 + 0x1466) = 0xFF;
    *(s8 *)(D_80113A70_ovl_01 + 0x1467) = 0xFF;
    *(s8 *)(D_80113A70_ovl_01 + 0x1468) = 0xFF;
    *(s8 *)(D_80113A70_ovl_01 + 0x146C) = 0;
    *(s8 *)(D_80113A70_ovl_01 + 0x146D) = 0;
    *(s8 *)(D_80113A70_ovl_01 + 0x146E) = 0xFF;
    *(s32 *)(D_80113A70_ovl_01 + 0x1460) = (s32) *(s32 *)(D_800C7650_ovl_01 + 0x19D40);
    do {
        *(s32 *)var_t1 = -1;
        var_t0_2 -= 1;
        var_t1 += 4;
    } while (var_t0_2 != 0);
    if (*(s32 *)(D_800C7650_ovl_01 + 0x19A80) & 0x400) {
        *(s32 *)(D_800C7650_ovl_01 + 0x19A80) = (s32) (*(s32 *)(D_800C7650_ovl_01 + 0x19A80) & ~0x400);
    }
    *(u16 *)(D_800C7650_ovl_01 + 0x19C2A) = (u16) (*(u16 *)(D_800C7650_ovl_01 + 0x19C2A) & 0xFFF);
}
