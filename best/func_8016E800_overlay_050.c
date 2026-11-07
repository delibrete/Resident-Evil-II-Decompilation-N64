extern int func_80036038_ovl_01(void *, int, void *, int);
extern unsigned char D_80172F68_overlay_050[],D_80173038_overlay_050[],D_80173108_overlay_050[],D_80173148_overlay_050[],D_80173188_overlay_050[];
void func_8016E800_overlay_050(void *a, int b)
{
 int r;
 r=func_80036038_ovl_01(a,*(int*)((unsigned char*)a+0x234),D_80172F68_overlay_050,b);
 r=func_80036038_ovl_01(a,*(int*)((unsigned char*)a+0x234),D_80173038_overlay_050,r);
 r=func_80036038_ovl_01(a,*(int*)((unsigned char*)a+0x234),D_80173108_overlay_050,r);
 r=func_80036038_ovl_01(a,*(int*)((unsigned char*)a+0x234),D_80173148_overlay_050,r);
 r=func_80036038_ovl_01(a,*(int*)((unsigned char*)a+0x234),D_80173188_overlay_050,r);
}
