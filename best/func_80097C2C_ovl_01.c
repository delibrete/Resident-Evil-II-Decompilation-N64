s32 func_800439B8_ovl_01(s32, void *, s32, s32);
s32 func_800478DC_ovl_01(void *, s32, s32);
s32 func_800478E8_ovl_01(void *, s32, s32);
s32 func_800479EC_ovl_01(void *, s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s32 D_800DF650_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F4D0_ovl_01;
extern s32 D_801313A0_ovl_01;
void func_80097C2C_ovl_01(void)
{
  s16 var_s4;
  s32 temp_s5;
  s32 var_s3;
  u32 temp_s3;
  u32 temp_v1;
  u32 var_a1;
  u32 var_s1;
  u8 temp_fp;
  u8 var_s6;
  void *temp_a0;
  void *temp_s2;
  void *var_s0_2;
  s32 *new_var;
  void *var_s2;
  var_a1 = D_800C527C_ovl_01 + 0x3BB64;
  temp_v1 = D_800C527C_ovl_01 + 0x3C004;
  if (var_a1 < temp_v1)
  {
    var_a1 = temp_v1;
  }
  new_var = &D_8012BF38_ovl_01;
  var_s2 = temp_v1 + 0x640;
  var_s1 = 7;
  var_s6 = *((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 8));
  temp_s5 = (*((s16 *) (((char *) new_var) + 0x36))) - 0x29;
  temp_fp = *((u8 *) (((char *) ((var_s6 * 4) + (&D_800C7650_ovl_01))) + 0x2181A));
  var_s4 = (*((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x34))) - 0x34;
  if ((*((u8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x10))) == 1)
  {
    var_s1 = 6;
    var_s4 = *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x34));
    var_s2 = var_a1 + 0x654;
  }
  temp_s3 = var_s1;
  temp_s2 = ((var_s1 * 4) + (&D_801313A0_ovl_01)) - 4;
  do
  {
    var_s1 -= 1;
    temp_a0 = var_s2;
    var_s2 += 0x14;
    do { func_800478E8_ovl_01(temp_a0, ((*((u16 *) (((char *) temp_s2) + 0))) + var_s4) & 0xFFFF, ((*((u16 *) (((char *) temp_s2) + 2))) + temp_s5) & 0xFFFF); } while (0);
    temp_s2 -= 4;
  }
  while (var_s1 >= 3U);
  var_s0_2 = var_s2;
  var_s3 = temp_s3 - 1;
  do
  {
    var_s0_2 -= 0x14;
    *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)), var_s0_2, 0, 0);
    var_s3 -= 1;
  }
  while (((u32) (var_s3 & 0xFFFF)) >= 3U);
  do { func_800478E8_ovl_01(var_s2, ((*((u16 *) (((char *) (&D_801313A0_ovl_01)) + 4))) + var_s4) & 0xFFFF, ((*((u16 *) (((char *) (&D_801313A0_ovl_01)) + 6))) + temp_s5) & 0xFFFF); } while (0);
  *((s32 **) (((char *) var_s2) + 0xC)) = &D_8012F4D0_ovl_01;
  *((s16 *) (((char *) var_s2) + 0xA)) = 0x200;
  temp_s2 = var_s2 + 0x14;
  *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18204)), var_s2, 0, 0);
  if (temp_fp != 0)
  {
    func_800478E8_ovl_01(temp_s2, ((*((u16 *) (((char *) (&D_801313A0_ovl_01)) + 0))) + var_s4) & 0xFFFF, ((*((u16 *) (((char *) (&D_801313A0_ovl_01)) + 2))) + temp_s5) & 0xFFFF);
    func_800479EC_ovl_01(temp_s2, 0x50, 0x1E);
    if (temp_fp == 2)
    {
      var_s6 -= 1;
    }
  }
  else
  {
    func_800478E8_ovl_01(temp_s2, (((*((u16 *) (((char *) (&D_801313A0_ovl_01)) + 0))) + var_s4) + 0x14) & 0xFFFF, ((*((u16 *) (((char *) (&D_801313A0_ovl_01)) + 2))) + temp_s5) & 0xFFFF);
    func_800479EC_ovl_01(temp_s2, 0x28, 0x1E);
  }
  do { func_800478DC_ovl_01(temp_s2, (var_s6 & 1) * 0x28, ((var_s6 >> 1) * 0x1E) & 0xFFFE); } while (0);
  *((s32 **) (((char *) temp_s2) + 0xC)) = &D_8012F4D0_ovl_01;
  *((s16 *) (((char *) temp_s2) + 0xA)) = 0x200;
  if ((*((u8 *) (((char *) new_var) + 8))) != 0x80)
  {
    *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18204)), temp_s2, 0, 0);
  }
}

