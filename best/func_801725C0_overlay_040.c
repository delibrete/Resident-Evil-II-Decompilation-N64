/* identical to func_801649A8_ovl_19 (matched), with its names changed by decompdecomp */
extern volatile u32 func_801739A8_overlay_061[];
void func_801725C0_overlay_040(void *arg0) { volatile u32 *table = func_801739A8_overlay_061 + 2; s32 i = *((u8 *)arg0 + 5); i -= 1; ((void (*)(void))table[i])(); }
