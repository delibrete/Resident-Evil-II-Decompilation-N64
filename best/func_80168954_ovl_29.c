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
/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */

s32 func_80032DEC_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_80168954_ovl_29(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        D_800E10AC = (s32) (D_800E10AC | 0x40);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        func_80077B0C_ovl_01(0x04000001, arg0 + 0x28);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1E9) = 0;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        func_80032DEC_ovl_01(arg0, M2C_FIELD(*(void * *)(D_800C7650 + 0x19D40), s32 *, 0x28), M2C_FIELD(*(void * *)(D_800C7650 + 0x19D40), s32 *, 0x30), 0x100);
        return;
    }
}
