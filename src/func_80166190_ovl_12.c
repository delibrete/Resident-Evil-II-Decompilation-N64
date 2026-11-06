/* identical to func_80172D20_overlay_040 (matched), with its names changed by decompdecomp */
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


extern int (*D_80166EE8_overlay_012[])();
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80166900_ovl_12(void *, s32, M2C_UNK); /* extern */

void func_80166190_ovl_12(void *arg0) {
    u8 temp_v0;

    D_80166EE8_overlay_012[M2C_FIELD(arg0, u8 *, 6)]();
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x207) + 1;
    M2C_FIELD(arg0, u8 *, 0x207) = temp_v0;
    if (temp_v0 & 1) {
        func_80166900_ovl_12(arg0, func_80033634_ovl_01() & 0xF, 0xB);
        func_80166900_ovl_12(arg0, func_80033634_ovl_01() & 0xF, 0xB);
    }
}
