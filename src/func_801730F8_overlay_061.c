extern s32 D_80173E50_overlay_061[], D_80173ED8_overlay_061[], D_80173F50_overlay_061[];
s32 func_80036038_ovl_01(s32, s32, s32, s32);
void func_801730F8_overlay_061(s32 p, s32 a1) {
 s32 r = func_80036038_ovl_01(p, *(s32 *)(p + 0x234), (s32)D_80173E50_overlay_061, a1);
 r = func_80036038_ovl_01(p, *(s32 *)(p + 0x234), (s32)D_80173ED8_overlay_061, r);
 func_80036038_ovl_01(p, *(s32 *)(p + 0x234), (s32)D_80173F50_overlay_061, r);
}
