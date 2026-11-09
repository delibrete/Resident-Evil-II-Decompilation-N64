extern u8 *D_8010D8E0_ovl_01;
extern u16 D_8010C220_ovl_01[];

void func_80053290_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *t0 = D_8010D8E0_ovl_01;
    volatile u8 *v1 = t0 + 0x300;
    v1[0xE] = arg3;
    v1[0xF] = arg0;
    *(volatile u16 *)(t0 + 0x300) = D_8010C220_ovl_01[0] + 0x30;
    *(volatile s16 *)(v1 + 4) = arg1;
    *(volatile s16 *)(v1 + 6) = arg2;
    *(volatile u16 *)(v1 + 2) = D_8010C220_ovl_01[1] + 0x8E;
    t0[0x31F] = arg0;
    t0[2] = 1;
    t0[3] = 0;
    t0[0x2DE] = 0;
}
