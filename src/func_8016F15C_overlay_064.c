/* identical to func_80164870_ovl_12 (matched), with its names changed by decompdecomp */
/* identical to func_8016F15C_overlay_064 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void *);
extern Fn D_8016FB78_overlay_064[];
extern void func_8016F418_overlay_064(void *);
void func_8016F15C_overlay_064(void *arg0) {
    u8 index = ((u8 *)arg0)[6];
    D_8016FB78_overlay_064[index](arg0);
    func_8016F418_overlay_064(arg0);
}
