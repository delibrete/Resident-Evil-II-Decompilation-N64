extern s32 D_80135C4C_overlay_001;
extern u8 D_80143F50[];
s32 func_8000C9E0(void *arg0, s32 arg1, s32 arg2);

s32 func_800A5618_ovl_01(void) {
    s32 v;
    if (D_80135C4C_overlay_001 == 0) {
        func_8000C9E0(D_80143F50, 0, 1);
    }
    v = D_80135C4C_overlay_001 + 1;
    D_80135C4C_overlay_001 = v;
    return v;
}
