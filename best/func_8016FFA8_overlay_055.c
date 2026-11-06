extern int (*D_801708E0_overlay_055[])();
void func_8016FFA8_overlay_055(void *arg0)
{
  if ((*((u8 *) (((char *) arg0) + 0x2C8))) != (5 * 0))
  {
    D_801708E0_overlay_055[(*((u8 *) (((char *) arg0) + 5))) - 1]();
  }
}

