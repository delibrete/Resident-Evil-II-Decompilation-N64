typedef struct { u8 x[0x2D0]; } Obj;
extern u8 D_800E10F8[];
extern void func_80065400_ovl_01(Obj *, u8 *, s32, s32);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80173190_overlay_041[];
void func_80170FA0_overlay_041(Obj *a, s32 b, s32 c) {
    volatile Fn *tbl;
    func_80065400_ovl_01(a, D_800E10F8, 0, 0);
    tbl = D_80173190_overlay_041;
    tbl[a->x[5]](a, b, c);
}
