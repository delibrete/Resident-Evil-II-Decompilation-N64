s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80165BE8_ovl_13(void *, s32);
void func_80170194_overlay_041(void *arg0, s32 arg1, s32 arg2)
{
  int new_var;
  char *new_var2;
  u8 temp_v1;
  new_var2 = (char *) arg0;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000700;
      *((u8 *) (((char *) arg0) + 6)) = 1U;

    new_var = 0x60;
    case 1:
      func_80032DEC_ovl_01(arg0, *((s16 *) (new_var2 + 0x260)), *((s16 *) (new_var2 + 0x262)), new_var);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0)
    {
      *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) (func_80033634_ovl_01() & 0xF);
      func_80165BE8_ovl_13(arg0, 0);
    }
      return;

  }

}

