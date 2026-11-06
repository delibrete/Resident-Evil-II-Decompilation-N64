extern int (*D_801762FC_overlay_057[])();
void func_8016F0C0_overlay_057(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0x3F;
  D_801762FC_overlay_057[new_var]();
}

