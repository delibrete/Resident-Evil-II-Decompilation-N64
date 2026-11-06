extern s32 func_8016EE50_overlay_041(void);
extern void func_80172768_overlay_041(void *arg0, s8 arg1, s8 arg2);
extern char D_800C7650[];

void func_80171CAC_overlay_041(void *arg0) {
    u8 *p = arg0;
    s32 v;

    func_8016EE50_overlay_041();
    switch (p[7]) {
    case 0:
        *(u16 *)(p + 0x2C6) |= 0x20;
        p[7]++;
    case 1:
        v = *(u16 *)(p + 0x270) & 1;
        break;
    case 2:
        *(u16 *)(p + 0x2C6) &= 0xFFDF;
        p[7]++;
    case 3:
        if (*(u16 *)(p + 0x270) & 1) {
            *(u16 *)(p + 0x270) = 0;
            func_80172768_overlay_041(p, 1, 1);
            return;
        }
        v = *(u16 *)(D_800C7650 + 0x19A7A) & 1;
        break;
    default:
        return;
    }
    if (v) {
        *(u16 *)(p + 0x270) = 0;
        func_80172768_overlay_041(p, 1, 1);
    }
}
