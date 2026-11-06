/* identical to func_8016F53C_overlay_039 (matched), with its names changed by decompdecomp */
/* identical to func_8016F0C0_overlay_057 (matched), with its names changed by decompdecomp */
extern int (*D_8016E0F4_overlay_011[])();
void func_801629AC_ovl_11(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_8016E0F4_overlay_011[new_var]();
}

