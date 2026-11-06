/* identical to func_8016F53C_overlay_039 (matched), with its names changed by decompdecomp */
/* identical to func_8016F0C0_overlay_057 (matched), with its names changed by decompdecomp */
extern int (*D_8016F120_overlay_062[])();
void func_8016E9CC_overlay_062(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_8016F120_overlay_062[new_var]();
}

