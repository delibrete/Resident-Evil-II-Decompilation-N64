s32 func_80032B40_ovl_01(void *, void *);
s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_80032F24_ovl_01(void *, s16, s32);
s32 func_80032F94_ovl_01(void *, s16, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
u32 func_80040BE4_ovl_01(s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650;
extern s32 D_80168E70_overlay_028;
extern s32 D_80168E78_overlay_028;
extern s32 D_80168E84_overlay_028;
extern s32 D_80168E94_overlay_028;
extern s32 D_80168F58_overlay_028;
extern s32 D_80168F5C_overlay_028;
void func_801642DC_ovl_28(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_constant = 2;
  s32 temp_v0;
  s32 new_var2[2];
  u16 *new_var;
  s32 temp_v0_4;
  s32 var_s0_3;
  s32 var_s0_4;
  s32 var_s2;
  s32 var_s2_2;
  s8 var_s0;
  s8 var_s0_2;
  u32 temp_v0_3;
  u32 temp_v0_6;
  u32 var_s1;
  u32 var_s1_2;
  u8 temp_v1;
  void *temp_v1_2;
  void *var_s1_3;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0E001F00;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      if ((*((s16 *) (((char *) (&D_800C7650)) + 0x215FA))) != 3)
    {
      var_s1 = 0x7FFFFFFF;
      var_s0 = 1;
      do
      {
        temp_v0 = (*((s32 *) (((char *) arg0) + 0x28))) - (*((s16 *) (((char *) ((var_s0 * 4) + (&D_80168E70_overlay_028))) + 0)));
        new_var2[0] = (*((s32 *) (((char *) arg0) + 0x30))) - (*((s16 *) (((char *) ((var_s0 * 4) + (&D_80168E70_overlay_028))) + 2)));
        temp_v0_3 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (new_var2[0] * new_var2[0]));
        if (temp_v0_3 < var_s1)
        {
          var_s1 = temp_v0_3;
          *((s8 *) (((char *) arg0) + 0x2B7)) = var_s0;
        }
        var_s0 -= 1;
      }
      while (var_s0 != 0);
    }
    else
    {
      var_s1_2 = 0x7FFFFFFF;
      var_s0_2 = 4;
      do
      {
        temp_v1_2 = (var_s0_2 * 4) + (&D_80168E78_overlay_028);
        temp_v0_4 = (*((s32 *) (((char *) arg0) + 0x28))) - (*((s16 *) (((char *) temp_v1_2) + 0)));
        new_var2[1] = (*((s32 *) (((char *) arg0) + 0x30))) - (*((s16 *) (((char *) temp_v1_2) + 2)));
        temp_v0_6 = func_80040BE4_ovl_01((temp_v0_4 * temp_v0_4) + (new_var2[1] * new_var2[1]));
        if (temp_v0_6 < var_s1_2)
        {
          var_s1_2 = temp_v0_6;
          *((s8 *) (((char *) arg0) + 0x2B7)) = var_s0_2;
        }
        var_s0_2 -= 1;
      }
      while (var_s0_2 != 0);
    }
      *((u16 *) (((char *) arg0) + 0x2B8)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B8))) | 8);
      new_var = (u16 *) (((char *) arg0) + 0x1F6);

    case 1:
      var_s0_3 = __repair_constant;
      if ((*((s16 *) (((char *) (&D_800C7650)) + 0x215FA))) != 3)
    {
      var_s2 = __repair_constant;
      var_s1_3 = (&D_80168E84_overlay_028) + 0x10;
      do
      {
        if (func_80032B40_ovl_01(arg0 + 0x28, var_s1_3) != 0)
        {
          *((u8 *) (((char *) arg0) + 6)) = 2U;
          *new_var = (u16) (*(var_s2 + (&D_80168F58_overlay_028)));
        }
        var_s2 -= __repair_constant;
        var_s0_3 -= 1;
        var_s1_3 -= 8;
      }
      while (var_s0_3 != 0);
    }
    else
    {
      var_s0_4 = 5;
      var_s2_2 = 8;
      var_s1_3 = (&D_80168E94_overlay_028) + 0x28;
      do
      {
        if (func_80032B40_ovl_01(arg0 + 0x28, var_s1_3) != 0)
        {
          *((u8 *) (((char *) arg0) + 6)) = 2U;
          *new_var = (u16) (*(var_s2_2 + (&D_80168F5C_overlay_028)));
        }
        var_s2_2 -= __repair_constant;
        var_s0_4 -= 1;
        var_s1_3 -= 8;
      }
      while (var_s0_4 != 0);
    }
      func_80032DEC_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x10);
      block_35:
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);

      func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
      func_80032B8C_ovl_01(arg0, 0);
      *((s16 *) (((char *) arg0) + 0x1F2)) = 0;
      return;

    case 2:
      func_80032F24_ovl_01(arg0, (s16) (*((u16 *) (((char *) arg0) + 0x1F6))), 0x20);
      if ((*((s16 *) (((char *) (&D_800C7650)) + 0x215FA))) == 3)
    {
      if ((func_80032F94_ovl_01(arg0, (s16) (*((u16 *) (((char *) arg0) + 0x1F6))), 0x10) == 0) && ((*((s32 *) (((char *) arg0) + 0x1AC))) & 1))
      {
        goto block_32;
      }
    }
    else
      if (func_80032F94_ovl_01(arg0, (s16) (*((u16 *) (((char *) arg0) + 0x1F6))), 0x10) == 0)
    {
      if ((*((s32 *) (((char *) arg0) + 0x1AC))) & 1)
      {
        if ((*((s32 *) (((char *) arg0) + 0x28))) >= (-0x2133))
        {
          block_32:
          *((u8 *) (((char *) arg0) + 6)) = 3U;

          *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 8);
        }
      }
    }
      goto block_35;

    case 3:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x10001F00;
      *((u8 *) (((char *) arg0) + 6)) = 4U;
      *((s16 *) (((char *) arg0) + 0x1F2)) = -1;

    case 4:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x80) != 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = 5U;
    }
      func_80032B8C_ovl_01(arg0, 0);

    default:
      return;

  }

}

