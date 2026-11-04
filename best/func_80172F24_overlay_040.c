s32 func_8003334C_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80172F24_overlay_040(void *arg0, s32 arg1, unsigned int arg2)
{
  char *new_var3;
  u8 *new_var2;
  int new_var;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 5));
  switch (temp_v1)
  {
    new_var3 = (char *) arg0;
    case 0:
      *((u8 *) (new_var3 + 5)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x1F00;
      *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 1);
      return;

    case 1:
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + 0x800);
      func_8003334C_ovl_01(arg0, arg1, arg2, 0);
      temp_v1++;
      new_var = 0x66;
      new_var2 = (u8 *) (((char *) arg0) + 5);
      temp_v1--;
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + new_var))) - 0x800);
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (*((s16 *) (((char *) arg0) + 0x25E)));
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0)
    {
      *new_var2 = 2U;
    }
      return;

  }

}

