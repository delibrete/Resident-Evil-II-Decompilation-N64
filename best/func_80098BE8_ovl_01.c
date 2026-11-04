s32 func_8004789C_ovl_01(s32, s32, s32, s32);
s32 func_800478DC_ovl_01(s32, s32, s32);
s32 func_800479EC_ovl_01(s32, s32, s32);
s32 func_800479F8_ovl_01(s32, s32 *, u16, s32);
s32 func_80047B34_ovl_01(s32, s32);
s32 func_8006C0A0_ovl_01(s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern u8 D_8012BF4A_ovl_01;
extern s32 D_8012F524_ovl_01;
extern s32 D_8012F55C_ovl_01;
extern u8 D_8012FDA4_ovl_01;
extern s32 D_80130270_ovl_01;
extern s32 D_801302D4_ovl_01;
extern s32 D_80131020_ovl_01;
void func_80098BE8_ovl_01(s32 arg0)
{
  s32 temp_v0;
  s32 var_s1_2;
  s32 var_s2;
  s32 var_s3_2;
  s32 var_s4;
  s32 var_s4_2;
  s32 var_s4_3;
  u16 var_s3;
  u8 var_s1;
  void *var_s0;
  void *var_s0_2;
  void *var_s0_3;
  func_8006C0A0_ovl_01(0);
  var_s4 = 2;
  var_s2 = D_800C527C_ovl_01 + 0x3F900;
  if (D_8012FDA4_ovl_01 == 0)
  {
    var_s1 = *((u8 *) (((char *) ((((*((s8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x11))) * 8) + (*((s8 *) (((char *) (&D_8012BF38_ovl_01)) + 0x12)))) + (&D_800C7650_ovl_01))) + 0x21944));
    var_s3 = *((u16 *) (((char *) ((var_s1 * 4) + (&D_80130270_ovl_01))) + 2));
  }
  else
  {
    temp_v0 = 1;
    temp_v0 = ((s32) (((s8) D_8012BF4A_ovl_01) + (((u32) (D_8012BF4A_ovl_01 << 0x18)) >> 0x1F))) >> temp_v0;
    if (!((((s8) D_8012BF4A_ovl_01) - (temp_v0 * 2)) & 0xFF))
    {
      var_s1 = (u8) (((u8) (*((u8 *) (((char *) ((temp_v0 & 0xFF) + (&D_800C7650_ovl_01))) + 0x21963)))) >> 4);
      var_s3 = *((u16 *) (((char *) ((var_s1 * 4) + (&D_801302D4_ovl_01))) + 2));
    }
    else
    {
      var_s1 = (*((u8 *) (((char *) ((temp_v0 & 0xFF) + (&D_800C7650_ovl_01))) + 0x21963))) & 0xF;
      var_s3 = *((u16 *) (((char *) ((var_s1 * 4) + (&D_801302D4_ovl_01))) + 2));
    }
    if (((u32) (var_s1 - 0xB)) < 3U)
    {
      var_s1 = 1;
    }
  }
  var_s0 = var_s2 + 0xC;
  func_800479F8_ovl_01((arg0 + 7) & (~7), &D_8012F55C_ovl_01, *((var_s1 * 2) + (&D_80131020_ovl_01)), 1);
  do
  {
    func_80047B34_ovl_01(var_s2, 1);
    func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
    func_800478DC_ovl_01(var_s2, 0, 0);
    func_800479EC_ovl_01(var_s2, 0x100, (0x100 - var_s3) & 0xFFFF);
    *((s16 *) (((char *) var_s0) + (-2))) = 0;
    *((s32 **) (((char *) var_s0) + 0)) = &D_8012F55C_ovl_01;
    var_s0 += 0x14;
    var_s4 -= 1;
    var_s2 += 0x14;
  }
  while (var_s4 != 0);
  var_s4_2 = 2;
  var_s0_2 = var_s2 + 0xC;
  do
  {
    func_80047B34_ovl_01(var_s2, 1);
    func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
    func_800478DC_ovl_01(var_s2, 0, (var_s1 = 0x100 - var_s3) & 0xFFFF);
    func_800479EC_ovl_01(var_s2, 0x80, var_s3 & 0xFFFF);
    *((s16 *) (((char *) var_s0_2) + (-2))) = 0;
    *((s32 **) (((char *) var_s0_2) + 0)) = &D_8012F55C_ovl_01;
    var_s0_2 += 0x14;
    var_s4_2 -= 1;
    var_s2 += 0x14;
  }
  while (var_s4_2 != 0);
  var_s3_2 = 0x2A;
  var_s4_3 = 2;
  do
  {
    var_s4_3 -= 1;
    var_s1_2 = 2;
    var_s0_3 = var_s2 + 0xA;
    do
    {
      func_80047B34_ovl_01(var_s2, 1);
      func_8004789C_ovl_01(var_s2, 0x80, 0x80, 0x80);
      func_800478DC_ovl_01(var_s2, var_s3_2 & 0xFFFF, 0xC);
      func_800479EC_ovl_01(var_s2, 0xC, 0xD);
      *((s32 **) (((char *) var_s0_3) + 2)) = &D_8012F524_ovl_01;
      *((s16 *) (((char *) var_s0_3) + 0)) = 0x40;
      var_s0_3 += 0x14;
      var_s1_2 -= 1;
      var_s2 += 0x14;
    }
    while (var_s1_2 != 0);
    var_s3_2 -= 0xE;
  }
  while (var_s4_3 != 0);
  *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x5C)) = 0x19;
  *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x5E)) = 0x1E;
}

