extern u8 D_800C7650[];

void func_800765D4(u8 *arg0) {
char *__repair_addr;

    u8 *a0 = arg0 + 0x11C;
    u32 a1 = (u32)D_800C7650 + 0x11C;
    s32 n = 0x8E;
    do {
        a0 -= 2;
        a1 -= 2;
        n--;
__repair_addr = (char *)(a1 + 0x214AC);

        *(u16 *)(__repair_addr) = *(u16 *)a0;
    } while (n != 0);
}
