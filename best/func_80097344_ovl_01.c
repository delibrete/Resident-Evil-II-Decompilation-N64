s32 func_8004789C_overlay_001();
s32 func_800478DC_overlay_001();
s32 func_800479EC_overlay_001();
s32 func_80047B34_overlay_001();
extern s32 D_800C527C_ovl_01;
extern char D_8012BF38_ovl_01[];
extern char D_8012F4D0_ovl_01[];
extern char D_8012F524_ovl_01[];
extern s8 D_80131304_ovl_01;
extern s8 D_80131310_ovl_01;
inline static char *inline_fn(void *arg0)
{
  return ((char *) arg0) + 2;
}

void func_80097344_ovl_01(s32 arg0, s32 arg1)
{
  s32 var_a1;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 var_s1;
  s8 var_v1_2;
  u32 temp_a0;
  u32 var_s3;
  
  void *var_s0;
  void *var_s2;
  void *var_s2_2;
  var_s3 = D_800C527C_ovl_01 + 0x3BB64;
  temp_a0 = D_800C527C_ovl_01 + 0x3C004;
  if (var_s3 < temp_a0)
  {
    var_s3 = temp_a0;
  }
  var_s1 = var_s3 + 0x94C;
  var_s3 = 8;
  if (arg1 != 0)
  {
    var_s3 = 9;
  }
  if (arg0 & 1)
  {
    D_80131310_ovl_01 = 0;
  }
  else
  {
    D_80131310_ovl_01 = 0x30;
  }
  if (arg0 & 2)
  {
    *((s8 *) (D_80131304_ovl_01 + 0)) = 0x68;
    var_v1_2 = 0x13;
  }
  else
  {
    *((s8 *) (D_80131304_ovl_01 + 0)) = 0xC0;
    var_v1_2 = 0x38;
  }
  *((s8 *) (D_80131304_ovl_01 + 1)) = var_v1_2;
  var_s2 = (var_s2_2 = var_s1 + 0xA);
  var_s0 = (var_s3 * 4) + (&D_80131304_ovl_01);
  do
  {
    var_s0 -= 4;
    var_s3 -= 1;
    do { func_80047B34_overlay_001(var_s1, 0); } while (0);
    func_8004789C_overlay_001(var_s1, 0x80, 0x80, 0x80);
    func_800478DC_overlay_001(var_s1, *((u8 *) (((char *) var_s0) + 0)), *((u8 *) (((char *) var_s0) + 1)));
    temp_a0_2 = var_s1;
    var_s1 += 0x14;
    if (var_s3)
    {
      func_800479EC_overlay_001(temp_a0_2, *((u8 *) inline_fn(var_s0)), *((u8 *) (((char *) var_s0) + 3)));
    }
    else
    {
      func_800479EC_overlay_001(temp_a0_2, *((u8 *) inline_fn(var_s0)), *((u8 *) (((char *) var_s0) + 3)));
    }
    *((s32 **) inline_fn(var_s2)) = &D_8012F4D0_ovl_01;
    *((s16 *) (((char *) var_s2) + 0)) = 0;
    var_s2 += 0x14;
  }
  while (var_s3 >= 5U);
  var_s0 = (var_s3 * 4) + (&D_80131304_ovl_01);
  do
  {
    var_s0 -= 4;
    func_80047B34_overlay_001(var_s1, 0);
    var_s3 -= 1;
    if (var_s3 == (*((u8 *) (D_8012BF38_ovl_01 + 0xF))))
    {
      var_a1 = 0x40;
    }
    else
    {
      var_a1 = 0x80;
    }
    func_8004789C_overlay_001(var_s1, var_a1, var_a1, 0x80);
    do { func_800478DC_overlay_001(var_s1, *((u8 *) (((char *) var_s0) + 0)), *((u8 *) (((char *) var_s0) + 1))); } while (0);
    temp_a0_3 = var_s1;
    var_s1 += 0x14;
    func_800479EC_overlay_001(temp_a0_3, *((u8 *) inline_fn(var_s0)), *((u8 *) (((char *) var_s0) + 3)));
    *((s32 **) inline_fn(var_s2_2)) = &D_8012F524_ovl_01;
    *((s16 *) (((char *) var_s2_2) + 0)) = 0;
    var_s2_2 += 0x14;
  }
  while (var_s3 != 0);
  *((s16 *) (D_8012BF38_ovl_01 + 0x48)) = 0xA2;
  *((s16 *) (D_8012BF38_ovl_01 + 0x4A)) = 0x46;
  *((u8 *) (D_8012BF38_ovl_01 + 0xF)) = 3U;
}

