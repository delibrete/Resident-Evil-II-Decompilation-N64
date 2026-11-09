extern s32 D_800C7650_ovl_01[];
extern s32 D_80119DC0_ovl_01[];
extern s32 D_80119DC8_ovl_01;
extern s32 D_8011A6B8_ovl_01;

void func_800762E0_ovl_01(void) {
    u8 *p;
    u8 *q;
    s32 v;
    s32 c;
    s32 *ptr;
    s32 h;

    D_80119DC8_ovl_01 = 0;
    D_80119DC8_ovl_01 = 1;
    p = (u8 *)D_800C7650_ovl_01 + 0x18000;
    v = *(s32 *)(p + 0x1A5C);
    c = v < 0;
    ptr = *(s32 **)((u8 *)D_80119DC0_ovl_01 + c * 4);
    q = (u8 *)D_800C7650_ovl_01 + 0x20000;
    h = *(s16 *)(q + 0x15F8);
    D_8011A6B8_ovl_01 = *(s32 *)((u8 *)ptr + h * 4 + 4);
}
