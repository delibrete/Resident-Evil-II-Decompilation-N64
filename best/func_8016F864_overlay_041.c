s32 func_80032C08_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80172CE8_overlay_041();
void func_8016F864_overlay_041(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v0;
  u8 temp_v1;
  s32 *new_var;
  int new_var2;
  u8 var_v0;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      if (func_80033634_ovl_01() & 1)
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03000700;
      var_v0 = 2;
    }
    else
    {
      new_var = (s32 *) (((char *) arg0) + 0x1E8);
      *new_var = 0x04000700;
      new_var2 = !(func_80033634_ovl_01() & 7);
      var_v0 = 3;
      if (new_var2)
      {
        func_80172CE8_overlay_041(arg0, 1);
        var_v0 = 3;
      }
    }
      *((u8 *) (((char *) arg0) + 0x2B4)) = var_v0;
      *((u8 *) (((char *) arg0) + 0x2B5)) = (u8) (func_80033634_ovl_01() & 0x1F);
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
      *((u8 *) (((char *) arg0) + 6)) = 1U;

    case 1:
      do { func_80032DEC_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x20); } while (0);
      func_80032C08_ovl_01(arg0, 0, 0);
      if ((*((s16 *) (((char *) arg0) + 0x1E0))) < 0x12C)
    {
      *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1E0)))) + (*((u8 *) (((char *) arg0) + 0x2B4))));
    }
      func_80089D34_ovl_01(arg0, arg1);
      temp_v0 = (*((u8 *) (((char *) arg0) + 0x2B5))) - 1;
      *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v0;
      if ((temp_v0 & 0xFF) == 0xFF)
    {
      *((u8 *) (((char *) arg0) + 6)) = 0U;
    }
      return;

  }

}

