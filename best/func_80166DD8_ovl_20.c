s32 func_80162674_ovl_20(void);
s32 func_80166E1C_ovl_20(void);
void func_80166DD8_ovl_20(void *arg0) {
    if ((*(u16 *)((u8 *)arg0 + 0x2BA)) & 0x2000) {
        *(s16 *)((u8 *)arg0 + 0x1F2) = 0;
        *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg0 + 0x298);
        func_80162674_ovl_20();
        return;
    }
    func_80166E1C_ovl_20();
}
