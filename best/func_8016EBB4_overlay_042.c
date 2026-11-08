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

s32 func_8006A81C_ovl_01(s32);                      /* extern */
M2C_UNK func_8008386C_ovl_01(s16, s32, s16 *, s16 *); /* extern */
extern M2C_UNK D_801751D8_overlay_042;
extern M2C_UNK D_801754D0_overlay_042;
extern M2C_UNK D_80175868_overlay_042;

void func_8016EBB4_overlay_042(void *arg0) {
    union {
        unsigned char bytes[32];
        struct { unsigned char pad[16]; s16 value; } view_sp10;
        struct { unsigned char pad[18]; s16 value; } view_sp12;
        struct { unsigned char pad[20]; s16 value; } view_sp14;
    } m2c_initial_frame;

             
             
    s32 temp_a0;

    m2c_initial_frame.view_sp10.value = M2C_UNALIGNED32(M2C_FIELD(&D_801751D8_overlay_042, M2C_UNK *, 0));
    m2c_initial_frame.view_sp14.value = M2C_UNALIGNED32(M2C_FIELD(&D_801751D8_overlay_042, M2C_UNK *, 4));
    func_8008386C_ovl_01(M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x70), &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s16 *, 0x2D0) + m2c_initial_frame.view_sp10.value);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + m2c_initial_frame.view_sp12.value);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s16 *, 0x2D4) + m2c_initial_frame.view_sp14.value);
    temp_a0 = func_8006A81C_ovl_01(M2C_FIELD(arg0, s32 *, 0x70)) * 0x18;
    M2C_FIELD(&D_80175868_overlay_042, u16 *, 0) = (u16) *((M2C_FIELD(arg0, u8 *, 0x2B4) * 6) + temp_a0 + &D_801754D0_overlay_042);
    M2C_FIELD(&D_80175868_overlay_042, u16 *, 2) = (u16) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x2B4) * 6) + temp_a0 + &D_801754D0_overlay_042), u16 *, 2);
    M2C_FIELD(&D_80175868_overlay_042, u16 *, 4) = (u16) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x2B4) * 6) + temp_a0 + &D_801754D0_overlay_042), u16 *, 4);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~8);
}
