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

s32 func_80033634_ovl_01();                         /* extern */
void *func_8016FA44_overlay_064(void *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_8016FB84_overlay_064;

void func_8016F2D8_overlay_064(void *arg0) {
    s32 temp_s0;
    u16 temp_v0_5;
    u8 temp_v0;
    u8 temp_v0_3;
    
    void *temp_s1;
    union { void * pointer; unsigned int value; } __repair_phase_storage;

    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        temp_v0 = M2C_FIELD(temp_s1, u8 *, 5) - 1;
        M2C_FIELD(temp_s1, u8 *, 5) = temp_v0;
        if ((temp_v0 & 0xFF) != 0xFF) {
loop_3:
            temp_s0 = M2C_FIELD(temp_s1, s16 *, 6) + (((func_80033634_ovl_01() & 0xF) - 7) * 0x10);
            __repair_phase_storage.pointer = func_8016FA44_overlay_064(arg0, 0x6001, temp_s0, M2C_FIELD(temp_s1, s16 *, 8) + (((func_80033634_ovl_01() & 0xF) - 7) * 0x10));
            if (__repair_phase_storage.pointer != NULL) {
                M2C_FIELD(__repair_phase_storage.pointer, u16 *, 0x1E0) = (u16) M2C_FIELD(temp_s1, s16 *, 6);
                M2C_FIELD(__repair_phase_storage.pointer, u16 *, 0x1E4) = (u16) M2C_FIELD(temp_s1, s16 *, 8);
                temp_v0_3 = *((func_80033634_ovl_01() & 7) + &D_8016FB84_overlay_064);
                M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) temp_v0_3;
                if (temp_v0_3 == 0) {
                    __repair_phase_storage.value = (u8)( M2C_FIELD(temp_s1, u8 *, 5) - 1);
                    M2C_FIELD(temp_s1, u8 *, 5) = ((u8)__repair_phase_storage.value);
                    if ((((u8)__repair_phase_storage.value) & 0xFF) == 0xFF) {
                        goto block_6;
                    }
                    goto loop_3;
                }
                M2C_FIELD(arg0, u8 *, 7) = 1U;
                return;
            }
            goto block_6;
        }
block_6:
        M2C_FIELD(arg0, u8 *, 7) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        return;
    }
    temp_v0_5 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_5;
    if ((temp_v0_5 << 0x10) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 0U;
    }
}
