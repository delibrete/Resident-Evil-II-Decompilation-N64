extern volatile s32 D_80112780_overlay_001;
extern volatile s32 D_80112788_overlay_001;
extern u8 D_80139F30[];
s32 func_8000C9E0(void *arg0, void *arg1, s32 arg2);

s32 func_8006BC70_ovl_01(s32 arg0)
{
    if (arg0 != 0) {
        return 0;
    }
    if (D_80112788_overlay_001 == D_80112780_overlay_001) {
        return 1;
    }
    while (D_80112788_overlay_001 != D_80112780_overlay_001) {
        func_8000C9E0(D_80139F30, (void *) &D_80112788_overlay_001, 1);
    }
    return 1;
}
