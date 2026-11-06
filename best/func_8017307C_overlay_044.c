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

M2C_UNK func_80032F24_ovl_01(void *, s16, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80083800_ovl_01(s16, void *, s16 *);   /* extern */
s32 func_8008A974_ovl_01(void *,  M2C_UNK); /* extern */
M2C_UNK func_8016F6B4_overlay_044(void *, void *, M2C_UNK); /* extern */
M2C_UNK func_80172594_overlay_044(void *);          /* extern */
extern M2C_UNK D_80173EF8_overlay_044;

void func_8017307C_overlay_044(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
int __repair_literal;

    union {
        unsigned char bytes[48];
        struct { unsigned char pad[16]; s16 value; } view_sp10;
        struct { unsigned char pad[20]; s16 value; } view_sp14;
    } m2c_initial_frame;

             
    u8 temp_v1;
    u8 temp_v1_2;

    if (M2C_FIELD(arg0, u16 *, 0x26C) & 0x20) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 7);
        if (temp_v1 != 1) {
__repair_literal = 2;

            if ((s32) temp_v1 >= __repair_literal) {
                if (temp_v1 != 2) {
                    return;
                }
                if (M2C_FIELD(arg0, s16 *, 0x1F2) < 0) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x03000000;
                    return;
                }
                goto block_25;
            }
            if (temp_v1 != 0) {
                return;
            }
            func_80077D48_ovl_01(7, arg0);
            func_8016F6B4_overlay_044(arg0, (M2C_FIELD(arg0, u8 *, 0x2CB) * 8) + &D_80173EF8_overlay_044, 1);
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x64;
            M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            func_80032F24_ovl_01(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C4), s16 *, 0x66), 0x80);
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000300;
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) & 0xFFFD);
            goto block_21;
        }
        goto block_21;
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 7);
    if (temp_v1_2 != 1) {
        if ((s32) temp_v1_2 >= 2) {
            if (temp_v1_2 != 2) {
                return;
            }
            if (M2C_FIELD(arg0, s16 *, 0x1F2) >= 0) {
block_25:
                func_80172594_overlay_044(arg0);
                return;
            }
            M2C_FIELD(arg0, s32 *, 4) = 0x03000000;
            return;
        }
        if (temp_v1_2 != 0) {
            return;
        }
        func_80077D48_ovl_01(7, arg0);
        func_8016F6B4_overlay_044(arg0, (M2C_FIELD(arg0, u8 *, 0x2CB) * 8) + &D_80173EF8_overlay_044, 0);
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x64;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        func_80032F24_ovl_01(arg0, (s16) ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C4), s16 *, 0x66) + 0x800), 0x80);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x08000300;
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) & 0xFFFD);
        goto block_21;
    }
block_21:
    if (M2C_FIELD(arg0, s16 *, 0x1E0) > 0) {
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E0) - 6);
    }
    func_80083800_ovl_01(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C4), s16 *, 0x66), arg0 + 0x1E0, &m2c_initial_frame.view_sp10.value);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + m2c_initial_frame.view_sp10.value);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + m2c_initial_frame.view_sp14.value);
    M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + func_8008A974_ovl_01(arg0,  arg1));
}
