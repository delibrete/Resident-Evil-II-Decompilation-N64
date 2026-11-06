void func_8009BED4_ovl_01(void *p);
void func_8009C094_ovl_01(void *p);

void func_8009BE50_ovl_01(void *arg0, s32 arg1) {
    func_8009BED4_ovl_01(arg0);
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    func_8009C094_ovl_01(arg0);
}
