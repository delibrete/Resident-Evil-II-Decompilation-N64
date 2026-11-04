extern s16 D_800F9DE0_ovl_01[30];
void func_80165138_ovl_15(void) {
    s16 *p;
    u32 i;
    p = D_800F9DE0_ovl_01;
    for (i = 0; i < 30; i++) {
        p[i] = (s16)(p[i] / 6);
    }
}
