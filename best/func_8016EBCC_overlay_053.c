extern int (*D_8016FB68_overlay_053[])();
extern int (*D_8016FB88_overlay_053[])();
void func_8016EBCC_overlay_053(void *arg0, s32 arg1, s32 arg2)
{
  do
  {
    D_8016FB68_overlay_053[*((u8 *) (5 + ((char *) arg0)))]();
  }
  while (0);
  D_8016FB88_overlay_053[*((u8 *) (((char *) arg0) + 5))](arg0, arg1, arg2);
}

