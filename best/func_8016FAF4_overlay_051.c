/* identical to func_80165100_ovl_15 (matched), with its names changed by decompdecomp */
extern s16 D_800F9DE0_ovl_01;

void func_8016FAF4_overlay_051(void) {
    u32 var_a1;
    s16 *var_a0;

    var_a1 = 0;
    var_a0 = &D_800F9DE0_ovl_01;
    do {
        var_a1 += 1;
        *var_a0 *= 6;
        var_a0 += 1;
    } while (var_a1 < 0x1EU);
}
