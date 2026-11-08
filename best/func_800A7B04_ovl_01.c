extern u8 D_80147A40[];
extern s32 D_800BA720[];
extern void func_800AB4A4_overlay_001(void *);

void func_800A7B04_ovl_01(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    u32 count = arg1 & 0xFFFF;
    u32 i;
    u8 *p;
    s32 rate;
    if (count == 0) count = (arg1 + 1) & 0xFFFF;
    func_800AB4A4_overlay_001(&count);
    switch (arg2 & 0xFF) {
    case 0xFA:
        for (i = 0, p = D_80147A40; i < 32; i++, p += 0x28) {
            if (p[0x14] < 2) {
                rate = (((arg0 & 0xFF) << 16) - *(s32 *)(p + 0)) / (arg1 & 0xFFFF);
                *(s32 *)(p + 4) = (arg0 & 0xFF) << 16;
                *(s32 *)(p + 0xC) = count;
                *(s32 *)(p + 0x10) = -1;
                *(s32 *)(p + 8) = rate;
            }
        }
        break;
    case 0xFB:
        for (i = 0, p = D_80147A40; i < 32; i++, p += 0x28) {
            if (p[0x14] >= 2 && p[0x14] < 4) {
                rate = (((arg0 & 0xFF) << 16) - *(s32 *)(p + 0)) / (arg1 & 0xFFFF);
                *(s32 *)(p + 4) = (arg0 & 0xFF) << 16;
                *(s32 *)(p + 0xC) = count;
                *(s32 *)(p + 0x10) = -1;
                *(s32 *)(p + 8) = rate;
            }
        }
        break;
    case 0xFC:
    case 0xFD:
    case 0xFE:
        {
            u32 type = (arg2 & 0xFF) - 0xFC + 2;
            for (i = 0, p = D_80147A40; i < 32; i++, p += 0x28) {
                if (p[0x14] == type) {
                    rate = (((arg0 & 0xFF) << 16) - *(s32 *)(p + 0)) / (arg1 & 0xFFFF);
                    *(s32 *)(p + 4) = (arg0 & 0xFF) << 16;
                    *(s32 *)(p + 0xC) = count;
                    *(s32 *)(p + 0x10) = -1;
                    *(s32 *)(p + 8) = rate;
                }
            }
        }
        break;
    default:
        p = D_80147A40 + ((arg2 & 0xFF) * 0x14);
        *(s32 *)(p + 4) = (arg0 & 0xFF) << 16;
        rate = (((arg0 & 0xFF) << 16) - *(s32 *)p) / count;
        p[0x15] = (u8)arg3;
        *(s32 *)(p + 0xC) = count;
        *(s32 *)(p + 0x10) = *(s32 *)((u8 *)&arg3 + 0);
        *(s32 *)(p + 8) = rate;
        break;
    }
}
