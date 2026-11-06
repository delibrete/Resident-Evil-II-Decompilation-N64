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

extern unsigned char D_800E10C6;
extern unsigned char D_800E133F;
s32 func_80032EA4_ovl_01();
s32 func_80040E88_ovl_01();
s32 func_80042854_ovl_01();
s32 func_80066804_ovl_01();
extern char D_800C7650[];

void func_8016F430_overlay_048(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 temp_s2;
    s32 temp_s4;
    
    s32 var_v0_2;
    u32 temp_s3;
    u8 temp_v0;
    void *var_a0;

    temp_s3 = M2C_FIELD(arg0, u32 *, 0x28C);
    temp_s2 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), (void *)0x4C8);
    temp_s4 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x338);
    if ((func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x400) << 0x10) != 0) {
        M2C_FIELD(arg0, u16 *, 0x2B6) += 1;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B8);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x2B8) = (u8) (temp_v0 - 1);
    }
    if ((temp_s2 << 0x10) != 0) {
        var_a0 = arg0 + 0x64;
        if (temp_s3 < 0x1770U) {
            if ((u16) M2C_FIELD(arg0, u16 *, 0x2B6) >= 0x3DU) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
                goto block_8;
            }
        }
    } else {
block_8:
        var_a0 = arg0 + 0x64;
    }
    func_80040E88_ovl_01(var_a0, &sp28);
    sp10 = 0x7D0;
    sp12 = 0;
    sp14 = 0;
    func_80042854_ovl_01(&sp28, &sp10, &sp18);
    sp18 += M2C_FIELD(arg0, s32 *, 0x28);
    sp20 += M2C_FIELD(arg0, s32 *, 0x30);
    if ((u8) D_800E10C6 < 5U) {
        temp_s2 = temp_s4 << 0x10;
        if (M2C_FIELD(arg0, u16 *, 0x2B4) == 0) {
            temp_s2 = temp_s4 << 0x10;
            if (func_80066804_ovl_01(&sp18, 0x190, 1 << (s16) (M2C_FIELD(arg0, u16 *, 0x25E) / -1800), 0x400) == 0) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01060000;
                goto block_14;
            }
        }
    } else {
block_14:
        temp_s2 = temp_s4 << 0x10;
    }
    if (temp_s2 == 0) {
        if (temp_s3 < 0xDACU) {
            var_v0_2 = temp_s4 << 0x10;
            if (D_800E133F == 0) {
                var_v0_2 = temp_s4 << 0x10;
                if (M2C_FIELD(arg0, u8 *, 0x2B9) == 0) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
                    goto block_20;
                }
            }
        } else {
block_20:
            var_v0_2 = temp_s4 << 0x10;
        }
        if ((var_v0_2 == 0) && (temp_s3 < 0x7D0U)) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01090000;
        }
    }
}
