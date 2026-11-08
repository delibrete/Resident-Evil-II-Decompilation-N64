s32 func_8004789C_ovl_01(s32, s32, s32, s32);
s32 func_800478DC_ovl_01(s32, u8, u8);
s32 func_800479EC_ovl_01(s32, u8, u8);
s32 func_80047B34_ovl_01(s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F4D0_ovl_01;
extern s32 D_8013134C_ovl_01;
extern s8 D_8013134D_ovl_01;
void func_80097744_ovl_01(void)
{
  s32 temp_a0_2;
  s32 var_s2;
  s32 var_s3;
  s8 var_v0;
  u8 new_var;
  u32 temp_a0;
  u32 var_v1;
  void *var_s0;
  void *var_s1;
  var_v1 = D_800C527C_ovl_01 + 0x3BB64;
  temp_a0 = D_800C527C_ovl_01 + 0x3C004;
  if (var_v1 < temp_a0)
  {
    var_v1 = temp_a0;
  }
  var_s2 = var_v1 + 0x6CC;
  var_s3 = 7;
  if (((u8) (*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A88)))) >= 0xEU)
  {
    var_v0 = 0x3C;
  }
  else
  {
    var_v0 = 0x1E;
  }
  D_8013134D_ovl_01 = var_v0;
  var_s1 = var_s2 + 0xA;
  var_s0 = (7 * 4) + (&D_8013134C_ovl_01);
  do
  {
    var_s0 -= 4;
    var_s3 -= 1;
    if (var_s3)
    {
      func_80047B34_ovl_01(var_s2, 0);
    }
    else
    {
      func_80047B34_ovl_01(var_s2, 0);
    }
    func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
    func_800478DC_ovl_01(var_s2, *((u8 *) (((char *) var_s0) + 0)), *((u8 *) (((char *) var_s0) + 1)));
    new_var = *((u8 *) (((char *) var_s0) + 3));
    temp_a0_2 = var_s2;
    var_s2 += 0x14;/*__repair_call_balance*/if(var_s3){
    func_800479EC_ovl_01(temp_a0_2, *((u8 *) (((char *) var_s0) + 2)), new_var);}else{
    func_800479EC_ovl_01(temp_a0_2, *((u8 *) (((char *) var_s0) + 2)), new_var);}
    *((s32 **) (((char *) var_s1) + 2)) = &D_8012F4D0_ovl_01;
    *((s16 *) (((char *) var_s1) + 0)) = 0;
    var_s1 += 0x14;
  }
  while (var_s3 != 0);
  *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x34)) = 0xDC;
  *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x36)) = 0x46;
}

