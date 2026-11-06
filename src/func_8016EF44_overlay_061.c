/* identical to func_8016F0C0_overlay_057 (matched), with its names changed by decompdecomp */
extern int (*D_80173C40_overlay_061[])();
void func_8016EF44_overlay_061(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_80173C40_overlay_061[new_var]();
}

