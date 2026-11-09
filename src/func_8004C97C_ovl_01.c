extern u8 D_800FE228_ovl_01[];
s32 func_8004C940_overlay_001();
s32 func_8004CA04_overlay_001();

void func_8004C97C_ovl_01(void) {
    s32 n;
    s32 *p;
    s32 *q;
    s32 a;
    s32 b;
    n = 0x10;
    do {
        n -= 1;
    } while (n != 0);
    p = (s32 *)D_800FE228_ovl_01;
    q = (s32 *)(D_800FE228_ovl_01 + 0x2800);
    a = 0x200;
    b = 0x800;
    do {
        p[0] = 0x04000000;
        p[1] = 0x64808080;
        a -= 1;
        p += 5;
    } while (a != 0);
    do {
        q[0] = 0x03000000;
        q[1] = 0x74808080;
        b -= 1;
        q += 4;
    } while (b != 0);
    func_8004C940_overlay_001();
    func_8004CA04_overlay_001();
}
