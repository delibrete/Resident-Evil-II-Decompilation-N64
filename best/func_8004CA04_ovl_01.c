extern u8 D_800FE228_ovl_01[];

void func_8004CA04_ovl_01(void) {
    s32 n;

    n = 8;
    do {
        n--;
    } while (n);
    *(u32 *)(D_800FE228_ovl_01 + 0xC800) = (u32)D_800FE228_ovl_01;
    *(u32 *)(D_800FE228_ovl_01 + 0xC804) = (u32)(D_800FE228_ovl_01 + 0x2800);
}
