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
void func_80166FBC_overlay_017();

void func_801658B0_ovl_17(u8 *arg0) {
    s32 x;
    u8 v;

    arg0[6] = 1;
    *(s16 *)(arg0 + 0x1E2) = 0x28;
    x = *(volatile s32 *)(arg0 + 0x2C);
    *(s32 *)(arg0 + 0x1E8) = 0x0C090000;
    v = *(volatile u8 *)(arg0 + 0x2D8);
    *(s16 *)(arg0 + 0x1E0) = 0;
    *(s16 *)(arg0 + 0x1E4) = 0;
    *(s16 *)(arg0 + 0x68) = 0;
    *(volatile s32 *)(arg0 + 0x2C) = x + 0x320;
    if (v != 1) {
        func_80166FBC_overlay_017(arg0, 0);
    }
}
