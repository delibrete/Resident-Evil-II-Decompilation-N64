extern u8 D_800C4EA8_overlay_001[];
extern u8 D_800C4E58_overlay_001[];
extern void func_80025A60_overlay_001(void);

void func_80026040_ovl_01(void) {
    u8 *p = D_800C4EA8_overlay_001;
    u8 *q = D_800C4E58_overlay_001;
    p[0x17] = 2;
    q[0x17] = 2;
    p[0x16] = 0;
    q[0x16] = 0;
    func_80025A60_overlay_001();
}
