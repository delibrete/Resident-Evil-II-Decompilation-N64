s32 func_800439B8_ovl_01(s32, u32, s32, s32);
s32 func_8004789C_ovl_01(s32, s32, s32, s32);
s32 func_800478E8_ovl_01(s32, s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800DF650_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F524_ovl_01;
extern s32 D_801312E4_ovl_01;
void func_80097154_ovl_01(void)
{
  short __repair_constant = 4;
  s32 var_a1_2;
  s32 var_a2;
  s32 var_a3;
  s16 temp_s5;
  s16 temp_s6;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 var_s1;
  u32 temp_v1;
  u32 temp_v1_2;
  u32 var_a0;
  u32 var_s1_2;
  u32 var_s2;
  void *var_s0;
  void *var_s0_2;
  void *var_s3;
  temp_v1_2 = D_800C527C_ovl_01 + 0x3BB64;
  temp_v1 = D_800C527C_ovl_01 + 0x3C004;
  if (temp_v1_2 < temp_v1)
  {
    temp_v1_2 = temp_v1;
  }
  var_s1 = temp_v1_2 + 0x8AC;
  var_s2 = 8;
  var_s0 = (&D_801312E4_ovl_01) + 0x20;
  temp_s6 = *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x44));
  temp_s5 = *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x46));
  do
  {
    var_s0 -= __repair_constant;
    var_s2 -= 1;
    temp_a0 = var_s1;
    var_s1 += 0x14;
    do { func_800478E8_ovl_01(temp_a0, ((*((u16 *) (((char *) var_s0) + 0))) + temp_s6) & 0xFFFF, ((*((u16 *) (((char *) var_s0) + 2))) + temp_s5) & 0xFFFF); } while (0);
  }
  while (var_s2 >= 5U);
  var_s3 = var_s1 + 0xA;
  var_s0_2 = (var_s2 * 4) + (&D_801312E4_ovl_01);
  do
  {
    var_s0_2 -= __repair_constant;
    var_s2 -= 1;
    if ((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x10))) == 0)
    {
      if ((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0xE))) == var_s2)
      {
        var_a1_2 = 0x80;
        if (((u8) (*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 1)))) >= 3U)
        {
          var_a2 = 0x40;
          var_a3 = 0x40;
        }
        else
        {
          goto block_11;
        }
      }
      else
      {
        goto block_10;
      }
    }
    else
    {
      block_10:
      var_a1_2 = 0x28;

      block_11:
      var_a2 = var_a1_2;

      var_a3 = var_a1_2;
    }
    func_8004789C_ovl_01(var_s1, var_a1_2, var_a2, var_a3);
    ;
    var_s1 += 0x14;
    func_800478E8_ovl_01(var_s1, ((*((u16 *) (((char *) var_s0_2) + 0))) + temp_s6) & 0xFFFF, ((*((u16 *) (((char *) var_s0_2) + 2))) + temp_s5) & 0xFFFF);
    *((s32 **) (((char *) var_s3) + 2)) = &D_8012F524_ovl_01;
    *((s16 *) (((char *) var_s3) + 0)) = 0xC0;
    var_s3 += 0x14;
  }
  while (var_s2 != 0);
  var_s1_2 = var_s1 - 0x14;
  do
  {
    *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)), var_s1_2, 0, 0);
    var_a0 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1_2 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a0 < temp_v1_2)
    {
      var_a0 = temp_v1_2;
    }
    var_s1_2 -= 0x14;
  }
  while (((u32) (var_a0 + 0x8AC)) < var_s1_2);
}

