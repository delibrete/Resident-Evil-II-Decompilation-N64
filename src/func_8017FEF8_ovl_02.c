/* identical to func_80177E28_overlay_002 in Resident Evil II (local match library) (matched), with its names changed by decompdecomp */
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

s32 func_8017FA10_ovl_02();
s32 func_8017FC70_ovl_02();

void func_8017FEF8_ovl_02(s32 arg0) {
    func_8017FA10_ovl_02();
    func_8017FA10_ovl_02(arg0 + 0x10);
    func_8017FA10_ovl_02(arg0 + 0x20);
    func_8017FA10_ovl_02(arg0 + 0x30);
    func_8017FA10_ovl_02(arg0 + 0x40);
    func_8017FA10_ovl_02(arg0 + 0x50);
    func_8017FA10_ovl_02(arg0 + 0x60);
    func_8017FA10_ovl_02(arg0 + 0x70);
    func_8017FC70_ovl_02(arg0);
    func_8017FC70_ovl_02(arg0 + 2);
    func_8017FC70_ovl_02(arg0 + 4);
    func_8017FC70_ovl_02(arg0 + 6);
    func_8017FC70_ovl_02(arg0 + 8);
    func_8017FC70_ovl_02(arg0 + 0xA);
    func_8017FC70_ovl_02(arg0 + 0xC);
    func_8017FC70_ovl_02(arg0 + 0xE);
}
