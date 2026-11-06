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

s32 func_80006650();
s32 func_80006D30();
s32 func_8000CD40();
extern void *D_8001290C;
extern char D_801320E0_overlay_001[];
extern char D_801320F8_overlay_001[];

void func_8009C1B0_ovl_01(void *arg0) {
    s32 temp_a0;
    void *temp_a1;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0xA8000000) {
        func_80006D30(&D_801320E0_overlay_001, &D_801320F8_overlay_001, 1);
        M2C_FIELD(arg0, s8 *, 4) = 3;
        M2C_FIELD(arg0, s8 *, 5) = 5;
        M2C_FIELD(arg0, s8 *, 8) = 0xC;
        M2C_FIELD(arg0, s8 *, 6) = 0xD;
        M2C_FIELD(arg0, s8 *, 7) = 2;
        M2C_FIELD(arg0, s32 *, 0xC) = 0xA8000000;
        M2C_FIELD(arg0, s8 *, 9) = 1;
        func_80006650(arg0 + 0x14, 0x60);
        temp_a1 = D_8001290C;
        temp_a0 = func_8000CD40(1);
        D_8001290C = arg0;
        M2C_FIELD(arg0, void **, 0) = temp_a1;
        func_8000CD40(temp_a0);
    }
}
