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

extern int D_800E10F8;
extern int D_800E1100;
extern unsigned short D_800E10C8;
s32 func_80032B8C_ovl_01();
s16 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80065400_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
extern char D_800E10D0[];

void func_8016ED08_overlay_064(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s16 temp_v0;
    s16 temp_v1_3;
    s16 var_a3;
    s16 var_v0;
    u16 temp_v1_2;
    u8 temp_v1;
    void *temp_s2;

    var_a3 = arg3;
    sp10 = D_800E10F8;
    sp18 = D_800E1100;
    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    temp_s2 = arg0 + 0x2B4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 2;
        M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((func_80033634_ovl_01() + 1) & 7);
        /* fallthrough */
    case 1:
        var_a3 = 0;
        if (M2C_FIELD(arg0, s8 *, 0x206) == 0) {
            var_a3 = func_80032EA4_ovl_01(arg0, (s16) sp10, (s16) sp18, 2);
            M2C_FIELD(arg0, s8 *, 0x206) = 4;
        }
        break;
    case 2:
        sp14 = 0;
        do { func_80065400_ovl_01(arg0, &sp10, 0, 0); } while (0);
        temp_v0 = func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 2);
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v1_2;
        var_a3 = temp_v0;
        if ((temp_v1_2 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 1U;
        }
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x206) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x206) - 1);
    temp_v1_3 = M2C_FIELD(arg0, s16 *, 0x66);
    if (M2C_FIELD(temp_s2, u8 *, 4) == 0) {
        var_v0 = temp_v1_3 + var_a3;
    } else {
        var_v0 = temp_v1_3 - var_a3;
    }
    M2C_FIELD(arg0, s16 *, 0x66) = var_v0;
    func_80032B8C_ovl_01(arg0, 0);
    if (M2C_FIELD(arg0, u8 *, 0x2B8) == 0) {
        if (!(D_800E10C8 & 0x10)) {
            if (func_80032EA4_ovl_01(arg0, (s16) D_800E10F8, (s16) D_800E1100, 0x100) == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x708U) {
                    if ((0x27E4 >> (func_80033634_ovl_01(arg0, arg1) & 0xF)) & 1) {
                        D_800E10C8 = (u16) (D_800E10C8 | 0x10);
                        M2C_FIELD(temp_s2, u8 *, 4) = 0x5AU;
                        M2C_FIELD(arg0, s16 *, 6) = 0x100;
                    }
                }
            }
        }
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
}
