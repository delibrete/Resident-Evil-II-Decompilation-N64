/* identical to func_801649A8_ovl_19 (matched), with its names changed by decompdecomp */
extern volatile u32 func_80172008_overlay_063[];
void func_80171538_overlay_047(void *arg0) { volatile u32 *table = func_80172008_overlay_063 + 2; s32 i = *((u8 *)arg0 + 5); i -= 1; ((void (*)(void))table[i])(); }
