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
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801636DC_overlay_027(void *, M2C_UNK); /* extern */

void func_80162770_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2C7) = 1;
        M2C_FIELD(arg0, s16 *, 0x2C2) = 0x400;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((func_80033634_ovl_01() & 7) << 0x10);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x2BF);
        if ((temp_v1 == 1) && (M2C_FIELD(arg0, u8 *, 0x2C6) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x02020000;
            M2C_FIELD(arg0, s8 *, 0x2BE) = 0;
            M2C_FIELD(arg0, u8 *, 0x206) = temp_v1;
        }
    }
    func_801636DC_overlay_027(arg0, 0);
}
