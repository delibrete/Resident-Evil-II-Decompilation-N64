extern s32 func_80004CFC(u16, s32, s32, s32 *);
extern s32 D_800B9990_overlay_001;
extern u8 D_8011A31C_overlay_001[];
s32 func_80075170_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5) {
    s32 i = 0;
    s32 j = 0;
    s32 sum = arg5;
    s32 size = arg5;
    u8 *base = D_8011A31C_overlay_001;
    if (*(s8 *)(base + 0x28) != 0) {
        do {
            if (i >= 0xF) break;
            base += 0x3C;
            i++;
        } while (*(s8 *)(base + 0x28) != 0);
    }
    if (i == 0xF) for (;;) {}
    {
        u8 *entry = D_8011A31C_overlay_001 + i * 0x3C;
        *(s8 *)(entry + 0x28) = 1;
        *(s32 *)(entry + 0x2A) = arg0;
        *(s32 *)(entry + 0x2E) = arg1;
        *(s32 *)(entry + 0x32) = arg2;
        *(s32 *)(entry + 0x36) = arg3;
        *(s16 *)(entry + 0x3A) = arg4;
    }
    while (j < 4) {
        if (size & 0xF) size = (size + 0xF) & ~0xF;
        if (*(u16 *)((u8 *)&arg5 + 2 + j * 2) != 0xFFFF) {
            sum += func_80004CFC(*(u16 *)((u8 *)&arg5 + 0xA + j * 2), size, 0, &D_800B9990_overlay_001);
            *(s32 *)(D_8011A31C_overlay_001 + i * 0x3C + j * 4 + 0x14) = size;
            size = sum;
        } else {
            *(s32 *)(D_8011A31C_overlay_001 + i * 0x3C + j * 4 + 0x14) = 0;
        }
        j++;
    }
    return i;
}
