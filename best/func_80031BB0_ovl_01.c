typedef struct {
    s32 f0;
    s32 f4;
    u8 *f8;
    s32 fC;
} Entry31BB0;

typedef struct {
    s32 pad0;
    s32 count;
    Entry31BB0 *entries;
} List31BB0;

typedef struct {
    u8 pad0[0x48];
    s32 f48;
    List31BB0 *f4C;
} Obj31BB0;

s32 func_80031BB0_ovl_01(Obj31BB0 *arg0, s32 arg1) {
    s32 m1 = -1;
    s32 t1, t0;
    List31BB0 *list;
    s32 count;
    Entry31BB0 *entry;
    s32 n;
    u8 *p;
    u8 *q;
    s32 val;

    t0 = t1 = 0;
    list = arg0->f4C;
    count = list->count;
    entry = list->entries;
loop:
    count -= 1;
    if (count != m1) {
        p = entry->f8;
        if (p == 0) {
            entry++;
        } else {
            n = entry->f0 - 1;
            if (n != m1) {
                q = p + 0xE;
                do {
                    val = *(s16 *)q;
                    *(s16 *)(q - 2) = t0;
                    q += 0x10;
                    n -= 1;
                    t1 += val;
                    t0 += val;
                } while (n != m1);
            }
            entry++;
        }
        goto loop;
    }
    if (t1 > 0) {
        arg1 = (arg1 + 7) & ~7;
        arg0->f48 = arg1;
        arg1 += t1 << 4;
    } else {
        arg0->f48 = 0;
    }
    return arg1;
}
