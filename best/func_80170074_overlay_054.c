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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80173514_overlay_054(void *);          /* extern */
extern M2C_UNK D_80173DA8_overlay_054;

void func_80170074_overlay_054(void *arg0) {
    s16 var_v1_2;
    s8 var_v1;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    M2C_FIELD(temp_s2, u8 *, 8) = (u8) *((func_80033634_ovl_01() & 7) + &D_80173DA8_overlay_054);
    M2C_FIELD(temp_s2, s8 *, 0xA) = (s8) (*((func_80033634_ovl_01() & 7) + &D_80173DA8_overlay_054) + 0x1E);
    var_v1 = 0;
    if (M2C_FIELD(arg0, s8 *, 0x206) != 0) {
        var_v1 = 0xF;
    }
    M2C_FIELD(temp_s2, s8 *, 9) = var_v1;
    var_v1_2 = -0x320;
    if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0) {
        var_v1_2 = 0x320;
    }
    M2C_FIELD(arg0, s16 *, 0x130) = var_v1_2;
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    func_80173514_overlay_054(arg0);
}
