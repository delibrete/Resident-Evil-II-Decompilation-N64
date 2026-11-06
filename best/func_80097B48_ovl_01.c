s32 func_8004789C_overlay_001(s32, s32, s32, s32);
s32 func_800478DC_overlay_001(s32, u8, u8);
s32 func_800479EC_overlay_001(s32, u8, u8);
s32 func_80047B34_overlay_001(s32, s32);
extern s32 D_800C527C_overlay_001;
extern s32 D_8012F4D0_overlay_001;
extern s32 D_80131384_overlay_001;
void func_80097B48_ovl_01(void)
{
  s32 temp_a0_2;
  s32 var_s1;
  s32 var_s3;
  u32 temp_a0;
  u32 var_v1;
  void *new_var;
  void *var_s2;
  var_v1 = D_800C527C_overlay_001 + 0x3BB64;
  temp_a0 = D_800C527C_overlay_001 + 0x3C004;
  if (var_v1 < temp_a0)
  {
    var_v1 = temp_a0;
  }
  var_s1 = var_v1 + 0x640;
  var_s3 = 7;
  var_s2 = var_v1 + 0x64A;
  new_var = (&D_80131384_overlay_001) + 0x1C;
  do
  {
    new_var -= 4;
    var_s3 -= 1;
    do
    {
      func_80047B34_overlay_001(var_s1, 0);
    }
    while (0);
    func_8004789C_overlay_001(var_s1, 0x80, 0x80, 0x80);
    func_800478DC_overlay_001(var_s1, *((u8 *) (((char *) new_var) + 0)), *((u8 *) (((char *) new_var) + 1)));
    temp_a0_2 = var_s1;
    var_s1 += 0x14;
    if (var_s3)
    {
      func_800479EC_overlay_001(temp_a0_2, *((u8 *) (((char *) new_var) + 2)), *((u8 *) (((char *) new_var) + 3)));
    }
    else
    {
      func_800479EC_overlay_001(temp_a0_2, *((u8 *) (((char *) new_var) + 2)), *((u8 *) (((char *) new_var) + 3)));
    }
    *((s32 **) (((char *) var_s2) + 2)) = &D_8012F4D0_overlay_001;
    new_var = var_s2 + 0;
    *((s16 *) new_var) = 0;
    var_s2 += 0x14;
  }
  while (var_s3 != 0);
}

