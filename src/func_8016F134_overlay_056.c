/* identical to func_8016F0C0_overlay_057 (matched), with its names changed by decompdecomp */
extern int (*D_80175A60_overlay_056[])();
void func_8016F134_overlay_056(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_80175A60_overlay_056[new_var]();
}

