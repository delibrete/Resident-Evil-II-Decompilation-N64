extern s32 D_8011277C_ovl_01;
extern s32 D_801129BC_ovl_01;
extern s32 D_80139EF0_ovl_01;
void func_8000C9E0(void *, s32 *, s32);

s32 func_8006BB3C_ovl_01(s32 arg0)
{
    s32 sp10;
    s32 s0;

    if (arg0 == 1) {
        return 0;
    }
    if (arg0 < 0) {
        return D_801129BC_ovl_01;
    }
    s0 = arg0;
    if (s0 == 0) {
        s0 = 1;
        D_8011277C_ovl_01 = D_801129BC_ovl_01;
    }
    do {
        func_8000C9E0(&D_80139EF0_ovl_01, &sp10, 1);
    } while (sp10 < s0 + D_8011277C_ovl_01);
    D_8011277C_ovl_01 = D_801129BC_ovl_01;
}
