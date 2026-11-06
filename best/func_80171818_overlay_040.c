extern int (*D_8017391C_overlay_040[])();
s32 func_80171E10_overlay_040();
void func_80171818_overlay_040(void *arg0)
{
  u8 *new_var;
  int new_var2;
  new_var = (u8 *) (((char *) arg0) + 5);
  if (!((*((u8 *) (((char *) arg0) + 0x2BF))) & 0x80))
  {
    new_var2 = (*new_var) - 1;
    D_8017391C_overlay_040[new_var2]();
    return;
  }
  func_80171E10_overlay_040();
}

