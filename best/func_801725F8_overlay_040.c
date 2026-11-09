extern u32 D_801739FC_overlay_040;
extern u32 D_80173A48_overlay_040;

void func_801725F8_overlay_040(u8 *arg0) {
    u32 *tbl;
    s32 idx;

    if (arg0[6] == 0) {
        tbl = &D_801739FC_overlay_040;
        idx = arg0[5] - 1;
    } else {
        idx = arg0[6];
        tbl = &D_80173A48_overlay_040;
    }
    ((void (*)(void))tbl[idx])();
}
