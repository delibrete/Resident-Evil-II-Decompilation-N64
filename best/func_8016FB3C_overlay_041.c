/* machine draft (m2c) for sn-n64-272-0006 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

extern short D_800E132E;
extern short D_800E12C2;
s32 func_80172778_overlay_041();
s32 func_80172784_overlay_041();
s32 func_801728B8_overlay_041();
s32 func_80172A90_overlay_041();
s32 func_80172B00_overlay_041();
extern char D_800C7650[];

void func_8016FB3C_overlay_041(void *arg0) {
    u16 temp_v0;

    if ((D_800E132E - 0x708) < M2C_FIELD(arg0, s32 *, 0x2C)) {
        func_80172778_overlay_041(arg0, (void *)4);
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_80172778_overlay_041(arg0, 4);
    }
    func_80172784_overlay_041(arg0);
    if ((D_800E12C2 < 0) && (M2C_FIELD(arg0, s8 *, 0x2BD) <= 0)) {
        func_80172B00_overlay_041(arg0);
        return;
    }
    func_801728B8_overlay_041(arg0);
    func_80172A90_overlay_041(arg0);
}
