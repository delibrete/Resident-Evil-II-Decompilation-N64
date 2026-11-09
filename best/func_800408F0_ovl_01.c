extern s32 D_800EEBD0_ovl_01[];

s32 func_800408F0_ovl_01(s32 x)
{
    s32 *tab;

    tab = D_800EEBD0_ovl_01;
    x &= 0xfff;
    if (x < 0x400) {
        return tab[x & 0x3ff];
    }
    if (x < 0x800) {
        return -tab[0x400 - (x & 0x3ff)];
    }
    if (x < 0xc00) {
        return -tab[x & 0x3ff];
    }
    return tab[0x400 - (x & 0x3ff)];
}
