extern unsigned char D_800C7650_overlay_001[];
extern unsigned char D_80113A70_overlay_001[];

void func_8006D2B4_ovl_01(void) {
    unsigned int *p = (unsigned int *)(D_80113A70_overlay_001 + 0x1458);
    unsigned int v = *p;
    unsigned int t = v << 1;
    v = ((v + (t >> 16)) & 0xFFFF) + (t & 0xFFFF0000);
    *p = v;
    *(unsigned short *)(D_800C7650_overlay_001 + 0x21602) = (unsigned short)v;
}
