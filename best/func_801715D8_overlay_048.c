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

void func_801715D8_overlay_048(void *arg0) {
    s32 temp_s0;
    s32 temp_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_s2;

    temp_s2 = M2C_FIELD(arg0, u32 *, 0x28C);
    temp_s3 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), (void *)0x5F4);
    temp_s0 = func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x338);
    var_v0 = temp_s3 << 0x10;
    if ((func_80032EA4_ovl_01(arg0, *(void * *)(D_800C7650 + 0x19AA8), *(void * *)(D_800C7650 + 0x19AB0), 0x400) << 0x10) != 0) {
        M2C_FIELD(arg0, u16 *, 0x2B6) += 2;
        var_v0 = temp_s3 << 0x10;
    }
    if (var_v0 != 0) {
        var_v0_2 = temp_s0 << 0x10;
        if (temp_s2 < 0x1388U) {
            var_v0_2 = temp_s0 << 0x10;
            if ((u16) M2C_FIELD(arg0, u16 *, 0x2B6) >= 0x5BU) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
                goto block_6;
            }
        }
    } else {
block_6:
        var_v0_2 = temp_s0 << 0x10;
    }
    var_v0_3 = temp_s2 < 0xDADU;
    if (var_v0_2 == 0) {
        if (temp_s2 < 0xDACU) {
            var_v0_3 = temp_s2 < 0xDADU;
            if (D_800E133F == 0) {
                var_v0_3 = temp_s2 < 0xDADU;
                if (M2C_FIELD(arg0, u8 *, 0x2B9) == 0) {
                    if (M2C_FIELD(arg0, s16 *, 0x1F4) < 0x1E) {
                        M2C_FIELD(arg0, s32 *, 4) = 0x01030000;
                    }
                    goto block_13;
                }
            }
        } else {
block_13:
            var_v0_3 = temp_s2 < 0xDADU;
        }
    }
    if (var_v0_3 == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
    }
}
