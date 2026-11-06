extern int (*D_80175AE8_overlay_056[])();
void func_8016F1E8_overlay_056(void *arg0, s32 arg1, unsigned int arg2)
{
  do
  {
    D_80175AE8_overlay_056[*((u8 *) (((char *) arg0) + 5))]();
  }
  while (0);
  D_80175AE8_overlay_056[*((u8 *) (((char *) arg0) + 5))](arg0, arg1, arg2);
}

