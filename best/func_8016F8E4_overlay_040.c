/* identical to func_80162D54_ovl_12 (matched), with its names changed by decompdecomp */
extern void func_80166458_ovl_12(void*); extern void func_80173490_overlay_040(void*,s32,s32);
typedef void (*Fn)(void);
extern volatile Fn D_80166D38_ovl_12[];
void func_8016F8E4_overlay_040(void*a){D_80166D38_ovl_12[*(u8*)((u8*)a+6)]();func_80166458_ovl_12(a);func_80173490_overlay_040(a,4,0);}
