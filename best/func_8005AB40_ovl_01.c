extern u8 D_800C7650_ovl_01;
extern volatile u32 D_off_ovl_01;

void func_8005AB40_ovl_01(void *arg0, void *arg1) {
    u32 off;
    u8 *p;

    off = D_off_ovl_01;
    p = (u8 *)((u32)&D_800C7650_ovl_01 + off);
    if (p[0x1A76] != 0) {
        *(u8 *)((u8 *)arg0 + 0x289) = 0;
        *(u8 *)((u8 *)arg0 + 0x288) = *(u8 *)(*(u8 **)((u8 *)arg1 + 4) + 1);
    }
}
