/* identical to func_8016F0C0_overlay_057 (matched), with its names changed by decompdecomp */
extern int (*D_80174ADC_overlay_048[])();
void func_8016F204_overlay_048(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_80174ADC_overlay_048[new_var]();
}

