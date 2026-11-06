extern int (*D_80178F18_overlay_059[])();
extern int (*D_80178F60_overlay_059[])();
void func_8016F0F4_overlay_059(void *arg0, s32 arg1, s32 arg2)
{
  char *new_var;
  if (new_var || arg0)
  {
    D_80178F18_overlay_059[*((u8 *) (((char *) arg0) + 5))]();
    new_var = (char *) arg0;
    D_80178F60_overlay_059[*((u8 *) (new_var + 5))](arg0, arg1, arg2);
  }
  else
  {
    D_80178F18_overlay_059[*((u8 *) (((char *) arg0) + 5))]();
    new_var = (char *) arg0;
    D_80178F60_overlay_059[*((u8 *) (new_var + 5))](arg0, arg1, arg2);
  }
}

