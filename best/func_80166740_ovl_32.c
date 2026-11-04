extern s32 func_80084514_ovl_01(u32);
extern u8 D_800C7650_ovl_01[];
void func_80166740_ovl_32(s32 arg0, s32 arg1) {
    volatile u8 *base = D_800C7650_ovl_01;
    u8 *p = (u8 *)base + 0x18000 + (arg0 + 3) * 4;
    *(s32 *)(*(s32 *)(p + 0x1D38) + 4) = func_80084514_ovl_01(arg1);
}
