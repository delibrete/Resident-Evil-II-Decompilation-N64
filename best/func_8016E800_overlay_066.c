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


extern int (*D_8016EB60_overlay_066[])();
extern M2C_UNK D_800C7650;

void func_8016E800_overlay_066(void *arg0) {
    if (!(M2C_FIELD(&D_800C7650, s32 *, 0x19A60) & 0x20000000)) {
        D_8016EB60_overlay_066[M2C_FIELD(arg0, u8 *, 4)]();
        if (M2C_FIELD(arg0, s16 *, 0x270) == 1) {
            M2C_FIELD(arg0, u8 *, 4) = 0x03000000;
            M2C_FIELD(arg0, s16 *, 0x270) = 0;
        }
    }
}
