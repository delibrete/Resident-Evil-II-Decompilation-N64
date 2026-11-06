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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80172778_overlay_041(void *, M2C_UNK); /* extern */
M2C_UNK func_80172CE8_overlay_041(void *, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;

void func_8016F2CC_overlay_041(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
int __repair_constant = -0x50;

    s32 temp_s1;
    s32 var_a1;
    s32 var_a2;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x1E2) = __repair_constant;
        M2C_FIELD(arg0, u8 *, 0x2B5) = 6U;
        M2C_FIELD(arg0, u8 *, 0x2B4) = 2U;
block_15:
        M2C_FIELD(arg0, u8 *, 6) = 5U;
        goto block_16;
    case 2:
        if (func_80033634_ovl_01() & 1) {
            func_80077D48_ovl_01(1, arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x1E2) = -0x3C;
        M2C_FIELD(arg0, u8 *, 0x2B5) = 4U;
        M2C_FIELD(arg0, u8 *, 0x2B4) = 3U;
        goto block_15;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x1E2) = -0x64;
        M2C_FIELD(arg0, u8 *, 0x2B5) = 9U;
        M2C_FIELD(arg0, u8 *, 0x2B4) = 4U;
        goto block_15;
    case 4:
        if (!(func_80033634_ovl_01() & 7)) {
            func_80172CE8_overlay_041(arg0, 1);
        }
        M2C_FIELD(arg0, s16 *, 0x1E2) = __repair_constant;
        M2C_FIELD(arg0, u8 *, 0x2B5) = 0xFFU;
        goto block_15;
    case 0:
        temp_s1 = func_80033634_ovl_01() & 7;
        if (func_80033634_ovl_01() & 1) {
            func_80077D48_ovl_01(1, arg0);
        }
        if (!(func_80033634_ovl_01() & 7)) {
            func_80172CE8_overlay_041(arg0, 1);
        }
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((temp_s1 << 0x10) + 0x07000700);
        M2C_FIELD(arg0, s8 *, 0x2B9) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((func_80033634_ovl_01() & 0x1F) + 0x64);
        M2C_FIELD(arg0, s16 *, 0x1E2) = -0xA;
        M2C_FIELD(arg0, u8 *, 0x2B5) = (u8) (9 - temp_s1);
        M2C_FIELD(arg0, u8 *, 0x2B4) = 1U;
        M2C_FIELD(arg0, u8 *, 6) = 5U;
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) | 1);
block_16:
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0;
        if (!(temp_v0 & 0xFF)) {
            M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x2B4);
        }
        if (func_80033634_ovl_01() & 1) {
            var_a1 = M2C_FIELD(&D_800C7650, s32 *, 0x19AA8) - M2C_FIELD(arg0, s32 *, 0x28);
            var_a2 = M2C_FIELD(&D_800C7650, s32 *, 0x19AB0) - M2C_FIELD(arg0, s32 *, 0x30);
        
        func_80032DEC_ovl_01(arg0, var_a1, var_a2, 0x20);} else {
            var_a1 = M2C_FIELD(&D_800C7650, s32 *, 0x19AA8);
            var_a2 = M2C_FIELD(&D_800C7650, s32 *, 0x19AB0);
        
        func_80032DEC_ovl_01(arg0, var_a1, var_a2, 0x20);}
        func_80032C08_ovl_01(arg0, 0, 0);
        if (M2C_FIELD(arg0, s16 *, 0x1E0) < 0x12C) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E0) + 1);
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            func_80172778_overlay_041(arg0, 4);
        }
        break;
    }
}
