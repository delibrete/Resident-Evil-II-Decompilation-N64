extern u16 D_801399F0[];

void func_80042D90_ovl_01(u16 *arg0)
{
    u16 *t0;
    s32 a3;
    s32 a1;
    u16 *a2;
    u16 *v1;
    u16 v;

    t0 = D_801399F0;
    a3 = 2;
    do {
        a2 = t0;
        a1 = 2;
        v1 = arg0;
        do {
            v = *v1;
            v1++;
            a1--;
            *a2 = v;
            a2++;
        } while (a1 != -1);
        t0 += 3;
        a3--;
        arg0 += 3;
    } while (a3 != -1);
}
