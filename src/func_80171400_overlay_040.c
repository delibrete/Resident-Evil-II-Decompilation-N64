/* identical to func_8016F15C_overlay_064 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void *);
extern Fn D_80173900_overlay_040[];
extern void jtbl_80172FE8_overlay_041(void *);
void func_80171400_overlay_040(void *arg0) {
    u8 index = ((u8 *)arg0)[6];
    D_80173900_overlay_040[index](arg0);
    jtbl_80172FE8_overlay_041(arg0);
}
