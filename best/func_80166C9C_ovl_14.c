extern void func_80077D48_ovl_01(s32, void *);
extern void func_80162B24_overlay_025(void *, void *, s32);
extern u8 D_80168B74_overlay_014[];
extern void (*D_80168C34_overlay_014[])(void *, s32, s32);

void func_80166C9C_ovl_14(u8 *a, s32 b, s32 c) {
    if (*(s16 *)(a + 0x1F2) < 0) {
        goto neg;
    }
    *(s32 *)(a + 4) = *(s32 *)(a + 0x298);
    func_80077D48_ovl_01(7, a);
    func_80162B24_overlay_025(a, D_80168B74_overlay_014 + (a[0x2CB] * 8), 0);
    if (a[5] != 0xFF) {
        *(u16 *)(a + 0x2C8) |= 1;
        D_80168C34_overlay_014[a[5]](a, b, c);
        *(u16 *)(a + 0x2C8) &= ~1;
    }
    return;
neg:
    *(s32 *)(a + 4) = 0x03000000;
}
