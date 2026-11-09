s32 func_80089D34_ovl_01(void *, s32, s32, u32);
void func_801626D4_overlay_027(u8 *arg0, s32 arg1, s32 arg2) {
    arg0[0x2C6] = 1;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    arg0[0x2BF] &= 0x7F;
    if (arg0[0x2C7] == 0) {
        arg0[5] = 2;
    } else {
        arg0[5] = 8;
    }
    *(u16 *)(arg0 + 6) = 0;
}
