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
s32 func_80032EA4_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_8016FE18_overlay_058(void *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    M2C_FIELD(arg0, s8 *, 6) = 1;
    temp_s1 = (char *)(arg0); temp_s1 += (s32)(0x2B4);
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        if (func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 1) >= 0) {
            M2C_FIELD(temp_s1, s16 *, 2) = 0;
        } else {
            M2C_FIELD(temp_s1, s16 *, 2) = 1;
        }
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((1 << (func_80033634_ovl_01() & 0xF)) & 0x5A0);
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((M2C_FIELD(temp_s1, s16 *, 2) + 7) << 0x18) + 0xF00);
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    M2C_FIELD(arg0, s8 *, 0x206) = 0;
    M2C_FIELD(arg0, s8 *, 0x207) = 0;
    M2C_FIELD(arg0, u8 *, 0x25C) |= 1;
    M2C_FIELD(temp_s1, s8 *, 0x19) = 0;
}
