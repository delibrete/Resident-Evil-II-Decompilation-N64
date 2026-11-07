extern int (*D_801731F8_overlay_041[])();
void func_80172DB8_overlay_041(void *arg0)
{
  int (**new_var)();
  int (***new_var2)();
  new_var = D_801731F8_overlay_041;
  new_var2 = &new_var;
  (*new_var2)[*((u8 *) (((char *) arg0) + 5))]();
}

