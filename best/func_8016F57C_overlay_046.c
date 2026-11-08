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

s32 func_80033174_ovl_01(void *, M2C_UNK *);        /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80059E30_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80080E30(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_8016F6AC_overlay_046(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016F77C_overlay_046(M2C_UNK *, s32);  /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK D_800E10D0;

s32 func_8016F57C_overlay_046(void *arg0, s32 arg1) {
    M2C_UNK *var_s0;
    s32 var_v0;
    u32 var_v1;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    if (arg1 == 0) {
        var_v1 = M2C_FIELD(arg0, u32 *, 0x28C);
        var_s0 = &D_800E10D0;
    } else {
        var_s0 = M2C_FIELD(&D_800C7650, M2C_UNK **, 0x19D3C);
        var_v1 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    }
    var_v0 = 0;
    if (var_v1 < (u32) (M2C_FIELD(var_s0, u16 *, 0x136) + 0xA)) {
        var_v0 = 0;
        if ((u32) (M2C_FIELD(var_s0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x2C)) < 0xBB8U) {
            var_v0 = 0;
            if (M2C_FIELD(temp_s2, u8 *, 9) == 0) {
                var_v0 = 0;
                if (!(M2C_FIELD(var_s0, u8 *, 0x26F) & 0x80)) {
                    if (arg1 == 0) {
                        func_8016F77C_overlay_046(var_s0, func_80033174_ovl_01(arg0, var_s0) & 0xFF);
                        func_80059E30_ovl_01(1, 1);
                        func_80052C00_ovl_01(3, 0);
                    } else {
                        func_80080E30(arg0, 1, 1);
                    }
                    func_8016F6AC_overlay_046(arg0, 0, 1);
                    var_v0 = 1;
                    M2C_FIELD(temp_s2, u8 *, 9) = 1U;
                    M2C_FIELD(arg0, s16 *, 0x1E0) = 0x5A;
                    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
                }
            }
        }
    }
    return var_v0;
}
