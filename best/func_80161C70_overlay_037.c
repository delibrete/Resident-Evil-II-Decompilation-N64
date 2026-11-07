extern u8 D_800C7650[];
extern volatile s32 D_80161F00_overlay_037[];

void func_80161C70_overlay_037(void *arg0) {
    u8 *p = (u8 *)arg0;
    u32 base = (u32)D_800C7650 | 0x18000;

    if (!(*(u32 *)(base + 0x1A60) & 0x20000000)) {
        ((void (*)(void *, s32, s32))D_80161F00_overlay_037[p[4]])(arg0, *(s32 *)(p + 0x1A4), *(s32 *)(p + 0x218));
    }
}
