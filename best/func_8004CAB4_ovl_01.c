s32 func_80006D60(void *, s32, s32, s32, s32, s32);
s32 func_80007010(s32 *);
s32 func_800072E0();
s32 func_80007300(s32);
s32 func_8000C9E0(s32 *, s32 *, s32);
s32 func_8000DB90(void *);
extern s32 D_8010B2C8_ovl_01;
extern s32 D_80112B90_ovl_01;
extern s32 D_80139AD0;
void func_8004CAB4_ovl_01(void)
{
  int __repair_literal;
  s32 sp18;
  s32 *temp_s0;
  s32 *temp_s1;
  s32 *temp_s2;
  s32 *var_s5;
  s32 temp_s3;
  s32 var_s6;
  s32 *new_var;
  int new_var3;
  unsigned int temp_v0;
  u16 temp_v1;
  char *new_var2;
  var_s6 = 0;
  __repair_literal = 2;
  var_s5 = &D_8010B2C8_ovl_01;
  loop_1:
  if (var_s6 < __repair_literal)
  {
    *((s32 **) (((char *) (&D_8010B2C8_ovl_01)) + 0x390)) = var_s5;
    temp_v1 = *((u16 *) (((char *) (*((s32 **) (((char *) (&D_8010B2C8_ovl_01)) + 0x390)))) + 0));
    new_var3 = temp_v1 != 2;
    if (new_var3)
    {
      new_var2 = (char *) (&D_8010B2C8_ovl_01);
      new_var = *((s32 **) (new_var2 + 0x390));
      if (((s32) temp_v1) < 3)
      {
        if (1 != temp_v1)
        {
          var_s5 += 0x1C8;
        }
        else
        {
          temp_v0 = (*((u16 *) (((char *) new_var) + 2))) - 1;
          *((u16 *) (((char *) new_var) + 2)) = temp_v0;
          if ((temp_v0 << 0x10) <= 0)
          {
            goto block_10;
          }
          goto block_11;
        }
      }
      else
        if (temp_v1 != 4)
      {
        var_s5 += 0x1C8;
      }
      else
      {
        goto block_10;
      }
    }
    else
    {
      temp_s3 = func_800072E0();
      temp_s0 = *((s32 **) (new_var2 + 0x390));
      temp_s1 = *((s32 **) (new_var2 + 0x390));
      temp_s2 = *((s32 **) (new_var2 + 0x390));
      var_s5 = new_var2;
      do
      {
        func_80006D60((*((s32 **) (new_var2 + 0x390))) + 8, *((s32 *) (((char *) temp_s0) + 0x1BC)), *((s32 *) (((char *) temp_s1) + 0x1B8)), 0, *((s32 *) (((char *) temp_s2) + 0x1C0)), func_80007010(&D_80112B90_ovl_01) + 1);
      }
      while (0);
      func_80007300(temp_s3);
      block_10:
      *((u16 *) (((char *) (*((s32 **) (var_s5 + 0x390)))) + 0)) = 0x7FU;

      func_8000DB90((*((s32 **) (new_var2 + 0x390))) + 8);
      func_8000C9E0(&D_80139AD0, &sp18, 1);
      block_11:
      var_s5 += 0x1C8;

    }
    var_s6 += 1;
    goto loop_1;
  }

}

