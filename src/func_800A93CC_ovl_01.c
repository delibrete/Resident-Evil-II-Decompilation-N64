extern u8 D_801362B0_ovl_01;
extern u8 D_80148180[];
s32 func_800AF0D0_ovl_01(s32);

void func_800A93CC_ovl_01(s32 arg0) {
    if (D_801362B0_ovl_01 != 0) {
        func_800A5618_ovl_01();
        if (D_80148180[arg0 * 24] == 1) {
            D_80148180[arg0 * 24] = 0;
            func_800AF0D0_ovl_01(arg0);
        }
        func_800A5660_ovl_01();
    }
}
