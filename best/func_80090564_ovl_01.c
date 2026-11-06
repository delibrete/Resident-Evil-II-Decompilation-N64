extern s32 D_800C7650_ovl_01;
extern s32 D_8012BF38_ovl_01;
void func_80090564_ovl_01(s32 arg0)
{
  s32 *new_var;
  s32 temp_t0;
  s32 var_a1;
  s32 var_a2;
  u8 temp_v0;
  u8 temp_v0_2;
  u8 temp_v0_3;
  u8 temp_v0_4;
  var_a1 = 8;
  var_a2 = 0;
  new_var = &D_8012BF38_ovl_01;
  temp_t0 = (*((s8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x11))) * 8;
  if ((*((s8 *) (((char *) new_var) + 0x11))) != 3)
  {
    do
    {
      var_a1 -= 1;
      if ((*((u8 *) (((char *) ((temp_t0 + var_a1) + (&D_800C7650_ovl_01))) + 0x21944))) != 0xFF)
      {
        var_a2 += 1;
      }
    }
    while (var_a1 != 0);
    if (var_a2 != 0)
    {
      if (arg0 == 0)
      {
        do
        {
          temp_v0_2 = (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12))) + 1;
          *((u8 *) (((char *) new_var) + 0x12)) = temp_v0_2;
          if (((s8) temp_v0_2) >= 8)
          {
            *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12)) = 0U;
          }
        }
        while ((*((u8 *) (((char *) ((temp_t0 + ((s8) (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12))))) + (&D_800C7650_ovl_01))) + 0x21944))) == 0xFF);
      }
      else
      {
        do
        {
          temp_v0 = (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12))) - 1;
          *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12)) = temp_v0;
          if (temp_v0 & 0x80)
          {
            *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12)) = 7U;
          }
        }
        while ((*((u8 *) (((char *) ((temp_t0 + ((s8) (*((u8 *) (((char *) new_var) + 0x12))))) + (&D_800C7650_ovl_01))) + 0x21944))) == 0xFF);
      }
    }
  }
  else
    if ((*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x2196B))) != 0xFF)
  {
    if (arg0 == 0)
    {
      temp_v0_4 = (*((&D_8012BF38_ovl_01) + 0x12)) + 1;
      *((u8 *) (((char *) new_var) + 0x12)) = temp_v0_4;
new_var = 0;
      if (((*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x2196B))) - 1) < ((s8) temp_v0_4))
      {
        *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12)) = 0U;
      }
    }
    else
    {
      temp_v0_3 = (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12))) - 1;
      *((u8 *) (((char *) new_var) + 0x12)) = temp_v0_3;
      if (temp_v0_3 & 0x80)
      {
        *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12)) = (u8) ((*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x2196B))) - 1);
      }
    }
  }
}

