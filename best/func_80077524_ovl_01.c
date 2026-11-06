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

s32 func_80078B70_overlay_001();
s32 func_800790D4_overlay_001();
s32 func_800793D4_overlay_001();
s32 func_80079448_overlay_001();
extern char D_800C7650_overlay_001[];
extern u8 D_80119E10_overlay_001;
extern u8 D_80119E11_overlay_001;
extern u8 D_80119E12_overlay_001;
extern char D_80119E1C_overlay_001[];
extern char D_80119E84_overlay_001[];

void func_80077524_ovl_01(void) {
    s16 temp_a2;
    s16 temp_v1;
    s32 var_s1;
    u8 temp_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *var_s0;

    if (!(*(s32 *)(D_800C7650_overlay_001 + 0x19A3C) & 0x2000)) {
        temp_s0 = D_80119E10_overlay_001;
        switch (temp_s0) {                          /* irregular */
        case 0:
            if ((u8) *(u8 *)(D_80119E84_overlay_001 + 0) >= 6U) {
                temp_v0 = *(u8 *)(D_80119E84_overlay_001 + 0) - 1;
                *(u8 *)(D_80119E84_overlay_001 + 0) = temp_v0;
                if ((temp_v0 & 0xFF) == 5) {
                    *(u8 *)(D_80119E84_overlay_001 + 0) = 0U;
                    if ((func_80079448_overlay_001(*(s8 *)(D_80119E84_overlay_001 + 2), 0, &D_80119E84_overlay_001) << 0x10) != 0) {
                        func_800790D4_overlay_001(*(s8 *)(D_80119E84_overlay_001 + 2));
                    }
                }
            }
            if ((u8) *(u8 *)(D_80119E84_overlay_001 + 8) >= 6U) {
                temp_v0_2 = *(u8 *)(D_80119E84_overlay_001 + 8) - 1;
                *(u8 *)(D_80119E84_overlay_001 + 8) = temp_v0_2;
                if ((temp_v0_2 & 0xFF) == 5) {
                    *(u8 *)(D_80119E84_overlay_001 + 8) = 0U;
                    if ((func_80079448_overlay_001(*(s8 *)(D_80119E84_overlay_001 + 0xA), 0) << 0x10) != 0) {
                        func_800790D4_overlay_001(*(s8 *)(D_80119E84_overlay_001 + 0xA));
                    }
                }
            }
            temp_v0_3 = *(u8 *)(D_80119E84_overlay_001 + 0x10) - 1;
            if ((u8) *(u8 *)(D_80119E84_overlay_001 + 0x10) >= 6U) {
                *(u8 *)(D_80119E84_overlay_001 + 0x10) = temp_v0_3;
                if ((temp_v0_3 & 0xFF) == 5) {
                    *(u8 *)(D_80119E84_overlay_001 + 0x10) = 0U;
                    if ((func_80079448_overlay_001(*(s8 *)(D_80119E84_overlay_001 + 0x12), 0) << 0x10) != 0) {
                        func_800790D4_overlay_001(*(s8 *)(D_80119E84_overlay_001 + 0x12));
                        return;
                    }
                }
            }
            break;
        case 1:
            D_80119E11_overlay_001 -= 1;
            if (D_80119E12_overlay_001 == 0x18) {
                temp_a2 = (*(u16 *)(D_80119E1C_overlay_001 + 0) * 0x62) / 100;
                *(u16 *)(D_80119E1C_overlay_001 + 0) = (u16) temp_a2;
                temp_v1 = (*(u16 *)(D_80119E1C_overlay_001 + 2) * 0x62) / 100;
                *(u16 *)(D_80119E1C_overlay_001 + 2) = (u16) temp_v1;
                do { func_800793D4_overlay_001(temp_a2, temp_v1, temp_a2, &D_80119E1C_overlay_001); } while (0);
            }
            var_s1 = 3;
            if (D_80119E11_overlay_001 == temp_s0) {
                var_s0 = (D_80119E84_overlay_001 + 0x18) - 8;
                do {
                    var_s1 -= 1;
                    if (M2C_FIELD(var_s0, u8 *, 0) != 0) {
                        M2C_FIELD(var_s0, u8 *, 0) = 0U;
                        if ((func_80079448_overlay_001(M2C_FIELD(var_s0, s8 *, 2), 0) << 0x10) != 0) {
                            func_800790D4_overlay_001(M2C_FIELD(var_s0, s8 *, 2));
                        }
                    }
                    var_s0 -= 8;
                } while (var_s1 != 0);
                if (D_80119E12_overlay_001 == 0x18) {
                    *(u16 *)(D_80119E1C_overlay_001 + 0) = 0x7F007F;
                    func_800793D4_overlay_001((s16) *(u16 *)(D_80119E1C_overlay_001 + 0), (s16) *(u16 *)(D_80119E1C_overlay_001 + 2));
                }
                D_80119E10_overlay_001 = 2;
                return;
            }
            break;
        case 2:
            if (!(*(s32 *)(D_800C7650_overlay_001 + 0x19A3C) & 0x02000000)) {
                func_80078B70_overlay_001(0);
            }
            D_80119E11_overlay_001 = 0;
            D_80119E10_overlay_001 = 0;
            break;
        }
    }
}
