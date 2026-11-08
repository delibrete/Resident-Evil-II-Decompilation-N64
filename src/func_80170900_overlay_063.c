typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_80173234_overlay_063[];
extern void func_80089D34_ovl_01(void *, void *, void *, s32);
extern void func_80033678(void *);
void func_80170900_overlay_063(void *a, void *b, void *c) {
    D_80173234_overlay_063[((u8 *)a)[6]](a, b, c);
    func_80089D34_ovl_01(a, b, c, 0x200);
    func_80033678(a);
}
