typedef struct { u8 x[0x400]; } Obj;
extern s32 func_80033634_ovl_01(void);
extern void func_80173490_overlay_040(Obj *, s32, s32);
typedef void (*Fn)(void);
extern volatile Fn D_80173A58_overlay_040[];
void func_8017276C_overlay_040(Obj *a) {
    D_80173A58_overlay_040[a->x[6]]();
    func_80173490_overlay_040(a, 3, 0);
    func_80173490_overlay_040(a, 2, 0);
    func_80173490_overlay_040(a, 2, (func_80033634_ovl_01() & 1) + 1);
}
