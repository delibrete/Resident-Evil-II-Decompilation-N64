/* identical to func_8016F15C_overlay_064 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void *);
extern Fn D_80166D70_overlay_012[];
extern void jtbl_80166458_overlay_013(void *);
void func_80164870_ovl_12(void *arg0) {
    u8 index = ((u8 *)arg0)[6];
    D_80166D70_overlay_012[index](arg0);
    jtbl_80166458_overlay_013(arg0);
}
