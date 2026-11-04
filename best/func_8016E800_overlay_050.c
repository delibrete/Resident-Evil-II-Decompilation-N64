s32 func_80036038_ovl_01();
extern char D_80172F68_overlay_050[];
extern char D_80173038_overlay_050[];
extern char D_80173108_overlay_050[];
extern char D_80173148_overlay_050[];
extern char D_80173188_overlay_050[];
void func_8016E800_overlay_050(s32 *arg0, s32 *arg1)
{
  s32 *new_var;
  new_var = arg0;
 do { func_80036038_ovl_01(arg0, *((s32 **) (((char *) arg0) + 0x234)), &D_80173188_overlay_050, func_80036038_ovl_01(arg0, *((s32 **) (((char *) arg0) + 0x234)), &D_80173148_overlay_050, func_80036038_ovl_01(arg0, *((s32 **) (((char *) arg0) + 0x234)), &D_80173108_overlay_050, func_80036038_ovl_01(arg0, *((s32 **) (((char *) new_var) + 0x234)), &D_80173038_overlay_050, func_80036038_ovl_01(*((s32 **) (((char *) new_var) + 0x234)), &D_80172F68_overlay_050, arg1))))); } while (0);
}
