extern u8 D_800BA3C4_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern s32 D_801320A0_ovl_01;
extern s32 D_801320A4_ovl_01;
extern u8 *D_8013A3D0;

s32 func_800276B4_ovl_01(s32);
void func_80027530_ovl_01(s32, s32, s32, s32);
void func_800275F8_ovl_01(s32, s32, s32, s32);
void func_8004CDB8_ovl_01(s32);
void func_8004CE04_ovl_01(s32);
void func_80077B0C_ovl_01(s32, void *);
void func_800853C8_ovl_01(s32, s32, void *);

void func_8009B94C_ovl_01(void) {
    volatile u32 off;
    u8 *base;

    for (;;) {
        if (func_800276B4_ovl_01(0) != 0) {
            break;
        }
        func_8004CDB8_ovl_01(1);
    }
    func_80027530_ovl_01(0x200, 0, 7, 1);
    func_800275F8_ovl_01(0, 0x7FFF, 0xFFFF, 0);
    if (*(u16 *)(D_8013A3D0 + 0x244) != 0) {
        func_80077B0C_ovl_01(0x10000, D_800E10F8_ovl_01);
    }
    func_800853C8_ovl_01(D_801320A0_ovl_01, D_801320A4_ovl_01, D_800BA3C4_ovl_01);
    off = 0x18000;
    base = D_800C7650_ovl_01 + off;
    *(u32 *)(base + 0x1A3C) &= 0xFDFFFFFF;
    func_8004CE04_ovl_01(0xFDFFFFFF);
}
