s32 func_80163584_ovl_12(void);
s32 func_801640C0_ovl_12(void);
void func_80164088_overlay_012(void *arg0) {
    if (((u8 *)arg0)[6] == 0) {
        func_801640C0_ovl_12();
        return;
    }
    func_80163584_ovl_12();
}
