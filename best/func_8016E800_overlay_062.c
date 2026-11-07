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
extern int D_800E10B0;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */


extern int (*D_8016F100_overlay_062[])();
s32 func_8004DB8C_ovl_01();
s32 func_8004DCE8_ovl_01();
s32 func_80065400_ovl_01();
extern char D_800C7650[];
extern char D_800E10F8[];

void func_8016E800_overlay_062(void *arg0) {
    u8 temp_v1;

    func_80065400_ovl_01(arg0, &D_800E10F8, 0, 0);
    if (!(D_800E10B0 & 0x20000000)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x26F);
        if (temp_v1 & 0x7F) {
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (temp_v1 - 1);
        }
        D_8016F100_overlay_062[M2C_FIELD(arg0, u8 *, 4)](arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
        func_8004DB8C_ovl_01(arg0);
        func_8004DCE8_ovl_01(arg0, 0x400);
    }
}
