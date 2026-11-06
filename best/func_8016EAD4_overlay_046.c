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


extern int (*D_8016F85C_overlay_046[])();
s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052C9C_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

void func_8016EAD4_overlay_046(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_a0;
    s32 temp_v1;
    
    s32 var_v0;
    union { void * pointer; s32 value; } __repair_phase_storage;

    D_8016F85C_overlay_046[M2C_FIELD(arg0, u8 *, 6)]();
    __repair_phase_storage.pointer = M2C_FIELD(arg0, void **, 0x2B4);
    temp_a0 = func_80032EA4_ovl_01(arg0, M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0x28), M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0x30), 0x100);
    if (M2C_FIELD(arg0, s16 *, 0x2B8) != 0) {
        M2C_FIELD(arg0, s16 *, 0x2B8) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x2B8) - 1);
    }
    if (__repair_phase_storage.pointer == &D_800E10D0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28C) < 0x7D0;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x290) < 0x7D0;
    }
    if ((var_v0 != 0) && (temp_a0 == 0) && (M2C_FIELD(arg0, s16 *, 0x2B8) == 0) && !(M2C_FIELD(__repair_phase_storage.pointer, u8 *, 0x26F) & 0x80)) {
        M2C_FIELD(arg0, s8 *, 5) = 3;
        M2C_FIELD(arg0, u8 *, 6) = 0;
    }
    if ((u32) M2C_FIELD(arg0, s32 *, 0x28C) < 0x1F4U) {
        if ((M2C_FIELD(&D_800C7650, u16 *, 0x19A7A) & 6) && (M2C_FIELD(arg0, u8 *, 0x1A2) == M2C_FIELD(&D_800E10D0, u8 *, 0x1A2)) && ((temp_v1 = M2C_FIELD(&D_800E10D0, s32 *, 4) & 0xFFFF0000, (temp_v1 == 0x01010000)) || (temp_v1 == 0x01020000) || (temp_v1 == 0x01030000) || (temp_v1 == 0x01040000))) {
            M2C_FIELD(arg0, s32 *, 4) = 0x03000000;
            func_80052C00_ovl_01(1, 0);
            func_80052C9C_ovl_01(3, 0x50, 0);
        }
    }
    if ((M2C_FIELD(&D_800C7650, s32 *, 0x19A5C) & 0x10000000) && (M2C_FIELD(arg0, u8 *, 0x1A2) == M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x19D3C), u8 *, 0x1A2)) && ((u32) (M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF) < 0x1F4U)) {
        __repair_phase_storage.value = M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x19D3C), s32 *, 4) & 0xFFFF0000;
        if ((__repair_phase_storage.value == 0x01010000) || (__repair_phase_storage.value == 0x01020000) || (__repair_phase_storage.value == 0x01030000) || (__repair_phase_storage.value == 0x01040000)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x03000000;
        }
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
}
