/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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


extern int (*D_801665F0_overlay_035[])();
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_801644C4_overlay_035(void *);          /* extern */
M2C_UNK func_801661F0_overlay_035(void *, M2C_UNK, u8); /* extern */
M2C_UNK func_80166324_overlay_035(u8, u8);          /* extern */
extern M2C_UNK D_80166700_overlay_035;
extern M2C_UNK D_80166714_overlay_035;

void func_80164354_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v1;
    u8 temp_a2;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 5) - 1;
    temp_a2 = *(temp_v1 + &D_80166714_overlay_035);
    temp_s0 = (char *)(arg0); temp_s0 += (s32)(0x2B4);
    if ((temp_a2 != 0) && (M2C_FIELD(temp_s0, u8 *, 0x11) == 0)) {
        func_80166324_overlay_035(*(temp_v1 + &D_80166700_overlay_035), temp_a2);
    } else {
        func_801661F0_overlay_035(arg0, 0, M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_80166700_overlay_035), u8 *, -1));
    }
    if (M2C_FIELD(temp_s0, u8 *, 0x23) == 0) {
        func_80077D48_ovl_01(3, arg0);
    }
    M2C_FIELD(temp_s0, u8 *, 0x23) = 0U;
    func_801644C4_overlay_035(arg0);
    M2C_FIELD(arg0, u8 *, 0x2D6) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(temp_s0, u8 *, 0xC) << 0x10) + (M2C_FIELD(temp_s0, u8 *, 0xD) << 8) + M2C_FIELD(temp_s0, u8 *, 0xE) + 0x01000000);
    M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) M2C_FIELD(temp_s0, u16 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x1E2) = (u16) M2C_FIELD(temp_s0, u16 *, 0x1E);
    M2C_FIELD(arg0, u16 *, 0x1E4) = (u16) M2C_FIELD(temp_s0, u16 *, 0x20);
    D_801665F0_overlay_035[M2C_FIELD(arg0, u8 *, 5)](arg0, arg1, arg2);
    M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(temp_s0, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(temp_s0, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 7);
    M2C_FIELD(temp_s0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0x1E0);
    M2C_FIELD(temp_s0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x1E2);
    M2C_FIELD(temp_s0, u16 *, 0x20) = (u16) M2C_FIELD(arg0, u16 *, 0x1E4);
}
