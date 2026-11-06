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

M2C_UNK func_8004A028_ovl_01(s32, void *, s32 *);   /* extern */
M2C_UNK func_80082230_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800838F0_ovl_01(void *, void *, void *, M2C_UNK *); /* extern */
s32 func_801700BC_overlay_043(M2C_UNK, s16, M2C_UNK); /* extern */
s32 func_80170184_overlay_043(M2C_UNK, s16, M2C_UNK); /* extern */
extern M2C_UNK D_800E1C00;
extern s32 D_800E8CA0;

void func_8016FCFC_overlay_043(void *arg0) {
    union {
        unsigned char bytes[96];
        struct { unsigned char pad[16]; s32 value; } view_sp10;
        struct { unsigned char pad[20]; s32 value; } view_sp14;
        struct { unsigned char pad[24]; s32 value; } view_sp18;
        struct { unsigned char pad[28]; s32 value; } view_sp1C;
        struct { unsigned char pad[32]; s32 value; } view_sp20;
        struct { unsigned char pad[36]; s32 value; } view_sp24;
        struct { unsigned char pad[40]; s32 value; } view_sp28;
        struct { unsigned char pad[44]; s32 value; } view_sp2C;
        struct { unsigned char pad[64]; M2C_UNK value; } view_sp40;
    } m2c_initial_frame;

             
                 
    s16 temp_v1_3;
    s16 var_v1;
    
    s32 temp_s0;
    s32 temp_v1_2;
s32 __repair_phase_temp_v1_2;
    
    u16 temp_a0_2;
    u8 temp_v1;
    u8 var_v0;
    void *temp_s0_2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    func_80082230_ovl_01(&m2c_initial_frame.view_sp40.value, 0, 8);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2C2);
    switch (temp_v1) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
        func_80083788_ovl_01(&D_800E8CA0, 0x1DU);
        M2C_FIELD(arg0, u8 *, 0x2C2) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C2) + 1);
        /* fallthrough */
    case 2:
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_801700BC_overlay_043(0xD, M2C_FIELD(arg0, s16 *, 0x1F6), 0xF0));
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + func_801700BC_overlay_043(0xD, M2C_FIELD(arg0, s16 *, 0x1F6), -0x140));
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F6) + 1);
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x30);
        if ((M2C_FIELD(&D_800E1C00, s32 *, 0x30) - temp_v1_2) < 0x1FA4) {
            M2C_FIELD(&D_800E1C00, s32 *, 0x30) = (s32) (temp_v1_2 + 0x1FA4);
        }
        __repair_phase_temp_v1_2 = temp_s0 + 0x908;
        if (M2C_FIELD(arg0, s16 *, 0x1F6) == 0xD) {
            temp_s0_2 = (char *)(&D_800E1C00); temp_s0_2 += (s32)(0x44);
            M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
            M2C_FIELD(&D_800E1C00, s32 *, 0x70) = __repair_phase_temp_v1_2;
            M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFB);
            func_8004A028_ovl_01(__repair_phase_temp_v1_2, temp_s0_2, &m2c_initial_frame.view_sp10.value);
            M2C_FIELD(&D_800E1C00, s32 *, 0x30) = m2c_initial_frame.view_sp2C.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x28) = m2c_initial_frame.view_sp24.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x2C) = m2c_initial_frame.view_sp28.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x44) = m2c_initial_frame.view_sp10.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x48) = m2c_initial_frame.view_sp14.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x4C) = m2c_initial_frame.view_sp18.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x50) = m2c_initial_frame.view_sp1C.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x54) = m2c_initial_frame.view_sp20.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x58) = m2c_initial_frame.view_sp24.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x5C) = m2c_initial_frame.view_sp28.value;
            M2C_FIELD(&D_800E1C00, s32 *, 0x60) = m2c_initial_frame.view_sp2C.value;
            func_800838F0_ovl_01(&D_800E1C00 + 0x28, &D_800E1C00 + 0x64, temp_s0_2, &m2c_initial_frame.view_sp40.value);
            var_v0 = M2C_FIELD(arg0, u8 *, 0x2C2) + 1;
block_23:
            M2C_FIELD(arg0, u8 *, 0x2C2) = var_v0;
            return;
        }
    default:
        return;
    case 3:
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_801700BC_overlay_043(6, M2C_FIELD(arg0, s16 *, 0x1F6), -0x8C));
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + func_801700BC_overlay_043(6, M2C_FIELD(arg0, s16 *, 0x1F6), -0x3C));
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F6) + 1);
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x28) != 0x6D6) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x28, 0x6D6, 0x46, M2C_ERROR(/* Read from unset register $a3 */));
        }
        var_v1 = M2C_FIELD(arg0, s16 *, 0x1F6);
        temp_v1_2 = 6;
block_21:
        if (var_v1 == temp_v1_2) {
            M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
            var_v0 = M2C_FIELD(arg0, u8 *, 0x2C2) + 1;
            goto block_23;
        }
        break;
    case 4:
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_80170184_overlay_043(6, M2C_FIELD(arg0, s16 *, 0x1F6), -0x8C));
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + func_80170184_overlay_043(6, M2C_FIELD(arg0, s16 *, 0x1F6), -0x3C));
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F6) + 1);
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x28) != 0x6D6) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x28, 0x6D6, 0x91, M2C_ERROR(/* Read from unset register $a3 */));
        }
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x2C) != -0xD2) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x2C, -0xD2, 0x19, M2C_ERROR(/* Read from unset register $a3 */));
        }
        var_v1 = M2C_FIELD(arg0, s16 *, 0x1F6);
        temp_v1_2 = 6;
        goto block_21;
    case 5:
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_801700BC_overlay_043(7, M2C_FIELD(arg0, s16 *, 0x1F6), 0x4B));
        M2C_FIELD(arg0, u16 *, 0x2C4) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C4) + func_801700BC_overlay_043(7, M2C_FIELD(arg0, s16 *, 0x1F6), 0x64));
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F6) + 1);
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x28) != 0x6D6) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x28, 0x6D6, 0x64, M2C_ERROR(/* Read from unset register $a3 */));
        }
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x2C) != -0xD2) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x2C, -0xD2, 0x37, M2C_ERROR(/* Read from unset register $a3 */));
        }
        var_v1 = M2C_FIELD(arg0, s16 *, 0x1F6);
        temp_v1_2 = 7;
        goto block_21;
    case 6:
        M2C_FIELD(arg0, u16 *, 0x2C6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C6) + func_80170184_overlay_043(7, M2C_FIELD(arg0, s16 *, 0x1F6), 0x4B));
        temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x2C4) + func_80170184_overlay_043(7, M2C_FIELD(arg0, s16 *, 0x1F6), 0x64);
        temp_v1_3 = (u16) M2C_FIELD(arg0, s16 *, 0x1F6) + 1;
        M2C_FIELD(arg0, s16 *, 0x1F6) = temp_v1_3;
        var_v1 = temp_v1_3;
        temp_v1_2 = 7;
        M2C_FIELD(arg0, u16 *, 0x2C4) = temp_a0_2;
        goto block_21;
    case 7:
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x28) != 0x6D6) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x28, 0x6D6, 0x64, M2C_ERROR(/* Read from unset register $a3 */));
        }
        if (M2C_FIELD(&D_800E1C00, s32 *, 0x2C) != -0xD2) {
            func_80036764_ovl_01_510_24(&D_800E1C00 + 0x2C, -0xD2, 0x1E, M2C_ERROR(/* Read from unset register $a3 */));
        }
        break;
    }
}
