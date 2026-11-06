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


extern int (*D_801748F4_overlay_058[])();
M2C_UNK func_8017472C_overlay_058(void *);          /* extern */

void func_8016EC24_overlay_058(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    D_801748F4_overlay_058[M2C_FIELD(arg0, u8 *, 5)]();
    M2C_FIELD(temp_s1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(temp_s1, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(temp_s1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 7);
    M2C_FIELD(temp_s1, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x1E0);
    M2C_FIELD(temp_s1, u16 *, 0x20) = (u16) M2C_FIELD(arg0, u16 *, 0x1E2);
    M2C_FIELD(temp_s1, u16 *, 0x22) = (u16) M2C_FIELD(arg0, u16 *, 0x1E4);
    func_8017472C_overlay_058(arg0);
}
