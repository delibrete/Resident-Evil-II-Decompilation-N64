extern u8 D_8012BF38_overlay_001[];
extern u8 D_800C7650_overlay_001[];
extern u8 D_8012FF48_overlay_001[];

s32 func_8008C3F4_ovl_01(void) {
    u8 *t1 = D_8012BF38_overlay_001;
    u32 big = 0x20000;
    u8 a3 = t1[0xC];
    u8 a2 = t1[0xD];
    u8 *qa = (u8 *)D_800C7650_overlay_001 + (a3 << 2) + big;
    u8 *qb = (u8 *)D_800C7650_overlay_001 + (a2 << 2) + big;
    u8 x = qa[0x1818];
    u8 y = qb[0x1818];
    u8 *rec;
    u8 *p;
    u8 cnt;
    s32 t0 = 0;

    if (a2 == a3) {
        return 0;
    }
    if (y == 0) {
        return 0;
    }
    rec = D_8012FF48_overlay_001 + (x << 3);
    cnt = rec[3];
    if (cnt == 0) {
        return 0;
    }
    p = *(u8 **)(rec + 4);
    do {
        if (p[0] == y) {
            t1[0x26] = p[2];
            t1[0x27] = p[3];
            return p[1];
        }
        t0++;
        p += 4;
    } while (t0 < cnt);
    return 0;
}
