/* identical to func_80174E5C_overlay_059 (matched), with its names changed by decompdecomp */
extern int (*D_8016C478_overlay_031[])();
void func_801682CC_ovl_31(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 1;
  D_8016C478_overlay_031[new_var]();
}

