extern char D_800C7650_ovl_01[];
extern s32 D_800E1388_ovl_01[];
void func_8004DA70_ovl_01(void *, void *);
void func_8004D3D0_ovl_01(s32 *, void *);

void func_8004DB8C_ovl_01(u8 *arg0) {
    s32 **s0;
    s32 *tmp;
    u8 *s2;
    volatile u32 off;

    func_8004DA70_ovl_01(arg0, arg0 + 0x28);
    arg0[0xD] = 0xFF;
    off = 0x18000;
    s2 = (u8 *)D_800C7650_ovl_01 + off;
    s0 = (s32 **)D_800E1388_ovl_01;
    if (*(s32 ***)(s2 + 0x28C) != s0) {
        do {
            tmp = *s0;
            if (arg0 != (u8 *)tmp && (*tmp & 1)) {
                func_8004D3D0_ovl_01(tmp, arg0);
            }
            s0++;
        } while (s0 != *(s32 ***)(s2 + 0x28C));
    }
}
