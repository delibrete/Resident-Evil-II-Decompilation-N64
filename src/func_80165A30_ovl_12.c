extern int (*D_80166E20_overlay_012[])();
void func_80165A30_ovl_12(void *arg0)
{
  int new_var;
  new_var = (*((u8 *) (((char *) arg0) + 5))) - 1;
  D_80166E20_overlay_012[new_var]();
}

