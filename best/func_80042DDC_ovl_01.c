extern s32 D_80139A04;

void func_80042DDC_ovl_01(s32 *arg0) {
    s32 *dst;
    s32 *src;
    s32 i;
    dst = &D_80139A04;
    i = 2;
    src = arg0 + 5;
    do {
        *dst = *src;
        src++;
        dst++;
        i--;
    } while (i != -1);
}
