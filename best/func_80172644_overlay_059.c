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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
s32 func_80040BE4_ovl_01(s32, u8 *);                /* extern */
M2C_UNK func_8004DCE8_ovl_01(void *, M2C_UNK, s16, s16); /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80069F4C_ovl_01(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801784D8_overlay_059(void *, s16, s16 *); /* extern */
extern M2C_UNK D_800C7650;
extern s32 D_801126AC;
extern M2C_UNK D_80178DE8_overlay_059;
extern u8 D_80178E28_overlay_059;
extern M2C_UNK func_801126B0_ovl_01;

void func_80172644_overlay_059(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    M2C_UNK var_a0;
    s16 temp_a1;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 var_s1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
s32 __repair_result_var_s0;
    s32 var_v0;
s32 __repair_result_var_v0;
s32 __repair_phase___repair_result_var_v0;
    
    s32 var_v1;
    s8 temp_v1_3;
    u16 temp_a2;
    u16 temp_v0_4;
    
    u32 temp_hi;
    u8 temp_v1;
    u8 temp_v1_2;
    union { void * pointer; s32 value; } __repair_phase_storage;
    void *temp_v1_4;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x13000F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C0) = 0U;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 4);
        func_80052C9C_ovl_01(8, 0x50, 0xF);
        /* fallthrough */
    case 1:                                         /* switch 1 */
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x12) {
            func_80077D48_ovl_01(2, arg0);
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            sp10 = 0x226;
            sp12 = -0x190;
            sp14 = 0;
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C2);
            var_s1 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650, s16 *, 0x19AB2));
            switch (temp_v1) {                    /* switch 2 */
            case 1:                                 /* switch 2 */
                __repair_result_var_s0 = func_80033634_ovl_01();
                __repair_result_var_v0 = func_80033634_ovl_01();
                var_v1 = var_s1 + 0x200;
block_9:
                var_s1 = var_v1 - ((((s32) (__repair_result_var_s0 & 0xFF) >> (__repair_result_var_v0 & 3)) & 1) << 0xA);
                break;
            case 2:                                 /* switch 2 */
                __repair_phase___repair_result_var_v0 = func_80033634_ovl_01();
                var_s1 = (var_s1 + 0x400) - ((((s32) (__repair_phase___repair_result_var_v0 & 0xFF) >> (func_80033634_ovl_01() & 3)) & 1) << 0xB);
                break;
            case 3:                                 /* switch 2 */
                var_s0 = func_80033634_ovl_01();
                var_v0 = func_80033634_ovl_01();
                var_v1 = var_s1 + 0xA00;
                goto block_9;
            case 4:                                 /* switch 2 */
                var_s1 += 0x800;
                break;
            case 5:                                 /* switch 2 */
                temp_v1_3 = (D_80178E28_overlay_059 + (((func_80033634_ovl_01() & 0xFF) % 3) + 3)) & 7;
                M2C_FIELD(arg0, s8 *, 0x207) = temp_v1_3;
                if ((u8) D_80178E28_overlay_059 >= 8U) {
                    M2C_FIELD(arg0, s8 *, 0x207) = (s8) (temp_v1_3 + 8);
                }
                
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0x207) * 4) + &D_80178DE8_overlay_059), s16 *, 0);
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0x207) * 4) + &D_80178DE8_overlay_059), s16 *, 2);
                temp_hi = MULTU_HI(func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2), &D_80178E28_overlay_059), 0xCCCCCCCD);
                sp12 = -0x258;
                sp10 = (s16) (temp_hi >> 2);
                __repair_phase_storage.pointer = (M2C_FIELD(arg0, s8 *, 0x207) * 4) + &D_80178DE8_overlay_059;
                var_s1 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(__repair_phase_storage.pointer, s16 *, 0), M2C_FIELD(__repair_phase_storage.pointer, s16 *, 2));
                break;
            }
            do { func_801784D8_overlay_059(arg0, var_s1, &sp10); } while (0);
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) -(s16) (M2C_FIELD(arg0, u16 *, 0x1E0) / 5);
            M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) -(s16) (M2C_FIELD(arg0, u16 *, 0x1E4) / 5);
            func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x80);
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 0x80);
            return;
        }
    default:                                        /* switch 1 */
        return;
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100));
        /* fallthrough */
    case 3:                                         /* switch 1 */
        func_80032DEC_ovl_01(arg0, (s16) M2C_FIELD(&D_800C7650, s32 *, 0x19AA8), (s16) M2C_FIELD(&D_800C7650, s32 *, 0x19AB0), 0x100);
        temp_a3 = (s16) M2C_FIELD(arg0, u16 *, 0x1E4);
        temp_a2 = M2C_FIELD(arg0, u16 *, 0x2C0);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x1E2));
        temp_a2_2 = (s16) M2C_FIELD(arg0, u16 *, 0x1E0);
        M2C_FIELD(arg0, u16 *, 0x2C0) = (u16) (temp_a2 + 2);
        M2C_FIELD(arg0, s16 *, 0x1E2) = (s16) (((u16) M2C_FIELD(arg0, s16 *, 0x1E2) + 0x8C) - temp_a2);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + temp_a2_2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + temp_a3);
        func_8004DCE8_ovl_01(arg0, 0x400, temp_a2_2, temp_a3);
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x25E);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - (s16) M2C_FIELD(arg0, u16 *, 0x1E0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - (s16) M2C_FIELD(arg0, u16 *, 0x1E4));
        if (temp_a1 < M2C_FIELD(arg0, s32 *, 0x2C)) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a1;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x14060800;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFF7B);
            var_a0 = 4;
            if (temp_a1 == 0) {
                var_a0 = 3;
            }
            func_80077D48_ovl_01(var_a0, arg0);
            func_80052C9C_ovl_01(8, 0x64, 0);
        }
        sp18 = M2C_FIELD(arg0, s32 *, 0x120);
        sp1C = M2C_FIELD(arg0, s32 *, 0x124);
        sp20 = M2C_FIELD(arg0, s32 *, 0x128);
        __repair_phase_storage.value = func_80069F4C_ovl_01(&sp18, 0x578, 0x400, 0) << 0x10;
        if (D_801126AC != 0) {
            __repair_phase_storage.value = M2C_FIELD(&func_801126B0_ovl_01, u16 *, 2) << 0x10;
        }
        if (__repair_phase_storage.value == 0) {
            M2C_FIELD(arg0, s8 *, 0x1A2) = 0;
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFDF);
        }
        if (M2C_FIELD(arg0, s32 *, 0x2C) >= -0xE0F) {
            M2C_FIELD(arg0, s8 *, 0x1A2) = 0;
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFDF);
        }
block_33:
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + (s16) M2C_FIELD(arg0, u16 *, 0x1E0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + (s16) M2C_FIELD(arg0, u16 *, 0x1E4));
        break;
    case 4:                                         /* switch 1 */
        temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x1E0) + (u16) M2C_FIELD(arg0, s16 *, 0x1F4);
        M2C_FIELD(arg0, u16 *, 0x1E0) = temp_v0_4;
        if ((temp_v0_4 & 0x8000) == (M2C_FIELD(arg0, s16 *, 0x1F4) & 0x8000)) {
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0U;
        }
        temp_v0_4 = M2C_FIELD(arg0, u16 *, 0x1E4) + (u16) M2C_FIELD(arg0, s16 *, 0x1F6);
        M2C_FIELD(arg0, u16 *, 0x1E4) = temp_v0_4;
        if ((temp_v0_4 & 0x8000) == (M2C_FIELD(arg0, s16 *, 0x1F6) & 0x8000)) {
            M2C_FIELD(arg0, u16 *, 0x1E4) = 0U;
        }
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
            M2C_FIELD(arg0, s8 *, 0x2CF) = 0x3C;
            M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
            if (M2C_FIELD(arg0, u8 *, 0x2C2) == 5) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
            }
        }
        goto block_33;
    }
}
