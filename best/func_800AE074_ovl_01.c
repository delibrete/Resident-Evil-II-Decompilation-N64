void func_800A5C7C_ovl_01(s32);
extern s32 D_8014E10C;
extern s32 D_8014E170;
extern s32 D_80152180;
extern s32 D_80152990;
extern s32 D_801535A0;
extern s32 D_80157DB0;
extern s32 D_801535B0;

void func_800AE074_ovl_01(void) {
    s32 i;
    s16 *p;

    i = 0;
    p = (s16 *)&D_801535B0;
    D_8014E10C = 0;
    D_8014E170 = 0;
    D_80152180 = 0;
    D_80152990 = 0;
    D_80157DB0 = 0;
    D_801535A0 = 0;
    do {
        p[0] = 0;
        p[1] = 0;
        i += 1;
        p += 2;
    } while (i < 0x200);
    func_800A5C7C_ovl_01(i);
}
