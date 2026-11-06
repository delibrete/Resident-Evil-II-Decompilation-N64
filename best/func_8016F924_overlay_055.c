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


extern int (*D_801708D8_overlay_055[])();
M2C_UNK func_8016F264_overlay_055(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8017026C_overlay_055(void *, M2C_UNK); /* extern */

void func_8016F924_overlay_055(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;
    void *temp_s3;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x250) + 0x2B4;
    if ((u8) M2C_FIELD(arg0, u8 *, 6) < 2U) {
        D_801708D8_overlay_055[M2C_FIELD(arg0, u8 *, 6)]();
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C7) != 0) {
        temp_v1 = M2C_FIELD(temp_s3, u8 *, 0xD);
        if (temp_v1 == 7) {
            do { func_8016F264_overlay_055(arg0, arg1, arg2); } while (0);
            M2C_FIELD(arg0, s8 *, 4) = 1;
            return;
        }
        if (temp_v1 == 0x45) {
            func_8016F264_overlay_055(arg0, arg1, arg2);
            M2C_FIELD(arg0, s8 *, 5) = 4;
            M2C_FIELD(arg0, u8 *, 6) = 0;
        }
        goto block_8;
    }
block_8:
    func_8017026C_overlay_055(arg0, 0);
}
