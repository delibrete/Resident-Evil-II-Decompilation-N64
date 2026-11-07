extern int (*D_80175B50_overlay_056[])();
void func_801723EC_overlay_056(void *arg0)
{
  int (**new_var)();
  new_var = &D_80175B50_overlay_056[*((u8 *) (((char *) arg0) + 0x2B4))];
  (*new_var)();
}

