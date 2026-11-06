s32 func_8000E980(s32 arg0);
void func_8000EC60(s32 arg0);
void func_8006BE40_ovl_01(void);
extern s32 D_80112758_ovl_01;
extern s32 D_80112918_ovl_01[];
extern s32 D_80112968_ovl_01[];

void func_8006BEEC_ovl_01(s32 arg0) {
    s32 *src;
    s32 *dst;
    s32 a, b, c, d;

    dst = D_80112918_ovl_01;
    src = D_80112968_ovl_01;
    do {
        a = src[0];
        b = src[1];
        c = src[2];
        d = src[3];
        dst[0] = a;
        dst[1] = b;
        dst[2] = c;
        dst[3] = d;
        src += 4;
        dst += 4;
    } while (src != D_80112968_ovl_01 + 20);
    func_8000E980((s32) D_80112918_ovl_01);
    func_8006BE40_ovl_01();
    if (D_80112758_ovl_01 != 0) {
        func_8000EC60(arg0);
    }
}
