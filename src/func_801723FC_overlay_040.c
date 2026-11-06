/* identical to func_8016586C_ovl_12 (matched), with its names changed by decompdecomp */
/* identical to func_801723FC_overlay_040 (matched), with its names changed by decompdecomp */
/* identical to func_801723FC_overlay_040 (matched), with its names changed by decompdecomp */
void func_801718A0_overlay_040(void);
s32 func_80033634_ovl_01(void);
void func_80173490_overlay_040(void *, s32, s32);
void func_8017186C_overlay_040(void *, void *, void *);
void func_801723FC_overlay_040(u8 *p, void *arg1, void *arg2)
{
 { if (p[6] == 0) { func_801718A0_overlay_040(); p[0x2BB] = 8; func_80173490_overlay_040(p, func_80033634_ovl_01() & 0xF, 0xB); p[0x207] = 0; } func_8017186C_overlay_040(p, arg1, arg2); p[0x207]++; if ((((s8) p[0x207]) % 3) == 0) { func_80173490_overlay_040(p, func_80033634_ovl_01() & 0xF, 0xB); func_80173490_overlay_040(p, func_80033634_ovl_01() & 0xF, 0xB); } }
}
