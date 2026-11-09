void func_80030F48_ovl_01(s32 a0, s32 a1, s32 a2, s32 a3, s32 t0, s32 t1)
{
    u8 *src;
    u8 *dst;
    s32 v1;

    a1 = a1 << 2;
    a0 += a1;
    a3 = a3 << 2;
    a2 += a3;
    if (t0 > 0) {
        do {
            src = *(u8 **)a0;
            a0 += 4;
            dst = *(u8 **)a2;
            a2 += 4;
            v1 = t1;
            while (v1 != 0) {
                *dst++ = *src++;
                v1--;
            }
            t0--;
        } while (t0 > 0);
    } else {
        a2 = a2 << 6;
        if (a2 > 0) {
            do {
                *(u16 *)a1 = *(u16 *)a0;
                a0 += 2;
                a2--;
                a1 += 2;
            } while (a2 > 0);
        }
    }
}
