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

s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_8004229C_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80089D34_ovl_01();
extern s8 D_80167F4A_overlay_020;
extern s8 D_80167F4B_overlay_020;

void func_80165D9C_ovl_20(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;
    union { void * pointer; s32 value; } __repair_phase_storage;
    void *temp_a2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x2BE) |= 0x52;
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02001F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, u16 *, 0x2BA) |= 1;
        M2C_FIELD(temp_v1_2, s32 *, 0xD38) |= 0x40;
        M2C_FIELD(arg0, u8 *, 0x25C) &= 0xFD;
        M2C_FIELD(arg0, u16 *, 0x2BA) |= 0x200;
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x23) {
            func_80052C9C_ovl_01(8, 0x96, 0);
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            __repair_phase_storage.pointer = M2C_FIELD(arg0, void **, 0x234);
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0xEB0) |= 0x200;
            M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0x11A0) |= 0x200;
            M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0x1028) |= 0x200;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09001F00;
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0xB4U;
            M2C_FIELD(arg0, u8 *, 0x207) = 0U;
        }
        func_80032B8C_ovl_01(arg0, 0);
        temp_a2 = M2C_FIELD(arg0, void **, 0x234);
        func_8004229C_ovl_01(temp_a2 + 0x1B0, temp_a2 + 0xD40, temp_a2 + 0xD70);
        break;
    case 2:
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x207) - 1;
        M2C_FIELD(arg0, u8 *, 0x207) = temp_v0;
        if ((s8) temp_v0 == -1) {
            M2C_FIELD(arg0, u8 *, 0x207) = (u8) ((func_80033634_ovl_01(arg0) & 1) + 1);
            M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) (0x20 - (func_80033634_ovl_01() & 0x3F));
            M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) (0x10 - (func_80033634_ovl_01() & 0x1F));
            M2C_FIELD(arg0, s16 *, 0x1E4) = (s16) (0x10 - (func_80033634_ovl_01() & 0x1F));
        }
        M2C_FIELD(arg0, u16 *, 0x66) += M2C_FIELD(arg0, u16 *, 0x1F6);
        M2C_FIELD(arg0, s32 *, 0x28) += M2C_FIELD(arg0, s16 *, 0x1E0);
        M2C_FIELD(arg0, s32 *, 0x30) += M2C_FIELD(arg0, s16 *, 0x1E4);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
        if ((s16) temp_v0_2 == -1) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s16 *, 0xE54) = 0xFF;
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x1F4) & 3)) {
            temp_s1 = M2C_FIELD(arg0, void **, 0x234);
            temp_s0 = temp_s1 + 0xD38;
            sp10 = M2C_FIELD(temp_s0, u16 *, 0x1E) - ((func_80033634_ovl_01() & 0x7F) - 0x40);
            sp12 = M2C_FIELD(temp_s0, u16 *, 0x22) - ((func_80033634_ovl_01() & 0x7F) - 0x40);
            sp14 = M2C_FIELD(temp_s0, u16 *, 0x26) - ((func_80033634_ovl_01() & 0x7F) - 0x40);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) | 0x91000, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - 0x400), temp_s1 + 0x1B0, &sp10);
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0B001F00;
        M2C_FIELD(arg0, u8 *, 6) = 4U;
        /* fallthrough */
    case 4:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 5U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03001F00;
        }
        break;
    case 5:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            M2C_FIELD(arg0, s8 *, 0x2BC) = 6;
            M2C_FIELD(arg0, u8 *, 0x2BE) &= 0x7F;
            M2C_FIELD(arg0, u16 *, 0x2BA) &= 0xFDFF;
        }
        break;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x1E9) & 0xF)) {
        __repair_phase_storage.value = func_80033634_ovl_01();
        D_80167F4A_overlay_020 = 3 - ((__repair_phase_storage.value & 0xFF) % 6);
        D_80167F4B_overlay_020 = 0xF - ((func_80033634_ovl_01((void *) ((__repair_phase_storage.value & 0xFF) / 6), &D_80167F4A_overlay_020) & 0xFF) % 30);
    }
}
