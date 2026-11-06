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

s32 func_8008797C_overlay_001();

void func_8007AB54_ovl_01(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x1AA);
    if (temp_v1 & 0x100) {
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (temp_v1 & 0xFEFF);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0x11A0, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0xD38, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234), 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0x178, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0x758, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0xEB0, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0x1318, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234) + 0xBC0, 1);
        func_8008797C_overlay_001(arg0, M2C_FIELD(arg0, s32 *, 0x234), 1);
    }
}
