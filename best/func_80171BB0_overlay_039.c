s32 func_80033634_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
void func_80171BB0_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
  volatile unsigned int var_a0;
  s32 temp_a0;
  u8 temp_v1;
  void *new_var;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x17000000;
      if ((*((u16 *) (((char *) arg0) + 0x2B6))) & 4)
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x16000000;
    }
      do
    {
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    }
    while (0);
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u8 *) (((char *) (new_var = arg0)) + 0x26F)) |= 0x80;
      *((u8 *) (((char *) arg0) + 0x25C)) |= 1;

    case 1:
      if (!((*((u16 *) (((char *) new_var) + 0x1AA))) & 0x4000))
    {
      *((u8 *) (((char *) new_var) + 6)) = 2U;
      return;
    }

    default:
      return;

    case 2:
      temp_a0 = 4;
      temp_a0 = (*((u16 *) (((char *) new_var) + 0x2B6))) & temp_a0;
      *((s32 *) (((char *) new_var) + 0x1E8)) = (s32) (((func_80033634_ovl_01() & 0xF) << 0x10) + 0x08000F00);
      if (temp_a0 != 0)
    {
      *((s32 *) (((char *) new_var) + 0x1E8)) = (s32) (((func_80033634_ovl_01(temp_a0) & 0xF) << 0x10) + 0x09000F00);
    }
      *((u8 *) (((char *) new_var) + 6)) = 3U;
      if ((*((u8 *) (((char *) new_var) + 0x2D5))) == 0)
    {
      var_a0 = 0xC;
      if (!(func_80033634_ovl_01() & 1))
      {
        var_a0 = 0xA;
        if (func_80033634_ovl_01(0xC) & 1)
        {
          var_a0 = 0xB;
        }
      }
      func_80077D48_ovl_01(var_a0);
      *((u8 *) (((char *) arg0) + 0x2D5)) = 0x96U;
    }

    case 3:
      *((u8 *) (((char *) arg0) + 6)) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      return;

    case 4:
      *((s32 *) (((char *) new_var) + 4)) = 0x01010000;
      *((u8 *) (((char *) arg0) + 0x26F)) &= 0x7F;
      *((u8 *) (((char *) arg0) + 0x25C)) &= 0xFE;
      *((s32 *) (((char *) new_var) + 0)) |= 0x0C000000;
      break;

  }

}

