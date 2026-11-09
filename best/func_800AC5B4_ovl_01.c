extern u8 D_80148C20;
extern u8 D_8014CF20;

void func_800AC5B4_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *base;
    s32 off;
    s32 idx;

    idx = arg2 & 0xFF;
    if (idx != 0xFF) {
        base = &D_80148C20;
        off = (arg0 & 0xFF) + ((arg1 & 0xFF) * 0x86);
        off += idx * 0x860;
    } else {
        base = &D_8014CF20;
        off = (arg0 & 0xFF) + ((arg1 & 0xFF) * 0x86);
    }
    base[off] = arg3 & 0x7F;
}
