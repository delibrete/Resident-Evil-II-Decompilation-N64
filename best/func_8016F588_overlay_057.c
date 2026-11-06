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

extern unsigned char D_800E133F;
s32 func_80032EA4_ovl_01();
extern char D_800C7650[];

void func_8016F588_overlay_057(void *arg0) {
    s32 temp_s0;
    u32 temp_s2;

    temp_s2 = M2C_FIELD(arg0, u32 *, 0x28C);
    func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), (void *)0x5F4);
    temp_s0 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0));
    if (((func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x400) << 0x10) == 0) && (temp_s2 < 0x5DCU)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01050000;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x2B6) == 0) && (D_800E133F == 0) && ((temp_s0 << 0x10) == 0) && (temp_s2 < 0xBB8U)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
    }
}
