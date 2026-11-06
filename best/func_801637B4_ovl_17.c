extern volatile u32 D_80167DBC_ovl_17[];
void func_801637B4_ovl_17(void *arg0) {
    volatile u32 *base = D_80167DBC_ovl_17;
    u32 new_var;
    u32 idx = *(((u8 *)arg0) + 5);
    new_var = idx;
    ((void (*)(void))base[new_var])();
}
