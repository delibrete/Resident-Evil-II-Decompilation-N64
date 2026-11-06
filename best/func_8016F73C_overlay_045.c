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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK);          /* extern */
s16 func_801710F8_overlay_045(void *);              /* extern */
M2C_UNK func_80173CFC_overlay_045(void *, s32, s16); /* extern */

s32 func_8016F73C_overlay_045(void *arg0) {
int __repair_literal;

int __repair_constant = 0x89;

    s32 var_s1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    if (temp_v1 != 1) {
__repair_literal = 2;

        if ((s32) temp_v1 < __repair_literal) {
            if (temp_v1 != 0) {
                return 0;
            }
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0A000300;
            goto block_8;
        }
        switch (temp_v1) {                          /* irregular */
        case 2:
            if (func_80089D34_ovl_01(arg0, 0x400) != 0) {
                M2C_FIELD(arg0, u8 *, 7) = 3U;
            }
            goto block_20;
        case 3:
            return 1;
        default:
            return 0;
        }
    } else {
block_8:
        func_80089D34_ovl_01(arg0, 0x400);
        if (*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            func_80077D48_ovl_01(3, arg0);
            if ((u8) M2C_FIELD(arg0, u8 *, 0x2BE) < 2U) {
                func_80173CFC_overlay_045(arg0, M2C_FIELD(arg0, u8 *, 0x2BE) + 8, (s16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(arg0, u16 *, 0x2B6)));
                return 0;
            }
            if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
                var_s1 = __repair_constant;
                if ((u32) (M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF) >= 0xBB8U) {
                    var_s1 = 0x88;
                }
            } else {
                var_s1 = __repair_constant;
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0xBB8U) {
                    var_s1 = 0x88;
                }
            }
            func_80173CFC_overlay_045(arg0, var_s1, func_801710F8_overlay_045(arg0));
            return 0;
        }
block_20:
        return 0;
    }
}
