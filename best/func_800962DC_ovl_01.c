s32 func_80043650_overlay_001(s32 arg0);
s32 func_800439B8_overlay_001(s32, s32);
s32 func_8004789C_overlay_001(s32, u8, u8, u8);
s32 func_800478E8_overlay_001(s32, s32, s32);
extern s32 D_800C527C_overlay_001;
extern s32 D_800DF650_overlay_001;
extern s32 D_8012BF38_overlay_001;
extern s32 D_801310A8_overlay_001;
void func_800962DC_ovl_01(s32 arg0)
{
  s32 temp_a1;
  s32 temp_s3;
  s32 temp_s4;
  s32 var_s1;
  s32 var_s2;
  s32 var_s3;
  s32 var_s4;
  u32 temp_v1;
  u32 var_a1;
  u8 var_v0;
  void *temp_v0;
  var_a1 = D_800C527C_overlay_001 + 0x3BB64;
  temp_v1 = D_800C527C_overlay_001 + 0x3C004;
  if (var_a1 < temp_v1)
  {
    var_a1 = temp_v1;
  }
  var_s1 = var_a1 + 0xA00;
  var_s2 = 3;
  temp_v0 = (char *) (&D_8012BF38_overlay_001);
  temp_s4 = (*((s16 *) (((char *) (&D_8012BF38_overlay_001)) + 0x34))) + (*((s8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x1E)));
  temp_s3 = (*((s16 *) (((char *) (&D_8012BF38_overlay_001)) + 0x36))) + (*((s8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x1F)));
  if ((*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 2))) != 0)
  {
    var_v0 = 0x3C;
  }
  else
    if ((*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x29))) != 0)
  {
    if (((u8) (*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28)))) < 0x32U)
    {
      *((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x29)) = 0U;
    }
    var_v0 = (*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28))) - 3;
  }
  else
  {
    var_v0 = (*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28))) + 3;
 do { } while (0);
    if (((u8) (*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28)))) >= 0x79U)
    {
      *((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x29)) = 1U;
      var_v0 = (*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28))) + 3;
    }
  }
  *((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28)) = var_v0;
  if ((*((u8 *) (temp_v0 + 0xC))) == 0xA)
  {
    var_s4 = temp_s4;
    var_s4 += 0x28;
    var_s3 = temp_s3 - 0x26;
  }
  else
  {
    var_s4 = temp_s4 + (((*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0xC))) & 1) * 0x28);
    var_s3 = temp_s3 + ((((u8) (*((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0xC)))) >> 1) * 0x1E);
  }
  do
  {
    var_s2 -= 1;
    temp_v0 = (char *) ((var_s2 + (arg0 * 3)) * 4);
    temp_v0 += (s32) (&D_801310A8_overlay_001);
    if (var_s2)
    {
      func_800478E8_overlay_001(var_s1, ((*((u16 *) (((char *) temp_v0) + 0))) + var_s4) & 0xFFFF, ((*((u16 *) (((char *) temp_v0) + 2))) + var_s3) & 0xFFFF);
    }
    else
    {
      func_800478E8_overlay_001(var_s1, ((*((u16 *) (((char *) temp_v0) + 0))) + var_s4) & 0xFFFF, ((*((u16 *) (((char *) temp_v0) + 2))) + var_s3) & 0xFFFF);
    }
    func_8004789C_overlay_001(var_s1, *((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28)), *((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28)), *((u8 *) (((char *) (&D_8012BF38_overlay_001)) + 0x28)));
    do
    {
 do { } while (0);
      func_80043650_overlay_001(arg0);
    }
    while (0);
    temp_a1 = var_s1;
    var_s1 += 0x14;
    *((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)) = func_800439B8_overlay_001(*((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x204)), temp_a1);
  }
  while (var_s2 != 0);
}
