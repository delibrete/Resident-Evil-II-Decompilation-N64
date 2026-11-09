s32 func_800845AC_ovl_01();
extern char D_800C7650_ovl_01[];

void func_80084540_ovl_01(void) {
    volatile u32 off = 0x18000;
    u8 *p = D_800C7650_ovl_01 + off;
    if (!(*(s32 *)(p + 0x1A80) & 0x80000) || ((*(s32 *)(p + 0x1A3C) & 0x04000100) != 0x04000000)) {
        func_800845AC_ovl_01(p);
    }
}
