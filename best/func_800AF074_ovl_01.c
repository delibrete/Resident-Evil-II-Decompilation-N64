extern void *D_801583D0;
s32 func_800AF074_ovl_01(u32 arg0) {
    void *p;
    void *found;
    if (arg0 != 0xFFFFFFFF) {
        found = 0;
        p = D_801583D0;
        if (p != 0) {
            do {
                u32 k = *(u32 *)((char *)p + 8);
                if (k == arg0) {
                    found = p;
                    break;
                }
                if (arg0 < k) {
                    break;
                }
                p = *(void **)p;
            } while (p != 0);
        }
        if (found != 0) {
            return *(s32 *)((char *)found + 0xC);
        }
    }
    return -1;
}
