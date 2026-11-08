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
extern unsigned char D_800E1272;
s32 func_80032EA4_ovl_01();
s32 func_80032FDC();
extern char D_800C7650[];
extern char D_800E10F8[];

void func_80171338_overlay_039(void *arg0) {
    u32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u32 *, 0x28C);
    func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), (void *)0x400);
    func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x100);
    if ((temp_s0 < 0x514U) && !(D_800E133F & 0x80) && (M2C_FIELD(arg0, u8 *, 0x1A2) == D_800E1272)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x20) && (func_80032FDC(arg0 + 0x28, &D_800E10F8, (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x100), 0x100) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            D_800E133F = (u8) (D_800E133F | 0x80);
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x40) && (func_80032FDC(arg0 + 0x28, &D_800E10F8, (s16) (M2C_FIELD(arg0, u16 *, 0x66) - 0x100), 0x100) == 0)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            D_800E133F = (u8) (D_800E133F | 0x80);
        }
    }
}
