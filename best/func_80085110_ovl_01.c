extern u8 D_801247F8_ovl_01[];

void func_80085110_ovl_01(void) {
    u8 *base = D_801247F8_ovl_01;
    s32 i = 0;
    s32 k;

    do {
        u8 *p = base + i * 16;
        *(s32 *)(p + 0x24) = 0;
        *(s32 *)(p + 0x28) = i + 1;
        *(s32 *)(p + 0x2C) = 0;
        i++;
    } while (i < 0x80);

    for (k = 1; k < 4; k++) {
        *(s32 *)(base + 0x28) = 0;
        *(s32 *)(base + 0x14) = k;
        *(s32 *)(base + 0x18 + (k - 1) * 4) = 0;
    }
    *(s32 *)(base + 0x10) = 0;
    *(s32 *)(base + 0x818) = 0;
    *(s32 *)(base + 0) = 0;
    *(s32 *)(base + 4) = 1;
}
