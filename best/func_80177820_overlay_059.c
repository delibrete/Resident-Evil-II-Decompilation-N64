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

s32 func_80033634_ovl_01();

void func_80177820_overlay_059(void *arg0, void *arg1) {
    s16 temp_a0_8;
    s16 var_v1;
    s32 temp_s0;
    s32 temp_s1;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_5;
    void *temp_a0;
    void *temp_a0_10;
    
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C5);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u8 *, 0x2C5) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C6) = 0U;
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v0, u16 *, 0x10) += M2C_FIELD(arg0, u16 *, 0x2C6);
        var_v1 = (s16) M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        if (var_v1 < 0) {
            var_v1 += 3;
        }
        M2C_FIELD(temp_a0, u16 *, 0x14) += (var_v1 >> 2);
        M2C_FIELD(arg0, u16 *, 0x2C6) += 4;
        temp_v1_2 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_2, u16 *, 0x18) = (u16) ((s32) (M2C_FIELD(temp_v1_2, u16 *, 0x18) << 0x10) >> 0x11);
        temp_v1_3 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_3, u16 *, 0x14) >= 0x401) {
            M2C_FIELD(temp_v1_3, u16 *, 0x14) = 0x400U;
        }
        temp_a1 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_a1, u16 *, 0x10) >= 0xC01) {
            M2C_FIELD(temp_a1, u16 *, 0x10) = 0xC00U;
            M2C_FIELD(arg0, u8 *, 0x2C5) = 2U;
            return;
        }
    default:
        return;
    case 2:
        temp_a0_2 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_2, u16 *, 0x10) -= M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_a0_3 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_3, u16 *, 0x14) += M2C_FIELD(arg0, u16 *, 0x2C6);
        M2C_FIELD(arg0, u16 *, 0x2C6) += 8;
        temp_a1_2 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_a1_2, u16 *, 0x14) >= 0x1001) {
            M2C_FIELD(temp_a1_2, u16 *, 0x14) = 0x1000U;
            M2C_FIELD(arg0, u8 *, 0x2C5) = 3U;
            M2C_FIELD(arg0, u16 *, 0x2C6) = 0U;
            M2C_FIELD(arg0, u8 *, 0x2CA) = 0xAU;
            temp_s0 = func_80033634_ovl_01(temp_a0_3, temp_a1_2);
            temp_s1 = func_80033634_ovl_01();
            M2C_FIELD(arg0, s16 *, 0x2C8) = (s16) ((func_80033634_ovl_01() & 0xFF) + ((temp_s1 & 0xFF) + (((temp_s0 & 0xFF) * 2) + 0x400)));
            return;
        }
        break;
    case 3:
        temp_v1_4 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_4, u16 *, 0x10) = (u16) ((s32) (M2C_FIELD(temp_v1_4, u16 *, 0x10) << 0x10) >> 0x11);
        temp_a0_4 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_4, u16 *, 0x14) -= M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_a0_5 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_5, u16 *, 0x18) += M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x2C6) + 0x20;
        M2C_FIELD(arg0, u16 *, 0x2C6) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x101) {
            M2C_FIELD(arg0, u16 *, 0x2C6) = 0x100U;
        }
        temp_a0_6 = M2C_FIELD(arg1, void **, 0x120);
        if (M2C_FIELD(arg0, s16 *, 0x2C8) < (s16) M2C_FIELD(temp_a0_6, u16 *, 0x18)) {
            M2C_FIELD(temp_a0_6, u16 *, 0x18) = (u16) M2C_FIELD(arg0, s16 *, 0x2C8);
            temp_a0_7 = M2C_FIELD(arg1, void **, 0x120);
            M2C_FIELD(temp_a0_7, u16 *, 0x14) = (u16) (0x1000 - (u16) M2C_FIELD(arg0, s16 *, 0x2C8));
            M2C_FIELD(arg0, u8 *, 0x2C5) = 4U;
            M2C_FIELD(arg0, u16 *, 0x2C6) = 0U;
            temp_a0_8 = (u16) M2C_FIELD(arg0, s16 *, 0x2C8) - ((func_80033634_ovl_01(temp_a0_7) & 0xFF) + 0x264);
            temp_v1_5 = M2C_FIELD(arg0, u8 *, 0x2CA) - 1;
            M2C_FIELD(arg0, u8 *, 0x2CA) = temp_v1_5;
            M2C_FIELD(arg0, s16 *, 0x2C8) = temp_a0_8;
            if ((s8) temp_v1_5 == -1) {
                M2C_FIELD(arg0, u8 *, 0x2C5) = 5U;
                return;
            }
        }
        break;
    case 4:
        temp_a0_9 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_9, u16 *, 0x14) += M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_a0_10 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0_10, u16 *, 0x18) -= M2C_FIELD(arg0, u16 *, 0x2C6);
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x2C6) + 8;
        M2C_FIELD(arg0, u16 *, 0x2C6) = temp_v0_3;
        if ((s16) temp_v0_3 >= 0x41) {
            M2C_FIELD(arg0, u16 *, 0x2C6) = 0x40U;
        }
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_a0, u16 *, 0x18) < M2C_FIELD(arg0, s16 *, 0x2C8)) {
            M2C_FIELD(temp_a0, u16 *, 0x14) = (u16) (0x1000 - (u16) M2C_FIELD(arg0, s16 *, 0x2C8));
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x120), u16 *, 0x18) = (u16) M2C_FIELD(arg0, s16 *, 0x2C8);
            M2C_FIELD(arg0, u8 *, 0x2C5) = 3U;
            M2C_FIELD(arg0, u16 *, 0x2C6) = 0U;
            M2C_FIELD(arg0, s16 *, 0x2C8) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x2C8) + ((func_80033634_ovl_01(temp_a0) & 0xFF) + 0x2C8));
            return;
        }
        break;
    case 5:
        temp_v1_6 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_6, u16 *, 0x14) -= 0x20;
        temp_v1_7 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v1_7, u16 *, 0x18) -= 0x20;
        temp_v1_8 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_8, u16 *, 0x18) < 0) {
            M2C_FIELD(temp_v1_8, u16 *, 0x18) = 0U;
        }
        temp_v1_9 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_9, u16 *, 0x14) < 0) {
            M2C_FIELD(temp_v1_9, u16 *, 0x14) = 0U;
        }
        temp_a1_3 = M2C_FIELD(arg1, void **, 0x120);
        if (((s16) M2C_FIELD(temp_a1_3, u16 *, 0x14) == 0) && ((s16) M2C_FIELD(temp_a1_3, u16 *, 0x18) == 0)) {
            M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
            M2C_FIELD(arg0, u8 *, 0x2C5) = 0U;
        }
        break;
    }
}
