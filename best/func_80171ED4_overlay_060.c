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

extern int D_800E10AC;
extern unsigned short D_800E1136;
s32 func_80032F24_ovl_01();
s32 func_8003334C_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_80171ED4_overlay_060(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x700;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        D_800E10AC = (s32) (D_800E10AC | 0x40);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        M2C_FIELD(arg0, u8 *, 0x26F) |= 0x80;
        func_80077B0C_ovl_01(0x04010001, arg0 + 0x28);
        /* fallthrough */
    case 1:
        temp_t0 = M2C_FIELD(arg0, s32 *, 0x28);
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x30);
        temp_a3_2 = temp_a3 + ((s32) (M2C_FIELD(arg0, s16 *, 0x204) - temp_a3) >> 1);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (temp_t0 + ((s32) (M2C_FIELD(arg0, s16 *, 0x200) - temp_t0) >> 1));
        M2C_FIELD(arg0, s32 *, 0x30) = temp_a3_2;
        func_80032F24_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x1F6), 0x100, temp_a3_2);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 8) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) M2C_FIELD(arg0, s16 *, 0x1F6);
            func_80077B0C_ovl_01(0x04010001, arg0 + 0x28);
            return;
        }
        return;
    case 2:
        D_800E1136 = (u16) (D_800E1136 + 0x800);
        func_8003334C_ovl_01(arg0,  arg1);
        D_800E1136 = (u16) (D_800E1136 - 0x800);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
        }
        break;
    }
}
