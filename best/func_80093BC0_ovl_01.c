s32 func_80047854_ovl_01(s32, s32, s32, s32, s32);
s32 func_8004789C_ovl_01(s32,  s32);
s32 func_800478AC_ovl_01(s32, s32, s32, s32);
s32 func_800478BC_ovl_01(void *, s32, s32, s32);
s32 func_800478CC_ovl_01(s32, s32, s32, s32);
s32 func_800478DC_ovl_01(s32, u8, u8);
s32 func_800479EC_ovl_01(s32, u8, u8);
s32 func_80047B34_ovl_01(s32, s32);
s32 func_80047B50_ovl_01(s32, s32);
s32 func_80047B6C_ovl_01(s32, s32);
s32 func_80047B88_ovl_01(void *, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F4EC_ovl_01;
extern s32 D_8012F508_ovl_01;
extern s32 D_8012FA40_ovl_01;
void func_80093BC0_ovl_01(void)
{
  s32 temp_a0;
  s32 var_s0;
  s32 var_s1_2;
  s32 var_s2;
s32 __repair_phase_var_s2;
  s32 var_s2_2;
  
  s32 var_s2_4;
  s32 var_s4;
  s32 var_s6;
  void *var_s0_2;
  
  void *var_s3;
  void *var_s5;
  var_s2 = 0x19;
  var_s0_2 = (char *) (&D_8012FA40_ovl_01);
  var_s0_2 += (s32) 0x64;
  var_s6 = D_800C527C_ovl_01 + 0x3B8F0;
  var_s5 = D_800C527C_ovl_01 + 0x3B910;
  var_s4 = D_800C527C_ovl_01 + 0x3B800;
  var_s0 = D_800C527C_ovl_01;
  var_s0 += 0x3B970;
  var_s3 = var_s0 + 0xC;
  do
  {
    var_s0_2 -= 4;
    var_s2 -= 1;
    func_80047B34_ovl_01(var_s0, 0);
    func_8004789C_ovl_01(var_s0,  0x80);
    func_800478DC_ovl_01(var_s0, *((u8 *) (((char *) var_s0_2) + 0)), *((u8 *) (((char *) var_s0_2) + 1)));
    temp_a0 = var_s0;
    var_s0 += 0x14;
    if (var_s2)
    {
      func_800479EC_ovl_01(temp_a0, *((u8 *) (((char *) var_s0_2) + 2)), *((u8 *) (((char *) var_s0_2) + 3)));
    }
    else
    {
      func_800479EC_ovl_01(temp_a0, *((u8 *) (((char *) var_s0_2) + 2)), *((u8 *) (((char *) var_s0_2) + 3)));
    }
    *((s16 *) (((char *) var_s3) + (-2))) = 0;
    *((s32 **) (((char *) var_s3) + 0)) = &D_8012F4EC_ovl_01;
    var_s3 += 0x14;
  }
  while (var_s2 != 0);
  var_s2_2 = 6;
  var_s0_2 = var_s4 + 0xA;
  var_s1_2 = 0xD2;
  do
  {
    var_s1_2 -= 0x1E;
    var_s2_2 -= 1;
    func_80047854_ovl_01(var_s4, 0x28, var_s1_2 & 0xFFFF, 0x28, 0x1E);
    *((s32 **) (((char *) var_s0_2) + 0x1A)) = &D_8012F508_ovl_01;
    *((s16 *) (((char *) var_s0_2) + 0)) = 0x200;
    func_80047B6C_ovl_01(var_s4, 0);
    func_800478AC_ovl_01(var_s4, 0x80, 0x80, 0x80);
    var_s0_2 += 0x28;
    var_s4 += 0x28;
  }
  while (var_s2_2 != 0);
  var_s2 = 2;
  do
  {
    var_s2 -= 1;
    func_80047B50_ovl_01(var_s6, 0);
    __repair_phase_var_s2 = 0x20;
    func_800478CC_ovl_01(var_s6, __repair_phase_var_s2, __repair_phase_var_s2, 0x40);
    var_s6 += 0x10;
  }
  while (var_s2 != 0);
  var_s2_4 = 6;
  do
  {
    var_s2_4 -= 1;
    func_800478BC_ovl_01(var_s5, 0x80, __repair_phase_var_s2, __repair_phase_var_s2);
    func_80047B88_ovl_01(var_s5, 0);
    *((s8 *) (((char *) var_s5) + 3)) = 0;
    var_s5 += 0x10;
  }
  while (var_s2_4 != 0);
  *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x50)) = 7;
  *((s16 *) (((char *) (&D_8012BF38_ovl_01)) + 0x52)) = 0xE;
}

