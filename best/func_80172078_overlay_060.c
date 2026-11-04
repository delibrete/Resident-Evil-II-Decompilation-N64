s32 func_80036038_ovl_01();
extern char D_80173E2C_overlay_060[];
extern char D_80173E98_overlay_060[];
void func_80172078_overlay_060(s32 *arg0, s32 *arg1)
{
  char *new_var;
  new_var = (char *) arg0;
 do { func_80036038_ovl_01(arg0, *((s32 **) (new_var + 0x234)), &D_80173E98_overlay_060, func_80036038_ovl_01(*((s32 **) (((char *) arg0) + 0x234)), &D_80173E2C_overlay_060, arg1)); } while (0);
}
