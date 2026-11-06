extern s32 D_80187020_ovl_02;
extern s32 *D_80187420_ovl_02;
void func_8017FF94_ovl_02(void)
{
  s16 *dst;
  s32 x;
  int new_var;
  D_80187420_ovl_02 = &D_80187020_ovl_02;
  x = -0x200;
  dst = (s16 *) (((u8 *) (&D_80187020_ovl_02)) - 0x400);
  new_var = x < (-0x100);
  do
  {
    if (new_var)
    {
      do
      {
        *dst = -0x100;
      }
      while (0);
    }
    if (x < 0x100)
    {
      *dst = x;
    }
    else
    {
      goto next;
      *dst = 0xff;
    }
    next:
    x++;

    dst++;
  }
  while (x < 0x200);
}

