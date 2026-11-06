extern u8 *D_800EBB34_overlay_001;
void func_80039AD0_overlay_001(u8 *a0, u8 *a1);

void func_80039BD8_ovl_01(void) {
    u8 *p1;
    u8 *p2;
    u8 *p3;
    u8 *p4;
    u16 a;
    u8 b;
    u16 c;
    u16 d;

    p1 = D_800EBB34_overlay_001;
    a = *(u16 *)(p1 + 0x12);
    b = p1[0x2];
    *(u16 *)(p1 + 0x18) = a;
    c = *(u16 *)(p1 + 0x2A);
    p1[0x21] = b;
    d = *(u16 *)(p1 + 0x14);
    p2 = D_800EBB34_overlay_001;
    *(u16 *)(p1 + 0x2A) = c | d;
    p2[0x20] = (*(u8 **)(p2 + 0x70))[p2[0x21] * 8 + 2];

    p3 = D_800EBB34_overlay_001;
    p3[0x1F] += p3[0xB];

    p4 = D_800EBB34_overlay_001;
    func_80039AD0_overlay_001(p4, *(u8 **)(p4 + 0x78) + p4[0x1F] * 24);
}
