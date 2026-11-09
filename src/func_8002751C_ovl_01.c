extern u8 D_800E9118_ovl_01[];

void func_8002751C_ovl_01(s8 arg0, s16 arg1)
{
    u8 *p = D_800E9118_ovl_01;
    *(s16 *)(p + 0xD6) = arg1;
    *(s8 *)(p + 0xC8) = arg0;
}
