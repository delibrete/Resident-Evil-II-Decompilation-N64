/* identical to func_80162364_overlay_030 (matched), with its names changed by decompdecomp */
s32 func_801746E8_overlay_058(void *, s32, s32, s16);
void func_8016EEF4_overlay_058(void *arg0) {
    u16 value = *(u16 *)((u8 *)arg0 + 0x1F4) - 0x200;
    *(u16 *)((u8 *)arg0 + 0x1F4) = value;
    if ((s16)value < 0) *(u16 *)((u8 *)arg0 + 0x1F4) = 0;
    func_801746E8_overlay_058(arg0, 9, 0, *(s16 *)((u8 *)arg0 + 0x1F4));
    func_801746E8_overlay_058(arg0, 6, 0, *(s16 *)((u8 *)arg0 + 0x1F4));
}
