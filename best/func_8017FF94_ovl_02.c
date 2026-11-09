extern s16 D_80187020_ovl_02[];
extern s16 *D_80187420_ovl_02;
void func_8017FF94_ovl_02(void) {
    s32 i;
    D_80187420_ovl_02 = D_80187020_ovl_02;
    for (i = -0x200; i < 0x200; i++) {
        if (i < -0x100) D_80187020_ovl_02[i] = -0x100;
        if (i < 0x100) D_80187020_ovl_02[i] = i;
        else D_80187020_ovl_02[i] = 0xff;
    }
}
