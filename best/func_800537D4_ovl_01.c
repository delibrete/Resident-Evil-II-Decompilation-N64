extern u8 D_800C7650_ovl_01;
extern s32 D_8010D8E0_ovl_01;

void func_800537D4_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3)
{
    s32 t0;
    s32 idx;
    u8 *b;
    u8 *t;
    s32 *p;
    idx = 0x18000;
    b = &D_800C7650_ovl_01 + idx;
    t = (u8 *)D_8010D8E0_ovl_01 + ((b[0x538] << 6) + 0x52A0);
    p = (s32 *)(t + 0x30);
    t0 = 3;
    do {
        *p = -0x100;
        t0 -= 1;
        p = (s32 *)((u8 *)p - 0x10);
    } while (t0 >= 0);
    *(s16 *)(t + 4) = arg0;
    *(s16 *)(t + 8) = arg2;
    *(s16 *)(t + 0x14) = arg0;
    *(s16 *)(t + 0x18) = arg2;
    *(s16 *)(t + 0x24) = arg0;
    *(s16 *)(t + 0x28) = arg0;
    *(s16 *)(t + 0x34) = arg2;
    *(s16 *)(t + 0x38) = arg2;
    *(s16 *)(t + 6) = arg1;
    *(s16 *)(t + 0xA) = arg1;
    *(s16 *)(t + 0x16) = arg3;
    *(s16 *)(t + 0x1A) = arg3;
    *(s16 *)(t + 0x26) = arg1;
    *(s16 *)(t + 0x2A) = arg3;
    *(s16 *)(t + 0x36) = arg1;
    *(s16 *)(t + 0x3A) = arg3;
    t0 = 2;
    do {
        t0 -= 1;
    } while (t0 >= 0);
}
