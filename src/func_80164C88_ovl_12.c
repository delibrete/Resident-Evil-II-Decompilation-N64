typedef void (*Fn)(void *);
extern volatile Fn D_80166D8C_ovl_12[];
extern void func_80165280_ovl_12(void *);
void func_80164C88_ovl_12(void *arg0) {
    register u8 flags = *(u8 *)((u8 *)arg0 + 0x2BF);
    if (!(flags & 0x80)) {
        register u8 state = *(u8 *)((u8 *)arg0 + 5);
        D_80166D8C_ovl_12[state - 1](arg0);
    } else {
        func_80165280_ovl_12(arg0);
    }
}
