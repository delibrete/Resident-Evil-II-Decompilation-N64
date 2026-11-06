/* identical to func_80162F64_ovl_23 (matched), with its names changed by decompdecomp */
extern s16 D_800F9DE0_ovl_01;

void func_80165100_ovl_15(void) {
    u32 i = 0;
    s16 *p = &D_800F9DE0_ovl_01;

    do {
        *p *= 6;
        p++;
        i++;
    } while (i < 0x1E);
}
