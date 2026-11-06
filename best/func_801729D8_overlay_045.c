extern int (*D_80174AE0_overlay_045[])();
s32 func_80172CC8_overlay_045();
void func_801729D8_overlay_045(void *arg0)
{
  int (*new_var)();
  int (**new_var2)();
  new_var2 = D_80174AE0_overlay_045;
  if ((*((u8 *) (((char *) arg0) + 0x2C0))) == 0)
  {
    new_var = new_var2[*((u8 *) (((char *) arg0) + 0x2BE))];
    new_var();
    return;
  }
  func_80172CC8_overlay_045();
}

