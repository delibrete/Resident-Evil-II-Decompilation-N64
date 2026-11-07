s32 func_80043650_overlay_001();
s32 func_800439B8_overlay_001(s32, s32, s32, s32);
s32 func_800478DC_overlay_001(s32, s32, s32);
s32 func_800478E8_overlay_001(s32, s32, s32);
s32 func_800479EC_overlay_001(s32, s32, s32);
extern s32 D_800C527C_overlay_001;
extern s32 D_800C7650_overlay_001;
extern s32 D_800DF650_overlay_001;
extern s32 D_800E7650_overlay_001;
extern s32 D_8012BF38_overlay_001;
extern s32 D_8012F4D0_overlay_001;
extern s32 D_80131368_overlay_001;
inline static u8 inline_fn(u8 arg0)
{
  return arg0 >> 1;
}

void func_80097884_ovl_01(void)
{
  s16 temp_s6;
  s16 temp_s7;
  s32 temp_a1;
  s32 temp_fp;
  s32 var_s0;
  s32 var_v0;
  u32 temp_v1;
  u32 var_a1;
  u32 var_s2;
  u8 temp_s5;
  u8 temp_v1_2;
  void *var_s1;
  void *var_s1_2;
  void *var_s1_3;
  var_a1 = D_800C527C_overlay_001 + 0x3BB64;
  temp_v1 = D_800C527C_overlay_001 + 0x3C004;
  if (var_a1 < temp_v1)
  {
    var_a1 = temp_v1;
  }
  var_s0 = var_a1 + 0x6CC;
  var_s2 = 7;
  temp_s7 = *((s16 *) (((char *) (&D_8012BF38_overlay_001)) + 0x34));
  temp_s5 = *((u8 *) (((char *) (&D_800C7650_overlay_001)) + 0x21488));
  temp_s6 = *((s16 *) (((char *) (&D_8012BF38_overlay_001)) + 0x36));
  temp_fp = inline_fn(temp_s5) * 0x1E;
  *((s16 *) (((char *) (&D_80131368_overlay_001)) + 0x12)) = (s16) (((temp_s5 - 6) * 0xF) + 0x5D);
  var_s1 = ((&D_80131368_overlay_001) + 0x1C) - 4;
  do
  {
    var_s2 -= 1;
    func_800479EC_overlay_001(var_s0, 5, temp_fp & 0xFFFF);
    func_800478E8_overlay_001(var_s0, ((*((u16 *) (((char *) var_s1) + 0))) + temp_s7) & 0xFFFF, ((*((u16 *) (((char *) var_s1) + 2))) + temp_s6) & 0xFFFF);
    func_80043650_overlay_001();
    temp_a1 = var_s0;
    var_s0 += 0x14;
    *((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)) = func_800439B8_overlay_001(*((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)), temp_a1, 0, 0);
    var_s1 -= 4;
  }
  while (var_s2 >= 6U);
  var_s1_2 = (var_s2 * 4) + (&D_80131368_overlay_001);
  do
  {
    var_s1_2 -= 4;
    func_800478E8_overlay_001(var_s0, ((*((u16 *) (((char *) var_s1_2) + 0))) + temp_s7) & 0xFFFF, ((*((u16 *) (((char *) var_s1_2) + 2))) + temp_s6) & 0xFFFF);
    var_s2 -= 1;
    if (((*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x10))) != 1) || ((var_v0 = var_s2 < 3U, var_s2 != 2)))
    {
      *((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)) = func_800439B8_overlay_001(*((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)), var_s0, 0, 0);
      var_v0 = var_s2 < 3U;
    }
    var_s0 += 0x14;
  }
  while (var_v0 == 0);
  var_s1 = var_s0 + 0xA;
  var_s1_3 = (var_s2 * 4) + (&D_80131368_overlay_001);
  do
  {
    var_s1_3 -= 4;
    var_s2 -= 1;
    func_800478E8_overlay_001(var_s0, ((*((u16 *) (((char *) var_s1_3) + 0))) + temp_s7) & 0xFFFF, ((*((u16 *) (((char *) var_s1_3) + 2))) + temp_s6) & 0xFFFF);
    if (var_s2 != 0)
    {
      func_800479EC_overlay_001(var_s0, 0x50, (inline_fn(temp_s5) * 0x1E) & 0xFFFF);
    }
    else
    {
      temp_v1_2 = *((u8 *) (((char *) (&D_800E7650_overlay_001)) + 0x1840));
      if (temp_v1_2 == 0x4E)
      {
        func_800478DC_overlay_001(var_s0, 0x50, 0x5A);
      }
      if (temp_v1_2 == 0x52)
      {
        func_800478DC_overlay_001(var_s0, 0x50, 0x78);
      }
    }
    *((s32 **) (((char *) var_s1) + 2)) = &D_8012F4D0_overlay_001;
    *((s16 *) (((char *) var_s1) + 0)) = 0x200;
    var_s1 += 0x14;
    var_s0 += 0x14;
    *((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)) = func_800439B8_overlay_001(*((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)), var_s0, 0, 0);
  }
  while (var_s2 != 0);
}

