s32 func_80032C08_ovl_01(void *, s32, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, u32);
s32 func_80077F60_ovl_01(s32, s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650_ovl_01;
void func_80082040_ovl_01(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v1_2;
  u16 temp_a3;
  u16 temp_a3_2;
  u8 temp_v1;
  void *new_var;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s8 *) (((char *) arg0) + 0x1EA)) = 7;
      if ((*((u16 *) (((char *) arg0) + 0x268))) & 0x40)
    {
      *((s8 *) (((char *) arg0) + 0x1EA)) = 0;
    }
      temp_a3 = *((u16 *) (((char *) arg0) + 0x268));
      if (temp_a3 & 0x100)
    {
      func_800334F8_ovl_01(arg0, arg1, arg2, temp_a3 != 0);
    }

    case 1:
      temp_v1_2 = *(*((s32 **) (((char *) arg0) + 0x214)));
      if (temp_v1_2 & 0x4000)
    {
      func_80077F60_ovl_01(0, ((((u32) (temp_v1_2 & 0x2000)) >> 0xD) * 3) + 4, arg0);
      *((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A7A)) = (u16) ((*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A7A))) | 2);
    }
      func_800334F8_ovl_01(arg0, arg1, arg2, ((u8) (*((u8 *) (((char *) arg0) + 0x269)))) >> 7);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, ((((u8) (*((u8 *) (((char *) arg0) + 0x269)))) >> 7) << 0x10) | 0x200) != 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      new_var = arg0;
      if ((*((u16 *) (((char *) arg0) + 0x268))) & 4)
      {
        *((u8 *) (((char *) arg0) + 6)) = 1U;
      }
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + (*((u16 *) (((char *) arg0) + 0x272))));
      func_80032C08_ovl_01(new_var, 0, 0);
      return;
    }
      func_80032C08_ovl_01(arg0, 0, 0);
      temp_a3_2 = *((u16 *) (((char *) arg0) + 0x268));
      if (temp_a3_2 & 8)
    {
      if (func_80089D34_ovl_01(arg0, arg1, arg2, (((temp_a3_2 & 0x80) != 0) << 0x10) | 0x200) != 0)
      {
        *((u8 *) (((char *) arg0) + 6)) = 2U;
        if ((*((u16 *) (((char *) arg0) + 0x268))) & 4)
        {
          *((u8 *) (((char *) arg0) + 6)) = 1U;
        }
        *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + (*((u16 *) (((char *) arg0) + 0x272))));
      }
      func_80032C08_ovl_01(arg0, 0, 0);
    }
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + (*((u16 *) (((char *) arg0) + 0x270))));
      return;

  }

}

