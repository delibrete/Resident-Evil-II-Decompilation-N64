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

s32 func_80032DEC_overlay_001();
s32 func_80032EA4_overlay_001();
s32 func_80077F60_overlay_001();
s32 func_80089D34_overlay_001();
extern char D_800C7650_ovl_01[];

s32 func_80081D4C_ovl_01(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 1;
    if (func_80032EA4_overlay_001(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262)) != 0) {
        func_80032DEC_overlay_001(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), M2C_FIELD(arg0, s16 *, 0x270));
        temp_v1 = *M2C_FIELD(arg0, s32 **, 0x214);
        if (temp_v1 & 0x4000) {
            func_80077F60_overlay_001(0, (((u32) (temp_v1 & 0x2000) >> 0xD) * 3) + 4, arg0);
            *(u16 *)(D_800C7650_ovl_01 + 0x19A7A) = (u16) (*(u16 *)(D_800C7650_ovl_01 + 0x19A7A) | 2);
        }
        func_80089D34_overlay_001(arg0,  arg1);
        var_v0 = 0;
    }
    return var_v0;
}
