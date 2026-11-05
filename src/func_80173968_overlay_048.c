void func_80173968_overlay_048(void *arg0) {
    if ((*(u16 *)((s8 *)arg0 + 0x2BA)) & 0x2000) {
        *(s16 *)((s8 *)arg0 + 0x1F2) = 0;
        *(s32 *)((s8 *)arg0 + 4) = *(s32 *)((s8 *)arg0 + 0x298);
        func_8016F204_overlay_048();
        return;
    }
    func_801739AC_overlay_048();
}
