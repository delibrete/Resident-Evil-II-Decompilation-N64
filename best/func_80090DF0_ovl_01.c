s32 func_8004789C_overlay_001(s32, s32, s32, s32);
s32 func_800478DC_overlay_001(s32, u8, u8);
s32 func_800479EC_overlay_001(s32, u8, u8);
s32 func_80047B34_overlay_001(s32, s32);
s32 func_80090B1C_overlay_001();
extern s32 D_800C527C_overlay_001;
extern u8 D_8012BF52_overlay_001;
extern s32 D_8012F524_overlay_001;
extern s32 D_8012F540_overlay_001;
extern s32 D_8012F9B0_overlay_001;
extern s32 D_80130C54_overlay_001;
void func_80090DF0_ovl_01(void)
{
  s32 temp_a0;
  s32 temp_a0_2;
  s32 var_s0;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_s2_3;
  s32 var_s2_4;
  s32 var_s3;
  s32 var_s4_2;
  u8 temp_s7;
  u8 var_s4_3;
  void *temp_v0;
  void *var_s1;
  int new_var;
  void *var_s1_2;
  void *var_s1_3;
  void *var_s1_4;
  void *var_s3_2;
  void *var_s3_3;
  temp_s7 = D_8012BF52_overlay_001;
  var_s2 = 2;
  var_s0 = D_800C527C_overlay_001 + 0x40800;
  var_s1 = var_s0 + 0xA;
  do
  {
    func_80047B34_overlay_001(var_s0, 0);
    func_8004789C_overlay_001(var_s0, 0x80, 0x80, 0x80);
    func_800478DC_overlay_001(var_s0, 0U, 0U);
    func_800479EC_overlay_001(var_s0, 0xCU, 0xCU);
    *((s32 **) (((char *) var_s1) + 2)) = &D_8012F524_overlay_001;
    *((s16 *) (((char *) var_s1) + 0)) = 0x20;
    var_s1 += 0x14;
    var_s2 -= 1;
    var_s0 += 0x14;
  }
  while (var_s2 != 0);
  var_s3 = 2;
  var_s3 = 0x1C;
  do
  {
    var_s3 -= 0xE;
    var_s3 -= 1;
    var_s2_2 = 2;
    var_s1_2 = var_s0 + 0xA;
    loop_4:
    func_80047B34_overlay_001(var_s0, 1);

    func_8004789C_overlay_001(var_s0, 0x80, 0x80, 0x80);
    func_800478DC_overlay_001(var_s0, var_s3 & 0xFFFF, 0xCU);
    func_800479EC_overlay_001(var_s0, 0xEU, 0xCU);
    *((s32 **) (((char *) var_s1_2) + 2)) = &D_8012F524_overlay_001;
    *((s16 *) (((char *) var_s1_2) + 0)) = 0x40;
    var_s1_2 += 0x14;
    var_s2_2 -= 1;
    var_s0 += 0x14;
    if (var_s2_2 != 0)
    {
      goto loop_4;
    }
  }
  while (var_s3 != 0);
  var_s4_2 = 2;
  var_s1_3 = ((&D_8012F9B0_overlay_001) + 8) - 4;
  do
  {
    var_s4_2 -= 1;
    var_s2_3 = 2;
    var_s3_2 = var_s0 + 0xA;
    loop_8:
    func_80047B34_overlay_001(var_s0, 1);

    func_8004789C_overlay_001(var_s0, 0x80, 0x80, 0x80);
    var_s2_3 -= 1;
    func_800478DC_overlay_001(var_s0, *((u8 *) (((char *) var_s1_3) + 0)), *((u8 *) (((char *) var_s1_3) + 1)));
    temp_a0 = var_s0;
    var_s0 += 0x14;
    func_800479EC_overlay_001(temp_a0, *((u8 *) (((char *) var_s1_3) + 2)), *((u8 *) (((char *) var_s1_3) + 3)));
    *((s32 **) (((char *) var_s3_2) + 2)) = &D_8012F540_overlay_001;
    *((s16 *) (((char *) var_s3_2) + 0)) = 0;
    var_s3_2 += 0x14;
    if (var_s2_3 != 0)
    {
      goto loop_8;
    }
    var_s1_3 -= 4;
  }
  while (var_s4_2 != 0);
  temp_v0 = (temp_s7 * 8) + (&D_80130C54_overlay_001);
  var_s4_3 = *((u8 *) (((char *) temp_v0) + 4));
  var_s1_4 = ((var_s4_3 * 0x10) + (*((s32 *) (((char *) temp_v0) + 0)))) - 0x10;
  do
  {
    var_s4_3 -= 1;
    var_s2_4 = 2;
    var_s3_3 = var_s0 + 0xA;
    loop_12:
    func_80047B34_overlay_001(var_s0, 1);

    func_8004789C_overlay_001(var_s0, 0x80, 0x80, 0x80);
    var_s2_4 -= 1;
    func_800478DC_overlay_001(var_s0, *((u8 *) (((char *) var_s1_4) + 0)), *((u8 *) (((char *) var_s1_4) + 1)));
    temp_a0_2 = var_s0;
    var_s0 += 0x14;
    func_800479EC_overlay_001(temp_a0_2, *((u8 *) (((char *) var_s1_4) + 2)), *((u8 *) (((char *) var_s1_4) + 3)));
    *((s32 **) (((char *) var_s3_3) + 2)) = &D_8012F540_overlay_001;
    new_var = 0;
    *((s16 *) (((char *) var_s3_3) + new_var)) = 0x20;
    var_s3_3 += 0x14;
    if (var_s2_4 != 0)
    {
      goto loop_12;
    }
    var_s1_4 -= 0x10;
  }
  while (var_s4_3 != 0);
  func_80090B1C_overlay_001();
}

