typedef void (*Fn)(void);
extern volatile Fn D_80167244_overlay_026[];
void func_801639A4_ovl_26(unsigned char *a) {
    volatile Fn *table = D_80167244_overlay_026;
    table[a[6]]();
    a[0x2D6] = 1;
    a[0x2D7] = 1;
}
