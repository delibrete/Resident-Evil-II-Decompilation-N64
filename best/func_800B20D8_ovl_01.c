extern s32 D_801362B0_ovl_01;
extern u8 D_80147F49_ovl_01;
s32 func_800A5618_ovl_01(void);
s32 func_800A5660_ovl_01(void);
void func_800A7DD0_ovl_01(s32 arg0, s32 arg1, s32 arg2);

void func_800B20D8_ovl_01(s32 arg0, s32 arg1, s32 arg2)
{
    if (D_801362B0_ovl_01) {
        func_800A5618_ovl_01();
        func_800A7DD0_ovl_01(arg0 & 0xFF, arg1 & 0xFFFF, arg2 & 0xFF);
        func_800A5660_ovl_01();
    }
}
