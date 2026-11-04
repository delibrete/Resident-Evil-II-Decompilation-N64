s32 func_80043650_ovl_01(s32, u32);
s32 func_800439B8_ovl_01(s32, u32, s32, s32);
s32 func_8004789C_ovl_01(s32, s32, s32, s32);
s32 func_800478E8_ovl_01(s32, s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800DF650_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F524_ovl_01;
extern s32 D_80131328_ovl_01;
extern s16 D_8013132A_ovl_01;
static inline s32 *inline_fn()
{
  return &D_80131328_ovl_01;
}

void func_80097558_ovl_01(s32 arg0)
{
  s32 var_a1_2;
  s16 temp_s5;
  s16 temp_s6;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 var_s2;
  u32 temp_v1;
  u32 temp_v1_2;
  u32 var_a0;
  u32 var_a1;
  u32 var_s1;
  u32 var_s2_2;
  u8 temp_s7;
  void *var_s0;
  void *var_s0_2;
  void *var_s3;
  var_a1 = D_800C527C_ovl_01 + 0x3BB64;
  temp_v1 = D_800C527C_ovl_01 + 0x3C004;
  if (var_a1 < temp_v1)
  {
    var_a1 = temp_v1;
  }
  temp_s6 = *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x48));
  temp_s5 = *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x4A));
  temp_s7 = *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0xF));
  var_s2 = var_a1 + 0x94C;
  func_80043650_ovl_01(0x3C004, var_a1);
  if (arg0 != 0)
  {
    D_8013132A_ovl_01 = 0x4D;
    var_s1 = 9;
  }
  else
  {
    D_8013132A_ovl_01 = 0x38;
    var_s1 = 8;
  }
  var_s0 = (var_s1 * 4) + inline_fn();
  do
  {
    var_s0 -= 4;
    var_s1 -= 1;
    temp_a0 = var_s2;
    var_s2 += 0x14;
    func_800478E8_ovl_01(temp_a0, ((*((u16 *) (((char *) var_s0) + 0))) + temp_s6) & 0xFFFF, ((*((u16 *) (((char *) var_s0) + 2))) + temp_s5) & 0xFFFF);
  }
  while (var_s1 >= 5U);
  var_s3 = var_s2 + 0xA;
  var_s0_2 = (var_s1 * 4) + (&D_80131328_ovl_01);
  do
  {
    var_s1 -= 1;
    var_s0_2 -= 4;
    if (var_s1 == temp_s7)
    {
      var_a1_2 = 0x40;
    }
    else
    {
      var_a1_2 = 0x80;
    }
    func_8004789C_ovl_01(var_s2, var_a1_2, var_a1_2, 0x80);
    temp_a0_2 = var_s2;
    var_s2 += 0x14;
    func_800478E8_ovl_01(temp_a0_2, ((*((u16 *) (((char *) var_s0_2) + 0))) + temp_s6) & 0xFFFF, ((*((u16 *) (((char *) var_s0_2) + 2))) + temp_s5) & 0xFFFF);
    *((s32 **) (((char *) var_s3) + 2)) = &D_8012F524_ovl_01;
    *((s16 *) (((char *) var_s3) + 0)) = 0;
    var_s3 += 0x14;
  }
  while (var_s1 != 0);
  var_s2_2 = var_s2 - 0x14;
  do
  {
    *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x200)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x200)), var_s2_2, 0, 0);
    var_a0 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1_2 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a0 < temp_v1_2)
    {
      var_a0 = temp_v1_2;
    }
    var_s2_2 -= 0x14;
  }
  while (((u32) (var_a0 + 0x94C)) < var_s2_2);
}

