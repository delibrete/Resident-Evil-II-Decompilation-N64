extern unsigned short D_800C4E56_ovl_01;
extern unsigned char D_800C4E58_ovl_01[];
extern unsigned char D_800C4EA8_ovl_01[];
extern unsigned int D_800C5688_ovl_01;
extern unsigned int D_8010B698_ovl_01;
extern unsigned int D_80113778_ovl_01;
extern unsigned char D_800C7650_ovl_01[];
extern void func_8000E210(void *p);

void func_80025A60_ovl_01(void) {
    unsigned char *a = D_800C4E58_ovl_01;
    unsigned char *b = D_800C4EA8_ovl_01;
    unsigned short s;
    int t;

    *(unsigned short *)(a + 0x2) = 0x800;
    *(unsigned short *)(a + 0x6) = 0x800;
    *(unsigned short *)(a + 0xA) = s;
    *(unsigned short *)(a + 0xE) = s;
    t = D_800C5688_ovl_01 - (*(short *)(D_800C7650_ovl_01 + 0x21270) * (D_80113778_ovl_01 * 2));
    *(unsigned int *)(a + 0x10) = t;

    *(unsigned short *)(b + 0x2) = 0x800;
    *(unsigned short *)(b + 0x6) = 0x800;
    *(unsigned short *)(b + 0xA) = s;
    *(unsigned short *)(b + 0xE) = s;
    *(unsigned int *)(b + 0x10) = D_8010B698_ovl_01;

    func_8000E210(a);
    func_8000E210(b);
}
