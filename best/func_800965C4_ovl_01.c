s32 func_80043650_overlay_001();
s32 func_800439B8_overlay_001(s32, s32);
s32 func_8004789C_overlay_001(s32, u8, u8, u8);
s32 func_800478E8_overlay_001(s32, s32, s32);
extern s32 D_800C527C_overlay_001;
extern s32 D_800DF650_overlay_001;
extern s32 D_8012BF38_overlay_001;
extern s32 D_801310D8_overlay_001;
void func_800965C4_ovl_01(s32 arg0)
{
  s32 temp_a1;
  s32 temp_s3;
  s32 temp_s4;
  s32 *new_var;
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
  var_s1 = var_a1 + 0xA3C;
  var_s2 = 2;
  new_var = &D_8012BF38_overlay_001;
  temp_s4 = (*((s16 *) (((char *) new_var) + 0x34))) + (*((s8 *) (((char *) new_var) + 0x22)));
  temp_s3 = (*((s16 *) (((char *) new_var) + 0x36))) + (*((s8 *) (((char *) new_var) + 0x23)));
  if ((*((u8 *) (((char *) new_var) + 0x2B))) != 0)
  {
    if (((u8) (*((u8 *) (((char *) new_var) + 0x2A)))) < 0x46U)
    {
      *((u8 *) (((char *) new_var) + 0x2B)) = 0U;
    }
    var_v0 = (*((u8 *) (((char *) new_var) + 0x2A))) - 3;
  }
  else
  {
    var_v0 = (*((u8 *) (((char *) new_var) + 0x2A))) + 3;
    if (((u8) (*((u8 *) (((char *) new_var) + 0x2A)))) >= 0x7DU)
    {
      *((u8 *) (((char *) new_var) + 0x2B)) = 1U;
      var_v0 = (*((u8 *) (((char *) new_var) + 0x2A))) + 3;
    }
  }
  *((u8 *) (((char *) new_var) + 0x2A)) = var_v0;
  if ((*((u8 *) (((char *) new_var) + 0xD))) == 0xA)
  {
    var_s4 = temp_s4;
    var_s4 += 0x28;
    var_s3 = temp_s3 - 0x26;
  }
  else
  {
    var_s4 = temp_s4 + (((*((u8 *) (((char *) new_var) + 0xD))) & 1) * 0x28);
    var_s3 = temp_s3 + ((((u8) (*((u8 *) (((char *) new_var) + 0xD)))) >> 1) * 0x1E);
  }
  do
  {
    var_s2 -= 1;
    temp_v0 = ((var_s2 + (arg0 * 3)) * 4) + (&D_801310D8_overlay_001);
    func_800478E8_overlay_001(var_s1, ((*((u16 *) (((char *) temp_v0) + 0))) + var_s4) & 0xFFFF, ((*((u16 *) (((char *) temp_v0) + 2))) + var_s3) & 0xFFFF);
    func_8004789C_overlay_001(var_s1, *((u8 *) (((char *) new_var) + 0x2A)), *((u8 *) (((char *) new_var) + 0x2A)), *((u8 *) (((char *) new_var) + 0x2A)));
    do { func_80043650_overlay_001(); } while (0);
    temp_a1 = var_s1;
    var_s1 += 0x14;
    *((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x208)) = func_800439B8_overlay_001(*((s32 *) (((char *) (&D_800DF650_overlay_001)) + 0x208)), temp_a1);
  }
  while (var_s2 != 0);
}

