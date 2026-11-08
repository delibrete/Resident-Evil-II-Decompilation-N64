/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void *func_80001180();
s32 func_80004550();
s32 func_80004594();
s32 func_800045DC();
s32 func_8000BE50();
s32 func_8000C870();
s32 func_8004D374();
extern s32 D_801129B8;
extern s32 D_801320B0;
extern s32 D_80136D30;
extern s32 func_8015AFD0_ovl_03;

void func_80000598(void) {
    s32 sp10;
    char *var_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_v1;
    void *temp_s0;

    temp_s1 = (s32) (&func_8015AFD0_ovl_03 + 7) & ~7;
    temp_s0 = func_80001180(1);
    D_801320B0 = 0;
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 4);
    D_801129B8 = 0;
    temp_s2 = temp_v1 + (temp_v1 & 1);
    do {

    } while (func_8000BE50() & 7);
    func_8000C870(0, M2C_FIELD(temp_s0, s32 *, 0) & 0x0FFFFFFF, temp_s1, temp_s2);
    do {

    } while (func_8000BE50() & 7);
    func_80004550(&sp10, (temp_s1 + temp_s2 + 7) & ~7);
    func_800045DC(&sp10, temp_s1, M2C_FIELD(temp_s0, s32 *, 8), M2C_FIELD(temp_s0, s32 *, 4));
    func_80004594(&sp10, 2);
    var_a0 = &D_80136D30;
    var_v1 = ((s32) (&func_8015AFD0_ovl_03 - &D_80136D30) >> 2) - 1;
    if (var_v1 != -1) {
        do {
            *(s32 *)var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 4;
        } while (var_v1 != -1);
    }
    func_8004D374(var_a0);
}
