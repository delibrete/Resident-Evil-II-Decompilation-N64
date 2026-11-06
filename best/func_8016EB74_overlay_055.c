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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */


extern int (*D_80170884_overlay_055[])();
s32 func_80170634_overlay_055();

void func_8016EB74_overlay_055(void *arg0) {
    s32 temp_a1;
    u8 temp_a0;
    void *temp_a2;

    D_80170884_overlay_055[M2C_FIELD(arg0, u8 *, 5)]();
    if ((M2C_FIELD(arg0, u8 *, 0x2C8) == 0) && (temp_a2 = M2C_FIELD(arg0, s32 *, 0x250) + 0x2B4, temp_a0 = M2C_FIELD(temp_a2, u8 *, 0xD), (temp_a0 != 0)) && (temp_a1 = ((temp_a0 & 0x7F) - 1) & 0xFF, (M2C_FIELD(arg0, u8 *, 5) != temp_a1))) {
        if (temp_a0 & 0x80) {
            if (M2C_FIELD(temp_a2, u8 *, 0xF) != M2C_FIELD(arg0, u8 *, 0x2B4)) {
                return;
            }
            goto block_7;
        }
        if (M2C_FIELD(arg0, u8 *, 0x2B5) & M2C_FIELD(temp_a2, u8 *, 0xF)) {
block_7:
            func_80170634_overlay_055(arg0, temp_a1);
        }
    }
}
