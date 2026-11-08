s32 func_80043650_ovl_01();
s32 func_8004500C_ovl_01(s32, s32 *, s32, u8);
s32 func_8016FDA0_ovl_07();
extern s32 D_800DF650_ovl_01;
extern s32 D_801717C0_ovl_07;
extern u8 D_801719FC_ovl_07;
extern u8 D_80171A98_ovl_07;
extern u8 D_80171B70_ovl_07;
extern s32 D_80171C18_ovl_07;
extern s32 D_80171D40_ovl_07;
void func_8016FAC4_ovl_07(void)
{
  s32 sp10;
  s8 *new_var;
  s32 sp38;
  s32 sp40;
  s16 temp_a2;
  s16 temp_t0;
  s16 temp_v0_3;
  s32 temp_s7;
  s32 var_s7;
  s32 var_t1;
  s32 *new_var2;
  s32 var_t2;
  s32 var_v1;
  s8 temp_a0;
  s8 temp_a1;
  u16 temp_s6;
  u16 var_s2;
  u32 temp_v1;
  u32 temp_v1_2;
  u8 *var_s3;
  u8 *var_s4;
  u8 *var_s5;
  u8 temp_a3;
  u8 temp_v0;
  u8 temp_v0_2;
  void *temp_s0;
  var_t1 = 0xFF;
  var_s5 = &D_801719FC_ovl_07;
  var_s4 = (&D_801719FC_ovl_07) + 6;
  *((s16 *) (((char *) (&sp10)) + 0x1A)) = 0;
  sp38 = 0x1F;
  var_t2 = 0x1F;
  do
  {
    sp38 = var_t2 - 1;
    if ((*((u8 *) (((char *) var_s4) + (-5)))) & 0x20)
    {
      *var_s5 = 0;
    }
    if ((*var_s5) & 1)
    {
      var_s3 = &D_80171B70_ovl_07;
      new_var2 = &sp10;
      temp_v0 = *((u8 *) (((char *) var_s4) + (-3)));
      var_v1 = 0;
      if (temp_v0 != 0)
      {
        do
        {
          if ((*var_s3) == var_t1)
          {
            var_v1 += 1;
          }
          var_s3 += 1;
        }
        while (temp_v0 != var_v1);
      }
      var_s7 = 0x2C;
      if ((*var_s5) & 8)
      {
        var_s7 = 0x2E;
        temp_v1 = (*((u32 *) (((char *) var_s4) + 2))) - D_80171D40_ovl_07;
        *((u32 *) (((char *) var_s4) + 2)) = (*((u32 *) (((char *) var_s4) + 2))) - D_80171D40_ovl_07;
        if (((*((u32 *) (((char *) var_s4) + 2))) - D_80171D40_ovl_07) > 0x80807FFFU)
        {
          *var_s5 = 0;
          *((u32 *) (((char *) var_s4) + 2)) = 0U;
        }
      }
      if ((*var_s5) & 4)
      {
        var_s7 = 0x2E;
        temp_v1_2 = (*((u32 *) (((char *) var_s4) + 2))) + D_80171D40_ovl_07;
        *((u32 *) (((char *) var_s4) + 2)) = temp_v1_2;
        if (temp_v1_2 > 0x80807FFFU)
        {
          var_s7 = 0x2C;
          *var_s5 &= 0xFB;
          *((u32 *) (((char *) var_s4) + 2)) = 0x80808000U;
        }
      }
      var_s2 = *((u16 *) (((char *) var_s4) + (-2)));
      temp_s7 = var_s7 + (*((u32 *) (((char *) var_s4) + 2)));
      temp_s6 = *((u16 *) (((char *) var_s4) + 0));
      if ((*var_s3) != var_t1)
      {
        do
        {
          sp40 = var_t1;
          func_80043650_ovl_01();
          temp_s0 = ((*var_s3) * 0xA) + (&D_801717C0_ovl_07);
          temp_a3 = *((u8 *) (((char *) temp_s0) + 9));
          *((s32 *) (((char *) new_var2) + 0)) = temp_s7;
          temp_a1 = (*((u8 *) (((char *) temp_s0) + 4))) + (*((u8 *) (((char *) temp_s0) + 6)));
          temp_a0 = (*((u8 *) (((char *) temp_s0) + 5))) + (*((u8 *) (((char *) temp_s0) + 7)));
          var_t2 = (s16)(var_s2 + (*((u8 *) (((char *) temp_s0) + 8))));
          temp_v0_2 = *((u8 *) (((char *) new_var2) + 2));
          temp_a2 = temp_s6 + temp_a3;
          if (temp_v0_2 != 0)
          {
            *((u8 *) (((char *) new_var2) + 2)) = (u8) ((temp_v0_2 - 1) * 2);
          }
          *((u16 *) (((char *) new_var2) + 4)) = var_s2;
          *((u16 *) (((char *) new_var2) + 6)) = temp_s6;
          *((u8 *) (((char *) new_var2) + 8)) = (u8) (*((u8 *) (((char *) temp_s0) + 4)));
          *((u8 *) (((char *) new_var2) + 9)) = (u8) (*((u8 *) (((char *) temp_s0) + 5)));
          *((s16 *) (((char *) new_var2) + 0xC)) = var_t2;
          *((u16 *) (((char *) new_var2) + 0xE)) = temp_s6;
          *((s8 *) (((char *) new_var2) + 0x10)) = temp_a1;
          *((s16 *) (((char *) new_var2) + 0xA)) = (s16) ((*((u16 *) (((char *) temp_s0) + 2))) * 8);
          *((u8 *) (((char *) new_var2) + 0x11)) = (u8) (*((u8 *) (((char *) temp_s0) + 5)));
          var_s3 += 1;
          *((u16 *) (((char *) new_var2) + 0x14)) = var_s2;
          *((s16 *) (((char *) new_var2) + 0x16)) = temp_a2;
          temp_v0_3 = (*((u16 *) (((char *) temp_s0) + 0))) + 0x80;
          *((s16 *) (((char *) new_var2) + 0x12)) = temp_v0_3;
          *((s8 *) (((char *) new_var2) + 0x20)) = temp_a1;
          *((s8 *) (((char *) new_var2) + 0x19)) = temp_a0;
          *((s16 *) (((char *) new_var2) + 0x1C)) = var_t2;
          new_var = (s8 *) (((char *) new_var2) + 3);
          *((s16 *) (((char *) new_var2) + 0x1E)) = temp_a2;
          *((s8 *) (((char *) new_var2) + 0x21)) = temp_a0;
          *((u8 *) (((char *) new_var2) + 0x18)) = (u8) (*((u8 *) (((char *) temp_s0) + 4)));
          *new_var = 4;
          *((s32 *) (((char *) new_var2) + 0x24)) = (s32) (*(((((s32) ((temp_v0_3 & 0xFFFF) - 0x88)) >> 1) * 4) + (&D_80171C18_ovl_07)));
          sp40 = var_t1;
          *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_8004500C_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)), new_var2, 0, temp_a3);
          var_t1 = sp40;
          var_s2 += *((u8 *) (((char *) temp_s0) + 8));
        }
        while ((*var_s3) != var_t1);
      }
    }
    var_s4 += 0xC;
    var_t2 = sp38;
    var_s5 += 0xC;
  }
  while (var_t2 != 0);
  if (D_80171A98_ovl_07 & 1)
  {
    func_8016FDA0_ovl_07();
  }
}

