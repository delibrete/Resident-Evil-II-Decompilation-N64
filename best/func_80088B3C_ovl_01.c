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

s32 func_80040D5C_overlay_001();
s32 func_800411E8_overlay_001();
s32 func_8004229C_overlay_001();
s32 func_80042484_overlay_001();
s32 func_8004251C_overlay_001();
s32 func_8004A5EC_overlay_001();
s32 func_80083D5C_overlay_001();
s32 func_800854BC_overlay_001();
s32 func_800897B4_overlay_001();
s32 func_80089A78_overlay_001();
s32 func_80089B5C_overlay_001();
extern char D_800C7650_overlay_001[];
extern u16 D_800E8FE8_overlay_001;

void func_80088B3C_ovl_01(s32 arg0, void *arg1, s32 arg2, void *arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    char *var_a1;
    char *var_t0;
    s32 temp_a3;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    char *var_a2;
    char *var_v1;
    u16 temp_v0_2;
    void *temp_v0;

    var_s1 = arg2;
    temp_v0 = M2C_FIELD(arg1, void **, 0x12C);
    temp_s2 = M2C_FIELD(arg1, s32 *, 0x64);
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0);
        var_v0 = var_s1 & 0x40;
        if (!(temp_v1 & 1)) {
            if (temp_v1 & 0x20) {
                M2C_FIELD(arg1, s32 *, 0) = 0x20;
                return;
            }
            goto block_4;
        }
        goto block_5;
    }
block_4:
    var_v0 = var_s1 & 0x40;
block_5:
    var_v0_2 = var_s1 & 0x800;
    if (var_v0 == 0) {
        func_8004251C_overlay_001(temp_s2, arg1 + 8, arg3);
        var_v0_2 = var_s1 & 0x800;
    }
    if (var_v0_2 != 0) {
        sp10 = M2C_FIELD(arg1, s32 *, 8);
        sp14 = M2C_FIELD(arg1, s32 *, 0xC);
        sp18 = M2C_FIELD(arg1, s32 *, 0x10);
        sp1C = M2C_FIELD(arg1, s32 *, 0x14);
        temp_a3 = M2C_FIELD(arg1, s32 *, 0x18);
        sp24 = (s32) (M2C_FIELD(arg1, s32 *, 0x1C) * M2C_FIELD(M2C_FIELD(arg1, void **, 0x12C), s16 *, 0x124)) >> 0xC;
        sp28 = (s32) (M2C_FIELD(arg1, s32 *, 0x20) * M2C_FIELD(M2C_FIELD(arg1, void **, 0x12C), s16 *, 0x126)) >> 0xC;
        sp20 = temp_a3;
        sp2C = (s32) (M2C_FIELD(arg1, s32 *, 0x24) * M2C_FIELD(M2C_FIELD(arg1, void **, 0x12C), s16 *, 0x128)) >> 0xC;
        func_8004251C_overlay_001(temp_s2, &sp10, arg3, temp_a3);
    }
    if (var_s1 & 0x20) {
        func_800897B4_overlay_001(arg1, arg3);
    }
    func_80042484_overlay_001(arg3, &sp10);
    if (var_s1 & 0x400) {
        sp30 = (s32) M2C_FIELD(arg1, s16 *, 0x124);
        sp34 = (s32) M2C_FIELD(arg1, s16 *, 0x126);
        sp38 = (s32) M2C_FIELD(arg1, s16 *, 0x128);
        func_80040D5C_overlay_001(&sp10, &sp30);
    }
    var_t0 = &sp10;
    if (var_s1 & 0x2000) {
        var_a3 = 2;
        sp30 = (s32) M2C_FIELD(arg1, s16 *, 0x124);
        var_a2 = &D_800E8FE8_overlay_001;
        sp34 = (s32) M2C_FIELD(arg1, s16 *, 0x126);
        sp38 = (s32) M2C_FIELD(arg1, s16 *, 0x128);
        do {
            var_a1 = var_t0;
            var_a0 = 2;
            var_v1 = var_a2;
do {
            temp_v0_2 = *(u16 *)var_v1;
            var_v1 += 2;
            var_a0 -= 1;
            *(s32 *)var_a1 = temp_v0_2;
            var_a1 += 2;
            } while (var_a0 != -1);
            var_t0 += 6;
            var_a3 -= 1;
            var_a2 += 6;
        } while (var_a3 != -1);
        func_80040D5C_overlay_001(&sp10, &sp30, var_a2, var_a3);
        func_8004229C_overlay_001(&sp10, arg3, &sp10);
        sp24 = M2C_FIELD(arg3, s32 *, 0x14);
        sp28 = M2C_FIELD(arg3, s32 *, 0x18);
        sp2C = M2C_FIELD(arg3, s32 *, 0x1C);
        sp30 = M2C_FIELD(arg3, s32 *, 0x20);
    }
    if (func_80083D5C_overlay_001(arg1 + 0x4C, *(s32 *)(D_800C7650_overlay_001 + 0x18290)) == 0) {
        var_s1 |= 0x4000;
    }
    var_v0_3 = var_s1 & 8;
    if (!(var_s1 & 0x4000)) {
        if (!(var_s1 & 0x18)) {
            func_800411E8_overlay_001(&sp10, arg1 + 0xD0);
            func_800854BC_overlay_001(arg1, arg0 + 0x78, arg0);
            return;
        }
        if (var_s1 & 8) {
            func_8004A5EC_overlay_001(arg0 + 0x78, arg1);
        }
        func_800411E8_overlay_001(&sp10, arg1 + 0xD0);
        func_800854BC_overlay_001(arg1, arg0 + 0x78, arg0);
        var_v0_3 = var_s1 & 8;
        goto block_27;
    }
block_27:
    if (var_v0_3 != 0) {
        func_80089A78_overlay_001(arg1);
        return;
    }
    if (var_s1 & 0x10) {
        func_80089B5C_overlay_001(arg1);
    }
}
