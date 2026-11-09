void func_800823B8_ovl_01(u8 *a0, u8 *a1) {
    u8 c;

    c = *a1;
    if (c != 0) {
        do {
            a1++;
            *a0 = c;
            c = *a1;
            a0++;
        } while (c != 0);
    }
    *a0 = 0;
}
