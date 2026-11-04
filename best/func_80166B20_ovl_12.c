extern volatile unsigned char D_800C7650_ovl_01[];
void func_80166B20_ovl_12(void *arg0) {
    if (*(volatile unsigned short *)(D_800C7650_ovl_01 + 0x19A78) & 0x40) {
        ((unsigned char *)arg0)[5] = 0xB;
        *(unsigned short *)((unsigned char *)arg0 + 6) = 0;
    }
}
