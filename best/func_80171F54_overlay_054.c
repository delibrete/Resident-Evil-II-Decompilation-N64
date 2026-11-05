extern s32 func_80033634_ovl_01(void);
extern s32 func_801736A8_overlay_054(void *arg0, u8 arg1, s32 arg2);
extern void func_80171998_overlay_054(void *arg0, s32 arg1, s32 arg2);
extern u8 D_80173D40_overlay_054[];
typedef struct S_obj { u8 pad_00[0x2D8]; s8 unk_2D8; } S_obj;
void func_80171F54_overlay_054(S_obj *p, s32 a, s32 b) {
    volatile u8 *tab = D_80173D40_overlay_054;
    s32 x;
    
    x = func_80033634_ovl_01() & 0xF;
    func_801736A8_overlay_054(p, tab[x], 10);
    x = func_80033634_ovl_01() & 0xF;
    func_801736A8_overlay_054(p, tab[x], 10);
    p->unk_2D8 = 15;
    func_80171998_overlay_054(p, a, b);
}
