/* identical to func_8008E0E0 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
u8 *func_8000DE40(u8 *arg0, s32 arg1) {
    u8 *p = arg0;
    u8 v = *p;
    u8 c = arg1;

    if (v != c) {
        do {
            if (v == 0) {
                return NULL;
            }
            p++;
            v = *p;
        } while (v != c);
    }
    return p;
}
