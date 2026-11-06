s32 func_800362C0_ovl_01();
s32 func_80036764_ovl_01();
extern char D_80172F68_overlay_050[];
extern char D_80173038_overlay_050[];
extern volatile unsigned int D_80173108_overlay_050[];
extern char D_80173148_overlay_050[];
extern char D_80173188_overlay_050[];
void func_8016E894_overlay_050(s32 *arg0)
{
  s32 **new_var2;
  char (*new_var)[];
  func_800362C0_ovl_01(arg0, *((s32 **) (((char *) arg0) + 0x234)), &D_80172F68_overlay_050);
  func_800362C0_ovl_01(arg0, *((s32 **) (((char *) arg0) + 0x234)), &D_80173038_overlay_050);
  new_var = &D_80173108_overlay_050;
  new_var2 = &(*((s32 **) (((char *) arg0) + 0x234)));
  func_800362C0_ovl_01(arg0, *new_var2, new_var);
  func_800362C0_ovl_01(arg0, *new_var2, &D_80173148_overlay_050);
  func_800362C0_ovl_01(arg0, *new_var2, &D_80173188_overlay_050);
  func_80036764_ovl_01(arg0, *new_var2);
}

