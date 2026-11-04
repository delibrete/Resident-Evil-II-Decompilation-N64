/* identical to func_80166218_ovl_12 (matched), with its names changed by decompdecomp */
extern void func_80172648_overlay_040(void);
extern s32 func_80033634_ovl_01(void);
extern s32 func_80173490_overlay_040(void *, s32, s32);
void func_80172DA8_overlay_040(void *arg0)
{
    func_80172648_overlay_040();
    {
        u32 i = 0;
        u32 val = 0x3F203F;
        s32 off = i;
        do
        {
            i++;
            *(u32 *)(*(u8 **)((u8 *)arg0 + 0x234) + off + 0x60) = val;
            off += 0x178;
        } while (i < 0x11);
    }
    *(u8 *)((u8 *)arg0 + 0x2BB) = 20;
    *(u8 *)((u8 *)arg0 + 0x207) = 0;
    func_80173490_overlay_040(arg0, func_80033634_ovl_01() & 15, 11);
    func_80173490_overlay_040(arg0, func_80033634_ovl_01() & 15, 12);
    func_80173490_overlay_040(arg0, 1, 12);
}
