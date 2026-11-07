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
s32 func_800662B8_ovl_01();
extern s8 D_801762FA_overlay_057;
extern s8 D_801762FB_overlay_057;

void func_80175D28_overlay_057(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    u32 var_a2;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    var_a2 = arg2;
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2BD);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_v0, u16 *, 0xC) += 0x400;
        temp_v1_2 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_2, u16 *, 0xC) >= 0x1001) {
            M2C_FIELD(temp_v1_2, u16 *, 0xC) = 0x1000U;
            M2C_FIELD(arg0, u8 *, 0x2BD) = 1U;
            M2C_FIELD(arg0, u16 *, 0x2BE) = 0U;
            temp_v0_2 = func_80033634_ovl_01(arg0);
            var_a2 = temp_v0_2 & 0xFF;
    D_801762FB_overlay_057 = 7 - ((var_a2) % 14);
            temp_v0_3 = func_80033634_ovl_01((void *) ((temp_v0_2 & 0xFF) / 14), &D_801762FB_overlay_057, MULTU_HI(((u32) (temp_v0_2 & 0xFF) >> 1), 0x92492493));
            var_a2 = MULTU_HI(((u32) (temp_v0_3 & 0xFF) >> 1), 0x92492493);
            D_801762FA_overlay_057 = 7 - ((temp_v0_3 & 0xFF) % 14);
        }
        break;
    case 1:
        temp_a0 = M2C_FIELD(arg1, void **, 0x120);
        M2C_FIELD(temp_a0, u16 *, 0xC) -= M2C_FIELD(arg0, u16 *, 0x2BE);
        M2C_FIELD(arg0, u16 *, 0x2BE) += 0x64;
        temp_v1_3 = M2C_FIELD(arg1, void **, 0x120);
        if ((s16) M2C_FIELD(temp_v1_3, u16 *, 0xC) < 0) {
            M2C_FIELD(temp_v1_3, u16 *, 0xC) = 0U;
            M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
            M2C_FIELD(arg0, u8 *, 0x2BD) = 0U;
            D_801762FB_overlay_057 = 0;
            D_801762FA_overlay_057 = 0;
        }
        break;
    }
    func_800662B8_ovl_01(arg0);
}
