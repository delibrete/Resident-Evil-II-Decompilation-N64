extern int (*D_8017630C_overlay_057[])();
extern int (*D_80176334_overlay_057[])();
void func_8016F0F8_overlay_057(void *arg0, s32 arg1, s32 arg2)
{
  int (**new_var)();
  do
  {
    new_var[*((u8 *) (((char *) arg0) + ((unsigned long) 5)))]();
    new_var = D_8017630C_overlay_057;
  }
  while (0);
  D_80176334_overlay_057[*((u8 *) (((char *) arg0) + 5))](arg0, arg1, arg2);
}

