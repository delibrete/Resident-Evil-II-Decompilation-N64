extern u8 D_800C7650_ovl_01[];
void func_80162698_ovl_15(void *arg0) {
    s32 t;
    func_80162CE0_ovl_15(arg0);
    if (*(u8 *)((u8 *)arg0 + 0x2B6) == 1) {
        t = *(s32 *)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x25E0) - *(s32 *)((u8 *)arg0 + 0x30);
        if (t < 0x251C) *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
        if (*(u32 *)((u8 *)arg0 + 0x28C) < 0x5A) *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
        if (*(u8 *)((u8 *)arg0 + 0x2D4)) *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
    }
}
