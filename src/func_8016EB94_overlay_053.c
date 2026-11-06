/* identical to func_80174E5C_overlay_059 (matched), with its names changed by decompdecomp */
extern int (*D_8016FB60_overlay_064[])();
void func_8016EB94_overlay_053(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 1;
  D_8016FB60_overlay_064[new_var]();
}

