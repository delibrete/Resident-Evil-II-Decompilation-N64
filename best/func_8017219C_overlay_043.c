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

s32 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s8 func_80033634_ovl_01();                          /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, M2C_UNK *, s16 *); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;
extern M2C_UNK D_800E8FC8;

void func_8017219C_overlay_043(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2CD);
    if (temp_v1 == 0) {
        M2C_FIELD(arg0, void (**)(void *), 0x2D0) = func_8017219C_overlay_043;
        M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
        return;
    }
    if (((s32) temp_v1 >= 0) && ((s32) temp_v1 < 4)) {
        temp_s1 = func_80032D44_ovl_01(M2C_FIELD(&D_800E10D0, s16 *, 0x2A), M2C_FIELD(&D_800E10D0, s16 *, 0x32), M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32));
        sp10 = M2C_FIELD(&D_800C7650, u16 *, 0x19AAA) + func_80033634_ovl_01();
        sp12 = M2C_FIELD(&D_800C7650, u16 *, 0x19AAE) + (func_80033634_ovl_01() - 0x320);
        sp14 = M2C_FIELD(&D_800C7650, u16 *, 0x19AB2) + func_80033634_ovl_01();
        func_800377B0_ovl_01(0x12000, (s16) (temp_s1 + ((s32) (func_80033634_ovl_01() << 0x18) >> 0x14)), &D_800E8FC8, &sp10);
        if (M2C_FIELD(arg0, u8 *, 0x2CD) == 3) {
            M2C_FIELD(arg0, void (**)(void *), 0x2D0) = NULL;
        }
        M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
    }
}
