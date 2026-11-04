s32 func_800439B8_ovl_01(s32, s32, s32, s32);
s32 func_800478E8_ovl_01(s32, s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800DF650_ovl_01;
void func_80097FB0_ovl_01(void)
{
  s32 temp_a1;
  s32 var_s0;
  s32 var_s1;
  s32 var_s2;
  s32 var_s3;
  s32 var_s4;
  var_s4 = 5;
  var_s2 = D_800C527C_ovl_01 + 0x3BD48;
  var_s3 = 0xC0;
  do
  {
    var_s0 = 0x150;
    var_s4 -= 1;
    var_s1 = 7;
    loop_2:
    var_s0 -= 0x30;

    var_s1 -= 1;
    do
    {
      func_800478E8_ovl_01(var_s2, var_s0 & 0xFFFF, var_s3 & 0xFFFF);
    }
    while (0);
    temp_a1 = var_s2;
    var_s2 += 0x14;
    *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)), temp_a1, 0, 0);
    if (var_s1 != 0)
    {
      goto loop_2;
    }
    var_s3 -= 0x30;
  }
  while (var_s4 != 0);
}

