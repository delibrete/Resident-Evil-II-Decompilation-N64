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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s32, s32, s16 *); /* extern */

void func_801722CC_overlay_043(void *arg0) {
int __repair_literal;

    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x2CD);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
    if (temp_v1 != 1) {
__repair_literal = 2;

        if ((s32) temp_v1 < __repair_literal) {
            if (temp_v1 != 0) {
                goto block_10;
            }
            M2C_FIELD(arg0, void (**)(void *), 0x2D0) = func_801722CC_overlay_043;
            M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
            return;
        }
        if ((s32) temp_v1 < 9) {
            goto block_8;
        }
        goto block_9;
    }
    sp10 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17) + 0x12C;
    sp12 = (s16) ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17);
    sp14 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x16) + 0xC8;
    func_800377B0_ovl_01(0x26032000, 0, temp_s2 + 0x908, &sp10);
block_8:
    temp_s0 = temp_s2 + 0xA80;
    sp10 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x16) + 0x12C;
    sp12 = (s16) ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17);
    sp14 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17) + 0xC8;
    func_800377B0_ovl_01(0x64000, (s32) (func_80033634_ovl_01() << 0x18) >> 0x14, temp_s0, &sp10);
    sp10 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x16) + 0x12C;
    sp12 = (s16) ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17);
    sp14 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17) + 0xC8;
    func_800377B0_ovl_01(0x34000, (s32) (func_80033634_ovl_01() << 0x18) >> 0x14, temp_s0, &sp10);
    temp_s0_2 = temp_s2 + 0x908;
    sp10 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17) + 0x12C;
    sp12 = (s16) ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17);
    sp14 = ((s32) (func_80033634_ovl_01() << 0x18) >> 0x16) + 0xC8;
    func_800377B0_ovl_01(0x08024000, (s32) (func_80033634_ovl_01() << 0x18) >> 0x14, temp_s0_2, &sp10);
    func_800377B0_ovl_01(0x08024000, (s32) (func_80033634_ovl_01() << 0x18) >> 0x14, temp_s0_2, &sp10);
block_9:
block_10:
    if (M2C_FIELD(arg0, u8 *, 0x2CD) == 0x40) {
        M2C_FIELD(arg0, void (**)(void *), 0x2D0) = NULL;
    }
    M2C_FIELD(arg0, u8 *, 0x2CD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CD) + 1);
}
