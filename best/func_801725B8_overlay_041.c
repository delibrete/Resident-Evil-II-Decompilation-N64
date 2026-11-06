s32 func_8003420C_ovl_01();
s32 func_80089D34_ovl_01();
extern s32 D_800C7650;
void func_801725B8_overlay_041(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v1;
  s16 new_var;
  void *temp_v1_2;
  u8 temp_v0;
  void *temp_v1_3;
  new_var = *((s16 *) (((char *) arg0) + 0x1F6));
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 0x26F)) = 0x80;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0B000700;
      *((s32 *) (((char *) arg0) + 0)) |= 2;
      func_8003420C_ovl_01(*((void **) (((char *) arg0) + 0x208)));
      *((u16 *) (((char *) (*((void **) (((char *) arg0) + 0x208)))) + 4)) = 0x190U;
      *((u16 *) (((char *) (*((void **) (((char *) arg0) + 0x208)))) + 6)) = 0x190U;
      *((s16 *) (((char *) arg0) + 0x1F6)) = 0x3C;
      *((u8 *) (((char *) arg0) + 0x2B5)) = 0xBU;
      *((u8 *) (((char *) arg0) + 6)) = 1U;

    case 1:
      temp_v0 = *((u8 *) (((char *) arg0) + 0x2B5));
      if (temp_v0 != 0)
    {
      *((u8 *) (((char *) arg0) + 0x2B5)) = (u8) (temp_v0 - 1);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    }
      if ((*((s16 *) (((char *) arg0) + 0x1F6))) != 0)
    {
      temp_v1_2 = *((void **) (((char *) arg0) + 0x208));
      *((s16 *) (((char *) arg0) + 0x1F6)) = (s16) (((u16) new_var) - 1);
      *((u16 *) (((char *) temp_v1_2) + 4)) += 0xA;
      temp_v1_3 = *((void **) (((char *) arg0) + 0x208));
      *((u16 *) (((char *) temp_v1_3) + 6)) += 0xA;
      return;
    }
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      return;

  }

}

