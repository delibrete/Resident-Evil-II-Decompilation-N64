typedef struct { u8 x[0x400]; } Obj;
typedef void (*Fn)(void *);
extern volatile Fn D_8016FB8C_overlay_064[];
extern void func_8016F418_overlay_064(void *);
void func_8016F59C_overlay_064(Obj *a) {
    D_8016FB8C_overlay_064[a->x[6]](a);
    func_8016F418_overlay_064(a);
}
