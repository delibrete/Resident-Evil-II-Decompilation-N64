s32 func_80033634_ovl_01();
s32 func_8003420C_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern s32 D_800C7650;
void func_801720D0_overlay_041(void *arg0, s32 arg1, s32 arg2)
{
  s16 temp_v1_4;
  s32 var_v1;
  u8 temp_v0;
  u8 temp_v0_2;
  u8 temp_v0_3;
  u8 temp_v1;
  u8 var_v0;
  void *temp_v1_2;
  void *temp_v1_3;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 0x26F)) = 0x80;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0B000700;
      *((s32 *) (((char *) arg0) + 0)) |= 2;
      temp_v0 = (func_80033634_ovl_01((void *) 0x0B000700) & 0x1F) + 0x19;
      *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v0;
      *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) (temp_v0 & 0xFF);
      func_8003420C_ovl_01(*((void **) (((char *) arg0) + 0x208)), D_800C7650);
      *((u16 *) (((char *) (*((void **) (((char *) arg0) + 0x208)))) + 4)) = 0x190U;
      *((u16 *) (((char *) (*((void **) (((char *) arg0) + 0x208)))) + 6)) = 0x190U;
      *((s16 *) (((char *) arg0) + 0x1F6)) = 0x3C;
      *((u8 *) (((char *) arg0) + 6)) = 1U;

    case 1:
      temp_v0_2 = (*((u8 *) (((char *) arg0) + 0x2B5))) - 1;
      *((u8 *) (((char *) arg0) + 0x2B5)) = temp_v0_2;
      if ((temp_v0_2 & 0xFF) == 0xFF)
    {
      if ((*((s16 *) (((char *) arg0) + 0x1F4))) >= 0x5B)
      {
        *((u8 *) (((char *) arg0) + 0x1E9)) = 0xBU;
        var_v0 = 6;
      }
      else
      {
        var_v0 = 0xC;
        if (func_80033634_ovl_01() & 1)
        {
          *((u8 *) (((char *) arg0) + 0x1E9)) = 0U;
        }
        else
        {
          *((u8 *) (((char *) arg0) + 0x1E9)) = 0xBU;
          var_v0 = 7;
        }
      }
      *((u8 *) (((char *) arg0) + 0x2B5)) = var_v0;
      *((u8 *) (((char *) arg0) + 6)) = 2U;
    }
      if ((*((s16 *) (((char *) arg0) + 0x1F6))) != 0)
    {
      temp_v1_2 = *((void **) (((char *) arg0) + 0x208));
      *((s16 *) (((char *) arg0) + 0x1F6)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1F6)))) - 1);
      *((u16 *) (((char *) temp_v1_2) + 4)) += 0xA;
      temp_v1_3 = *((void **) (((char *) arg0) + 0x208));
      *((u16 *) (((char *) temp_v1_3) + 6)) += 0xA;
      return;
    }
      return;

    case 2:
      var_v1 = 1;
      if ((*((s16 *) (((char *) arg0) + 0x1F4))) >= 0x5B)
    {
      temp_v0_3 = (*((u8 *) (((char *) arg0) + 0x2B6))) + 1;
      var_v1 = (temp_v0_3 & 1) == 0;
      *((u8 *) (((char *) arg0) + 0x2B6)) = temp_v0_3;
    }
    {
      if (((*((u8 *) (((char *) arg0) + 0x1E9))) == 0) && (func_80033634_ovl_01(arg0) & 1))
      {
        if ((*((s16 *) (((char *) arg0) + 0x1F4))) < 0x5A)
        {
          func_80077D48_ovl_01(3, arg0);
        }
      }
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      *((u8 *) (((char *) arg0) + 0x2B5)) -= 1;
    }
      if ((*((u8 *) (((char *) arg0) + 0x2B5))) == 0)
    {
      temp_v1_4 = ((u16) (*((s16 *) (((char *) arg0) + 0x1F4)))) + ((func_80033634_ovl_01() & 0xF) + 0xA);
      *((s16 *) (((char *) arg0) + 0x1F4)) = temp_v1_4;
      if (temp_v1_4 >= 0x97)
      {
        *((u8 *) (((char *) arg0) + 6)) = 3U;
        return;
      }
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u8 *) (((char *) arg0) + 0x2B5)) = (u8) (*((u8 *) (((char *) arg0) + 0x1F5)));
    }
      break;

  }

}

