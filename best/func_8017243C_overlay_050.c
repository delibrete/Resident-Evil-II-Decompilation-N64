s32 func_8016EC54_overlay_050(void *arg0, s32);
extern s32 D_8017341C_overlay_050;
extern s32 D_80173420_overlay_050;
void func_8017243C_overlay_050(void *arg0)
{
  s8 *new_var;
  s8 var_v0;
  var_v0 = 3;
 do { if ((*((s16 *) (((char *) arg0) + 0x1F2))) >= 0x4E20) { goto dummy_label_590183; dummy_label_590183: ; new_var = (s8 *) (((char *) arg0) + 0x26E); var_v0 = 4; if (func_8016EC54_overlay_050(arg0, 4) != 0) { var_v0 = 1; if (!((*((u16 *) (((char *) arg0) + 0x26C))) & 0x20)) { *new_var = 0; return; } } } } while (0);
  *((s8 *) (((char *) arg0) + 0x26E)) = var_v0;
}
