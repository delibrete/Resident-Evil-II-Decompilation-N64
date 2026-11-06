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

s32 func_80032EA4_ovl_01();
extern char D_800C7650[];

void func_8016FAFC_overlay_059(void *arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    u32 temp_s2;

    temp_s2 = M2C_FIELD(arg0, u32 *, 0x28C);
    func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), (void *)0x5F4);
    temp_s0 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0));
    temp_v1 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x400);
    if ((temp_s0 << 0x10) == 0) {
        var_v0 = temp_v1 << 0x10;
        if (temp_s2 < 0xFA0U) {
            var_v0 = temp_v1 << 0x10;
            if (M2C_FIELD(arg0, u8 *, 0x2BA) == 0) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
                goto block_4;
            }
        }
    } else {
block_4:
        var_v0 = temp_v1 << 0x10;
    }
    if ((var_v0 == 0) && (temp_s2 < 0x7D0U)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01080000;
    }
    if (M2C_FIELD(arg0, s16 *, 0x1F2) < 0x2BC) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        M2C_FIELD(arg0, u8 *, 0x26F) |= 0x80;
    }
}
