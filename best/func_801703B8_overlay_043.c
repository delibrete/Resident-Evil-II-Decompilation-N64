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

extern short D_800E12C2;
extern short D_800E8C4C;
extern int D_800E10AC;
s32 func_80033634_ovl_01();
extern char D_800C7650[];

void func_801703B8_overlay_043(void *arg0) {
    s8 var_v0;

    if (M2C_FIELD(arg0, s16 *, 0x1F2) < 0x61A8) {
        M2C_FIELD(arg0, u16 *, 0x2B4) |= 0x20;
    }
    if (D_800E12C2 >= 0) {
        if (M2C_FIELD(arg0, u8 *, 0x2C2) == 7) {
            if (M2C_FIELD(arg0, u8 *, 0x2CC) != 1) {
                M2C_FIELD(arg0, s8 *, 0x26E) = 1;
                return;
            }
            goto block_17;
        }
        if ((M2C_FIELD(arg0, u16 *, 0x2B4) & 0x10) && (D_800E8C4C == 8) && (M2C_FIELD(arg0, s16 *, 0x1F2) < 0x61A8)) {
            var_v0 = 3;
            if (D_800E10AC & 0x40000000) {
                M2C_FIELD(arg0, s16 *, 0x2C4) = 0;
                M2C_FIELD(arg0, s16 *, 0x2C6) = 0;
            } else {
                var_v0 = 2;
            }
            M2C_FIELD(arg0, s8 *, 0x2C0) = 0;
            M2C_FIELD(arg0, s8 *, 0x26E) = var_v0;
            return;
        }
        if ((M2C_FIELD(arg0, s8 *, 0x2C1) == 0) && (M2C_FIELD(arg0, u8 *, 0x2CA) == 0) && !(func_80033634_ovl_01(&D_800C7650, D_800C7650 + 0x18000) & 3)) {
            M2C_FIELD(arg0, s8 *, 0x26E) = 4;
            M2C_FIELD(arg0, u8 *, 0x2CA) = (u8) ((func_80033634_ovl_01() & 0x3F) + 0x78);
            return;
        }
        goto block_17;
    }
block_17:
    M2C_FIELD(arg0, s8 *, 0x26E) = 0;
}
