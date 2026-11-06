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

extern unsigned char D_800E8FB2;
s32 func_80173B4C_overlay_045();
extern char D_800C7650[];

void func_80172D58_overlay_045(void *arg0) {
    s32 var_t1;
    u32 var_s0;
    void *temp_t0;
    void *temp_t2;

    temp_t2 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(arg0, u8 *, 0x25C) |= 1;
    var_t1 = M2C_FIELD(temp_t2, s32 *, 0x1BE8);
    temp_t0 = temp_t2 + 0x1BE8;
    if (D_800E8FB2 & 8) {
        var_t1 |= 0x4A;
    }
    var_s0 = 0;
    M2C_FIELD(temp_t2, s32 *, 0x1BE8) = var_t1;
    M2C_FIELD(temp_t0, s16 *, 0x132) = -0xF0;
    M2C_FIELD(temp_t0, s16 *, 0x138) = 0;
    M2C_FIELD(temp_t0, s16 *, 0x134) = 0;
    M2C_FIELD(temp_t0, s16 *, 0x136) = 0xF;
    M2C_FIELD(temp_t0, s16 *, 0x13C) = 0;
    M2C_FIELD(temp_t0, s32 *, 0x60) = 0x2F2F2F;
    M2C_FIELD(temp_t0, s16 *, 0x130) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
    func_80173B4C_overlay_045(arg0, 0x13, 1, 0x2F2F2F);
    do {
        func_80173B4C_overlay_045(arg0, 0x13, 2);/*__repair_loop_weight*/do {
        var_s0 += 1;} while (0);
    } while (var_s0 < 4U);
}
