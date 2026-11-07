extern s32 func_800439B8_ovl_01(s32, void *, s32, s32);
extern void func_8015FC80_ovl_03(void);
extern u8 D_800C7650[];
extern u8 D_80161270_overlay_003[];
void func_8015FB30_ovl_03(void) {
    volatile u32 constant = 0x18000;
    u8 *base = D_800C7650 + constant;
    s32 *field = (s32 *)(base + 0x204);
    *field = func_800439B8_ovl_01(*field, D_80161270_overlay_003, 0, 0);
    func_8015FC80_ovl_03();
}
