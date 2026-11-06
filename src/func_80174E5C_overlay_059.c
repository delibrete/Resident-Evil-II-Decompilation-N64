extern int (*D_80179008_overlay_059[])();
void func_80174E5C_overlay_059(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 1;
  D_80179008_overlay_059[new_var]();
}

