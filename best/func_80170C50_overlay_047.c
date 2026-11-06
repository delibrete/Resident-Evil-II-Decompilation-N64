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

extern unsigned short D_800E10CA;
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_8004279C_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];

void func_80170C50_overlay_047(void *arg0, s32 arg1, s32 arg2) {
int __repair_constant = 0xA;

    u16 sp10;
    s16 sp12;
    s16 sp14;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a1;
    char *var_s0;
    
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v1;
    void *temp_s0_2;
    void *temp_s1;
    union { void * pointer; s32 value; } __repair_phase_storage;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *var_s1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {
    case 0:
        var_v1 = __repair_constant;
        var_s1 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0C000000;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x1EU;
        M2C_FIELD(arg0, s8 *, 0x206) = 0x5A;
        do {
            M2C_FIELD(var_s1, s32 *, 0x60) = 0xC0C0C0;
            var_v1 -= 1;
            var_s1 += 0x178;
        } while (var_v1 != 0);
        func_80077D48_ovl_01(7, arg0);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, s8 *, 0x206) == 0x3C) {
            __repair_phase_storage.pointer = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0x178) &= ~0x4000;
        }
        __repair_phase_storage.value = M2C_FIELD(*(void * *)(D_800C7650 + 0x19D40), s32 *, 0x234);
        sp10 = M2C_FIELD(arg0, u16 *, 0x1F4);
        temp_s1 = __repair_phase_storage.value + 0x5E0;
        sp12 = (M2C_FIELD(arg0, u16 *, 0x1F4) / 5) + 0x3C;
        sp14 = 0x40 - (func_80033634_ovl_01(0x66666667) & 0x7F);
        func_8004279C_ovl_01(__repair_phase_storage.value + 0x618, &sp10, &sp10);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((s16) sp10 + M2C_FIELD(temp_s1, s32 *, 0x4C));
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (sp12 + M2C_FIELD(temp_s1, s32 *, 0x50));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (sp14 + M2C_FIELD(temp_s1, s32 *, 0x54));
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        temp_v0_2 = (u8) M2C_FIELD(arg0, s8 *, 0x206) - 1;
        M2C_FIELD(arg0, s8 *, 0x206) = temp_v0_2;
        M2C_FIELD(arg0, u16 *, 0x1F4) += 5;
        if (temp_v0_2 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            return;
        }
    default:
        return;
    case 2:
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        M2C_FIELD(temp_v1_2, s32 *, 0x5E0) &= ~0x4000;
        temp_v1_3 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_3, s32 *, 0x758) &= ~0x4000;
        temp_v1_4 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_4, s32 *, 0x8D0) &= ~0x4000;
        temp_v1_5 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_5, s32 *, 0xA48) &= ~0x4000;
        temp_v1_6 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_6, s32 *, 0xBC0) &= ~0x4000;
        temp_v1_7 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_7, s32 *, 0xD38) &= ~0x4000;
        func_80077D48_ovl_01(7, arg0, -0x4001);
        /* fallthrough */
    case 3:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        M2C_FIELD(arg0, s32 *, 0x2C) += (s16) M2C_FIELD(arg0, u16 *, 0x1F4);
        M2C_FIELD(arg0, u16 *, 0x1F4) += 0x1E;
        if (M2C_FIELD(arg0, s16 *, 0x25E) < M2C_FIELD(arg0, s32 *, 0x2C)) {
            M2C_FIELD(arg0, u8 *, 6) = 4U;
            M2C_FIELD(arg0, s8 *, 0x1A2) = 3;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
            M2C_FIELD(arg0, u8 *, 0x26F) &= 0x7F;
            return;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0B000300;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0x1F) + 0x78);
        M2C_FIELD(arg0, u8 *, 6) = 5U;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 1;
        M2C_FIELD(arg0, s32 *, 0) |= 0x04000000;
        func_80077D48_ovl_01(5, arg0);
        /* fallthrough */
    case 5:
        temp_a0 = M2C_FIELD(arg0, s16 *, 0x1F6);
        M2C_FIELD(arg0, u16 *, 0x212) += 0x12 + (temp_a0 * 0x1E);
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) -temp_a0;
        if ((s16) M2C_FIELD(arg0, u16 *, 0x212) >= 0x1001) {
            M2C_FIELD(arg0, u16 *, 0x212) = 0x1000U;
        }
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) == 0x3C) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000300;
        }
        if ((M2C_FIELD(arg0, u16 *, 0x1F4) & 0x3F) && !(func_80033634_ovl_01(temp_a0) & 0x1F)) {
            func_80077D48_ovl_01(5, arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) (0x10 - (func_80033634_ovl_01() & 0x1F));
        temp_a0_2 = M2C_FIELD(arg0, s16 *, 0x1E0);
        M2C_FIELD(arg0, s16 *, 0x1E4) = (s16) (0x10 - (func_80033634_ovl_01() & 0x1F));
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x1E4);
        M2C_FIELD(arg0, s32 *, 0x28) += temp_a0_2;
        M2C_FIELD(arg0, s32 *, 0x30) += temp_a1;
        M2C_FIELD(arg0, u16 *, 0x66) -= ((func_80033634_ovl_01(temp_a0_2, temp_a1) & 0xFF) - 0x80);
        if ((s16) M2C_FIELD(arg0, u16 *, 0x1F4) < 0x5A) {
            var_v1_2 = __repair_constant;
            var_s0 = M2C_FIELD(arg0, void **, 0x234) + 0x60;
            do {
                var_v1_2 -= 1;
                *var_s0 += 0xFFFEFEFF;
                var_s0 += 0x178;
            } while (var_v1_2 != 0);
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_3;
        if ((s16) temp_v0_3 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x50;
            M2C_FIELD(arg0, s32 *, 0) &= ~0x800;
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x190U) && (D_800E10CA & 6)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x03010100;
            M2C_FIELD(arg0, s8 *, 0x26E) = 0;
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
            temp_s0_2 = arg0 + 0x14;
            func_800377B0_ovl_01(0x81FA0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_2, 0);
            func_800377B0_ovl_01(0x817D0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_2, 0);
            func_800377B0_ovl_01(0x817D0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_2, 0);
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x09000000);
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
            func_80052C00_ovl_01(1, 0);
            func_80052C9C_ovl_01(5, 0x50, 0);
        }
        break;
    }
}
