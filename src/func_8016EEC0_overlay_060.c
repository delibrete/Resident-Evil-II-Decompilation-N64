/* identical to func_8016F0C0_overlay_057 (matched), with its names changed by decompdecomp */
extern int (*D_80173A9C_overlay_060[])();
void func_8016EEC0_overlay_060(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_80173A9C_overlay_060[new_var]();
}

