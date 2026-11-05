extern u8 D_800C7650_ovl_01[];
void func_8006D2F8_ovl_01(void){
    u8 *base = D_800C7650_ovl_01;
    u32 k = 0x18000;
    u8 *p;
    s32 i;
    *(s32 *)(base + k + 0x4a0) = 0;
    *(s32 *)(base + k + 0x4a4) = 0;
    p = base + 0x1a248;
    for (i = 0x20; i != 0; i--) {
        *(s32 *)p = 0;
        p[0x1e1] = 0;
        p += 0x368;
    }
    {
        u8 *q = *(u8 **)(base + k + 0x27c);
        i = q[2];
        while (i) i--;
    }
}
