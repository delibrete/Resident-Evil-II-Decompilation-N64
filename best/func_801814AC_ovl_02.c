s32 func_8000C9E0(s32 *, s32, s32);
s32 func_8000EC60(s32);
s32 func_8009EBBC_ovl_01(s32 *, s32);
s32 func_8017B518_ovl_02(s32);
s32 func_8017B568_ovl_02(s32 *);
s32 func_8017B728_ovl_02();
s32 func_8017D070_ovl_02();
s32 func_80180674_ovl_02();
s32 func_80180A90_ovl_02();
s32 func_80180B90_ovl_02();
s32 func_80180FA0_ovl_02();
s32 func_80181358_ovl_02();
s32 func_80181394_ovl_02(s32);
extern s32 D_80134450_ovl_01;
extern s32 D_80134464_ovl_01;
extern s32 D_80134468_ovl_01;
extern s32 D_80134470_ovl_01;
extern s32 D_80134478_ovl_01;
extern s32 D_8013447C_ovl_01;
extern s32 D_8013449C_ovl_01;
extern s32 D_801344B0_ovl_01;
extern s32 D_80184AB0_ovl_02;
extern u8 D_80184AB8_ovl_02;
extern s32 D_80184ABC_ovl_02;
extern s32 D_801853FC_ovl_02;
extern s32 D_80185410_ovl_02;
extern s32 D_80185690_ovl_02;
extern s32 D_801857A8_ovl_02;
extern s32 D_80186C18_ovl_02;
void func_801814AC_ovl_02(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_s0;
  s32 var_v1;
  s32 *new_var;
  s32 var_v1_2;
  var_s0 = arg2;
  func_8017B728_ovl_02();
  if (func_8017D070_ovl_02() != 0)
  {
    func_80180FA0_ovl_02();
    D_80186C18_ovl_02 = 0;
    func_80181358_ovl_02();
    if (arg0 == 1)
    {
      do
      {
        func_80181358_ovl_02();
      }
      while (0);
      D_80134470_ovl_01 = arg0;
      D_8013449C_ovl_01 = D_80184AB8_ovl_02 ^ 1;
      do
      {
        func_8009EBBC_ovl_01(&D_80184ABC_ovl_02, *(((D_80184AB8_ovl_02 ^ 1) * 4) + (&D_80184AB0_ovl_02)));
      }
      while (0);
      func_8000C9E0(&D_8013447C_ovl_01, 0, 1);
      if ((*((D_8013449C_ovl_01 * 4) + (&D_80185410_ovl_02))) == 0)
      {
        func_80181394_ovl_02(*((D_8013449C_ovl_01 * 4) + (&D_80184AB0_ovl_02)));
        *((D_8013449C_ovl_01 * 4) + (&D_80185410_ovl_02)) = arg0;
      }
      new_var = ((D_80184AB8_ovl_02 ^ 1) * 4) + (&D_80184AB0_ovl_02);
      func_80180A90_ovl_02();
      func_8000EC60(*new_var);
    }
    loop_6:
    if (func_80181358_ovl_02() != 0)
    {
      func_80180674_ovl_02();
      D_80134470_ovl_01 = 1;
      if (D_80134464_ovl_01 == 0)
      {
        D_80134468_ovl_01 = 4;
      }
      var_v1 = 0;
      if (!((*((u16 *) (((char *) ((D_80134450_ovl_01 * 0x112) + (&D_801344B0_ovl_01))) + 2))) & 0x8000))
      {
        var_v1 = func_80180B90_ovl_02() != 0;
      }
      if (var_v1 != 0)
      {
 do { D_801853FC_ovl_02 = 1; if (D_80134464_ovl_01 != 3) { do { } while (D_80134464_ovl_01 != 3); } } while (0);
      }
      else
      {
        func_8000C9E0(&D_8013447C_ovl_01, 0, 1);
        var_v1_2 = 0xFF;
        var_v1_2 = var_s0 & var_v1_2;
        if ((*((D_8013449C_ovl_01 * 4) + (&D_80185410_ovl_02))) == 0)
        {
          func_80181394_ovl_02(*((D_8013449C_ovl_01 * 4) + (&D_80184AB0_ovl_02)));
          *((D_8013449C_ovl_01 * 4) + (&D_80185410_ovl_02)) = 1;
          var_v1_2 = var_s0 & 0xFF;
        }
        if (var_v1_2 != 0xFF)
        {
          var_s0 -= 2;
          if (var_s0 & 0xFF)
          {
            goto loop_6;
          }
          goto block_25;
        }
        goto loop_6;
      }
    }
    else
    {
      D_80134470_ovl_01 = 1;
      func_8017B568_ovl_02(&D_80185690_ovl_02);
      func_8000C9E0(&D_8013447C_ovl_01, 0, 1);
      if (arg0 == 4)
      {
        if (arg1 == 0)
        {
          if (D_80134464_ovl_01 != 3)
          {
            do
            {
            }
            while (D_80134464_ovl_01 != 3);
          }
          goto block_25;
        }
        goto block_26;
      }
      block_25:
      if (arg1 != 0)
      {
        block_26:
        D_80134478_ovl_01 = arg1 * 2;

        if (D_80134464_ovl_01 != 3)
        {
          do
          {
          }
          while (D_80134464_ovl_01 != 3);
        }
        if (D_80134464_ovl_01 == 3)
        {
          do
          {
            func_80180674_ovl_02();
          }
          while (D_80134464_ovl_01 == 3);
        }
      }

    }

  }
  func_8017B518_ovl_02(D_801857A8_ovl_02);
}
