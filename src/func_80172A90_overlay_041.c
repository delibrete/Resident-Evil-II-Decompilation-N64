/* identical to func_80165F00_ovl_13 (matched), with its names changed by decompdecomp */
extern void func_80172DA4_overlay_041(void *p, s32 a1);
extern s32 func_80033634_ovl_01(void);
extern s32 func_80065658_ovl_01(void);
extern void func_80172778_overlay_041(void *p, s32 a1);

void func_80172A90_overlay_041(u8 *p) {
    if (*(u16 *)(p + 0x2C6) & 0x10) {
        s32 v;
        func_80172DA4_overlay_041(p, 0x15E);
        v = func_80033634_ovl_01() & 0x9D;
        *(s8 *)(p + 0x2BC) = v;
        *(s8 *)(p + 0x2BB) = func_80065658_ovl_01();
        *(s8 *)(p + 0x2B8) = 0x1E;
        func_80172778_overlay_041(p, 4);
        *(u16 *)(p + 0x2C6) &= 0xFFA7;
    }
}
