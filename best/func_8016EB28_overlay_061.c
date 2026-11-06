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

M2C_UNK func_80033A0C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80040E88_ovl_01(s32, M2C_UNK *);       /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, s16 *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_801730F8_overlay_061(void *, s32);         /* extern */
void *func_80173544_overlay_061(M2C_UNK, void *);   /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_80173BE8_overlay_061;
extern M2C_UNK func_8016EAF8_overlay_061;
extern M2C_UNK func_801726D4_overlay_061;
extern M2C_UNK func_80172FEC_overlay_061;

void func_8016EB28_overlay_061(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    union {
        unsigned char bytes[104];
        struct { unsigned char pad[24]; s16 value; } view_sp18;
        struct { unsigned char pad[26]; s16 value; } view_sp1A;
        struct { unsigned char pad[28]; s16 value; } view_sp1C;
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp20;
    } m2c_initial_frame;

             
             
                 
    s32 var_s1;
    short temp_v1;
    void *temp_v0;
    
    void *temp_v0_3;
    void *var_v1;

    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
    M2C_FIELD(arg0, s8 *, 0x1ED) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EE) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EF) = -0x7E;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    M2C_FIELD(arg0, s8 *, 0x25C) = 0;
    M2C_FIELD(arg0, s8 *, 0x25D) = 3;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s16 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BE) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BF) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 0;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x1F4;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x150) = 0;
    M2C_FIELD(arg0, s16 *, 0x154) = -0x1F4;
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    M2C_FIELD(arg0, s16 *, 0x156) = 0x4B0;
    M2C_FIELD(arg0, s16 *, 0x15A) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x158) = 0x4B0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 8);
    M2C_FIELD(arg0, s16 *, 0x14C) = 0x4B0;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0x4B0;
    M2C_FIELD(arg0, s16 *, 0x176) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x178) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x16C) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x16E) = 0x258;
    M2C_FIELD(arg0, s16 *, 0x196) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x198) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x18C) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x18E) = 0x2BC;
    M2C_FIELD(arg0, s16 *, 0x170) = 0;
    M2C_FIELD(arg0, s16 *, 0x174) = -0x1F4;
    M2C_FIELD(arg0, s16 *, 0x172) = 0;
    M2C_FIELD(arg0, s16 *, 0x17A) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x190) = 0;
    M2C_FIELD(arg0, s16 *, 0x194) = -0x1F4;
    M2C_FIELD(arg0, s16 *, 0x192) = 0;
    M2C_FIELD(arg0, s16 *, 0x19A) = 0x1F4;
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0, 0, M2C_FIELD(arg0, void **, 0x234) + 0x4C);
    var_v1 = &D_800C7650 + 0xC;
    var_s1 = 3;
    if (arg0 != M2C_FIELD(var_v1, s32 *, 0x19D38)) {
        do {
            var_v1 += 4;
            var_s1 += 1;
        } while (arg0 != M2C_FIELD(var_v1, s32 *, 0x19D38));
    }
    M2C_FIELD(arg0, s8 *, 0x2B4) = (s8) (var_s1 - 3);
    if (M2C_FIELD(arg0, u16 *, 0x1AA) == 8) {
        M2C_FIELD(arg0, s32 *, 0x284) = 4;
        M2C_FIELD(arg0, s16 *, 0x136) = 0x320;
        M2C_FIELD(arg0, s16 *, 0x138) = 0x320;
        M2C_FIELD(arg0, s16 *, 0x12C) = 0x320;
        M2C_FIELD(arg0, s16 *, 0x12E) = 0x320;
        M2C_FIELD(arg0, s16 *, 0x156) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x158) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x14C) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x14E) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x176) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x178) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x16C) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x16E) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x196) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x198) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x18C) = 0x258;
        M2C_FIELD(arg0, s16 *, 0x18E) = 0x258;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650), M2C_UNK **, 0x18298) = &func_801726D4_overlay_061;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650), M2C_UNK **, 0x18398) = &func_80172FEC_overlay_061;
    temp_v0 = M2C_FIELD(arg0, void **, 0x234);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0xC);
    M2C_FIELD(temp_v0, s16 *, 0x126) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x128) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x29E) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x2A0) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x416) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x418) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x58E) = 0x1000;
    M2C_FIELD(temp_v0, s16 *, 0x590) = 0x1000;
    M2C_FIELD(temp_v0, s32 *, 0xCC) = 0x808080FF;
    M2C_FIELD(temp_v0, s16 *, 0x124) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x29C) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x414) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x58C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) (M2C_FIELD(temp_v0, s32 *, 0) | 0x4400);
    M2C_FIELD(temp_v0, s32 *, 0x178) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x178) | 0x4800);
    M2C_FIELD(temp_v0, s32 *, 0x2F0) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x2F0) | 0x4800);
    M2C_FIELD(temp_v0, s32 *, 0x468) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x468) | 0x4800);
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        M2C_FIELD(&D_800C7650, s32 *, 0x18284) = func_801730F8_overlay_061(arg0, M2C_FIELD(&D_800C7650, s32 *, 0x18284));
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x2A4) = &func_8016EAF8_overlay_061;
    if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF)) {
        temp_v0 = (var_s1 * 8) + &D_80173BE8_overlay_061;
        m2c_initial_frame.view_sp18.value = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 0));
        m2c_initial_frame.view_sp1C.value = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 4));
        func_80040E88_ovl_01(M2C_FIELD(&D_800C7650, void **, 0x19D40) + 0x64, &m2c_initial_frame.view_sp20.value);
        do { func_8004279C_ovl_01(&m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp18.value, &m2c_initial_frame.view_sp18.value); } while (0);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x19D40), s32 *, 0x28) + m2c_initial_frame.view_sp18.value);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x19D40), s32 *, 0x2C) + m2c_initial_frame.view_sp1A.value);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(M2C_FIELD(&D_800C7650, void **, 0x19D40), s32 *, 0x30) + m2c_initial_frame.view_sp1C.value);
    }
    M2C_FIELD(arg0, s8 *, 5) = 8;
    temp_v0_3 = func_80173544_overlay_061(0x34, arg0);
    M2C_FIELD(temp_v0_3, s32 *, 0) = 0;
    M2C_FIELD(temp_v0_3, s16 *, 0x1AA) = 8;
    func_8016EB28_overlay_061(temp_v0_3, arg1, arg2);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF;
    if (temp_v1 == 1) {
        M2C_FIELD(arg0, s8 *, 5) = 0xF;
        M2C_FIELD(arg0, s8 *, 0x2B5) = temp_v1;
    }
}
