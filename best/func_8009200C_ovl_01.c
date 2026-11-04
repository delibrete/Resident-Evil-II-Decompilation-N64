s32 func_800439B8_ovl_01(s32, s32, s32, s32);
s32 func_800478DC_ovl_01(s32, u8, s32);
s32 func_800478E8_ovl_01(s32, s32, s32);
s32 func_80077B0C_ovl_01(s32, s32);
s32 func_800837DC_ovl_01(s32 *, u8);
s32 func_80090C80_ovl_01();
s32 func_80091A50_ovl_01(u8, u8);
extern s32 D_800C527C_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s32 D_800DF650_ovl_01;
extern s32 D_800E8D38_ovl_01;
extern s32 D_800E8D4C_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F9C4_ovl_01;
extern s32 D_80130C54_ovl_01;
void func_8009200C_ovl_01(void)
{
  s32 sp10;
  s32 var_a2;
  s16 *new_var2[2];
  s16 var_s1;
  s32 temp_a1;
  s32 temp_s2;
  u8 new_var;
  s32 var_s2;
  s32 var_s3;
  s32 var_s4;
  s32 var_v0_2;
  u8 var_a0;
  u8 var_a1;
  u8 var_s4_2;
  u8 var_v0;
  void *var_s3_2;
  var_s1 = 0x40;
  temp_s2 = D_800C527C_ovl_01 + 0x40800;
  if ((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x29))) != 0)
  {
    if (((u8) (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x28)))) < 0xAU)
    {
      func_80077B0C_ovl_01(0x022B0000, 0);
      *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x29)) = 0U;
    }
    var_v0 = (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x28))) - 4;
  }
  else
  {
    var_v0 = (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x28))) + 4;
    if (((u8) (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x28)))) >= 0x51U)
    {
      *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x29)) = 1U;
      var_v0 = (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x28))) + 4;
    }
  }
  *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x28)) = var_v0;
  var_s2 = temp_s2 + 0x78;
  var_s4 = 2;
  temp_s2 = 0x1EA;
  var_s3 = 0x1A;
  sp10 = func_80091A50_ovl_01(*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x1A)), *((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x358A))) + (&D_8012F9C4_ovl_01)));
  new_var2[1] = *(((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x1A))) * 8) + (&D_80130C54_ovl_01));
  do
  {
    var_s3 -= 5;
    temp_s2 -= 0xF0;
    var_s4 -= 1;
    func_800478E8_ovl_01(var_s2, temp_s2 & 0xFFFF, var_s3 & 0xFFFF);
    temp_a1 = var_s2;
    var_s2 += 0x28;
    *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)), temp_a1, 0, 0);
  }
  while (var_s4 != 0);
  var_s4_2 = *((u8 *) (((char *) (((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x1A))) * 8) + (&D_80130C54_ovl_01))) + 4));
  new_var2[0] = var_s2 + 0xA;
  var_s3_2 = (var_s4_2 * 0x10) + new_var2[1];
  do
  {
    var_s3_2 -= 0x10;
    var_s4_2 -= 1;
    new_var = var_s4_2;
    func_800478E8_ovl_01(var_s2, ((*((u16 *) (((char *) var_s3_2) + 4))) + (*((u16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x58)))) & 0xFFFF, ((*((u16 *) (((char *) var_s3_2) + 6))) + (*((u16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x5A)))) & 0xFFFF);
    if (((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x1A))) == 2) && (var_s4_2 == 0xE))
    {
      if ((*((s16 *) (((char *) (&D_800C7650_ovl_01)) + 0x215FA))) == new_var)
      {
        if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 8U) != 0)
        {
          if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 0xCU) != 0)
          {
            var_a2 = 0x50;
            var_s1 = 0x120;
          
          func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) new_var2[1]) + 0xE0)), var_a2);}
          else
          {
            var_a2 = 0x98;
            var_s1 = 0x1A0;
          
          func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) new_var2[1]) + 0xE0)), var_a2);}
        }
        if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 9U) != 0)
        {
          if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 0xBU) != 0)
          {
            var_s1 = 0x120;
            func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) var_s3_2) + 0)), 0x98);
          }
          else
          {
            var_s1 = 0x1A0;
            func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) var_s3_2) + 0)), 0x50);
          }
        }
        goto block_53;
      }
      if (func_800837DC_ovl_01(&D_800E8D38_ovl_01, 0x2CU) != 0)
      {
        if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 0xBU) != 0)
        {
          var_s1 = 0x180;
          func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) new_var2[1]) + 0xE0)), 0x98);
          if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 0xCU) != 0)
          {
            var_s1 = 0x80;
          }
        }
        else
        {
          var_s1 = 0x20;
          func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) new_var2[1]) + 0xE0)), 0x50);
          if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, 0xCU) != 0)
          {
            var_s1 = 0x180;
          }
        }
        goto block_53;
      }
    }
    else
    {
      var_s1 = 0x80;
      if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, *((u8 *) (((char *) var_s3_2) + 0xD))) != 0)
      {
        var_s1 = 0x120;
      }
      if (var_s4_2 == sp10)
      {
        if ((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x29))) != 0)
        {
          var_a1 = *((u8 *) (((char *) var_s3_2) + 0xD));
          goto block_47;
        }
        var_s1 += 0x20;
        goto block_53;
      }
      if (func_800837DC_ovl_01((&D_800E8D4C_ovl_01) + 4, *((u8 *) (((char *) (((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x1A))) * 8) + (&D_80130C54_ovl_01))) + 5))) != 0)
      {
        if (func_800837DC_ovl_01((&D_800E8D4C_ovl_01) - 0x14, *((u8 *) (((char *) var_s3_2) + 0xC))) == 0)
        {
          if ((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x1A88))) & 1)
          {
            var_a0 = *((u8 *) (((char *) var_s3_2) + 0xF));
            var_v0_2 = var_a0 & 1;
          }
          else
          {
            var_a0 = *((u8 *) (((char *) var_s3_2) + 0xE));
            var_v0_2 = var_a0 & 1;
          }
          if (((var_v0_2 == 0) || ((*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x1A5C))) & 0x40000000)) && ((!(var_a0 & 2)) || (!((*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x1A5C))) & 0x40000000))))
          {
            var_a1 = *((u8 *) (((char *) var_s3_2) + 0xD));
            block_47:
            var_s1 = 0x20;

            if (func_800837DC_ovl_01(&D_800E8D4C_ovl_01, var_a1) != 0)
            {
              var_s1 = 0xC0;
            }
            goto block_53;
          }
        }
        else
        {
          goto block_53;
        }
      }
      else
        if (func_800837DC_ovl_01((&D_800E8D4C_ovl_01) - 0x14, *((u8 *) (((char *) var_s3_2) + 0xC))) != 0)
      {
        block_53:
        *new_var2[0] = var_s1;

        *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)), var_s2, 0, 0);
      }
    }
    new_var2[0] += 0x28;
    var_s2 += 0x28;
  }
  while (var_s4_2 != 0);
  if (!((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) & 0x02000000))
  {
    func_80090C80_ovl_01();
  }
}

