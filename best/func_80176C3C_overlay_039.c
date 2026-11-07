s32 func_80033634_ovl_01();
s32 func_80035AAC_ovl_01_108(void *);
s32 func_800377B0_ovl_01(s32, s16, s32, s16 *);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32);
s32 func_80174420_overlay_039(void *);
s32 func_801745CC_overlay_039(void *);
s32 func_801746B4_overlay_039(void *);
s32 func_80174798_overlay_039(void *);
inline static char *inline_fn(char *arg0)
{
  return arg0;
}

void func_80176C3C_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp18;
  s16 sp1A;
  s16 sp1C;
  u16 *new_var;
  s32 var_a0;
  u8 temp_v1;
  u8 temp_v1_2;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x07000F00;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFFFB);
      *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 1);
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) | 0x80);
      sp1C = (sp18 = 0);
      sp1A = 0x12C;
      func_800377B0_ovl_01(0x1FA0, *((s16 *) (((char *) arg0) + 0x66)), (*((s32 *) (((char *) arg0) + 0x234))) + 0x38, &sp18);
      var_a0 = 0xB;
      var_a0 = 0xD;
      if (func_80033634_ovl_01() & 1)
    {
    }
      func_80077D48_ovl_01(var_a0, arg0);
      func_80035AAC_ovl_01_108(arg0);
      new_var = &(*((u16 *) (((char *) arg0) + 0x1AA)));
      if (((*((u8 *) (((char *) arg0) + 5))) == 0xA) && (!((*new_var) & 0x80)))
    {
      func_80174420_overlay_039(arg0);
    }
      if (((*((u8 *) (((char *) arg0) + 5))) == 0xB) && (!((*((u16 *) inline_fn(((char *) arg0) + 0x2B6))) & 0x1000)))
    {
      func_801745CC_overlay_039(arg0);
    }
      temp_v1_2 = *((u8 *) (((char *) arg0) + 5));
      if ((temp_v1_2 == 9) || (temp_v1_2 == 0x11))
    {
      if (!((*((u16 *) (((char *) arg0) + 0x1AA))) & 0x80))
      {
        func_801746B4_overlay_039(arg0);
      }
    }
      if ((*((u8 *) (((char *) arg0) + 5))) == 0xE)
    {
      func_80174798_overlay_039(arg0);
      case 1:
        ;

    }
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_80089D34_ovl_01(arg0, arg1));
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 4)) = 0x07000000;
      return;

  }

}

